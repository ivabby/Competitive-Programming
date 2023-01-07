class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int n = gas.length;
        int sum = 0 , gasInTank = 0 , start = 0;
        for(int i=0;i<n;i++) {
            gasInTank += gas[i] - cost[i];
            sum += gas[i] - cost[i];
            if(gasInTank < 0) {
                start = i+1;
                gasInTank = 0;
            }
        }

        return sum < 0 ? -1 : start;
    }
}
