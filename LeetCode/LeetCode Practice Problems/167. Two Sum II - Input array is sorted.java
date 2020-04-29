class Solution {
    public int[] twoSum(int[] A, int target) {
        int a[] = new int[2];
        int i = 0 , j = A.length - 1;
        while(i < j)
        {
            if(A[i] + A[j] == target)
            {
                a[0] = i + 1;
                a[1] = j + 1;
                break;
            }
            if(A[i] + A[j] > target)
                j--;
            else
                i++;
        }
        return a;
    }
}
