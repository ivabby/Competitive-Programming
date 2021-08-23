string isSubset(int a1[], int a2[], int n, int m) {
    vector<int> f(100001,0);
    for(int i=0;i<n;i++) f[a1[i]]++;
    for(int i=0;i<m;i++) f[a2[i]]--;
    
    for(int i=0;i<100001;i++) {
        if(f[i] < 0) {
            return "No";
        }
    }
    
    return "Yes";
}
