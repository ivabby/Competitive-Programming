#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <array>
#include <stack>
#include <queue>
#include <random>
#include <numeric>
#include <functional>
#include <chrono>
#include <utility>
#include <iomanip>
#include <assert.h>

using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()
#define int long long

const int MXN = 1e5 + 5, INF = 1e9 + 5;
vector<pair<int, int>> g[MXN];
vector<int> req;
int energy[MXN];

void dfs(int u, int p, int depth) {
    if (sz(g[u]) <= 1 && u != 0)
        req.push_back(energy[u]);

    for (const auto &[v, wt] : g[u]) {
        if (v == p) continue;
        energy[v] = energy[u] + depth * wt;

        dfs(v, u, depth + 1);
    }
}

void solve() {
    int N, M;
    cin >> N >> M;

    vector<int> pilgrims(M);
    for (auto &x : pilgrims)
        cin >> x;

    for (int i = 0; i < N - 1; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        u--, v--;

        g[u].emplace_back(v, wt);
        g[v].emplace_back(u, wt);
    }

    dfs(0, -1, 1);

    sort(all(req));
    sort(all(pilgrims));

    int ans = 0;

    for (int i = 0, j = 0; i < M && j < sz(req); i++) {
        if (pilgrims[i] >= req[j]) {
            j++;
            ans++;
        }
    }

    cout << ans << "\n";

    req.clear();
    for (int i = 0; i <= N; i++) {
        g[i].clear();
        energy[i] = 0;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}
