class Solution {
public:
    int subtractProductAndSum(int n) {
        int a = 0 , b = 1;
        while(n>0)
        {
            a = a + n%10;
            b = b * (n%10);
            n/=10;
        }
        // cout<<a<<" "<<b;
        return (b-a);
    }
};
