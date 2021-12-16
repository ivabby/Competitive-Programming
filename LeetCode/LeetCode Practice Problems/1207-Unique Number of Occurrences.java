class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        int cnt[] = new int[2001];
        int freq[] = new int[1001];
        
        for(int num: arr) ++cnt[num + 1000];
        
        for(int i=0;i<2001;i++) {
            if(cnt[i] > 0)
                freq[cnt[i]]++;
            if(freq[cnt[i]] > 1) return false;
        }
        return true;
    }
}
