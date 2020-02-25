class Solution {
    public int minSubArrayLen(int s, int[] a) {
        int n = a.length;
        int mini = Integer.MAX_VALUE;
        int i = 0 , j = -1;
        int ss = 0;
        while(i<n)
        {
            while(j+1<n && ss<s)
            {
                j++;
                ss+=a[j];
            }
            if(ss >= s)
                mini = Math.min(mini , j-i+1);
            ss-=a[i];
            i++;
        }
        return (mini == Integer.MAX_VALUE)?0:mini;
    }
}
