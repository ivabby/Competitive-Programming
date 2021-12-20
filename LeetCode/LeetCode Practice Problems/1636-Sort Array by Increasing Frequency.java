class Solution {
    public int[] frequencySort(int[] nums) {
        Map<Integer,Integer> map = new HashMap();
        //  Count frequency of each number
        Arrays.stream(nums).forEach(n -> map.put(n , map.getOrDefault(n , 0) + 1));
        //  Sort array
        return Arrays.stream(nums).boxed()
                    .sorted((a , b) -> map.get(a) != map.get(b)? map.get(a) - map.get(b) : b - a)
                    .mapToInt(n -> n)
                    .toArray();
        
    }
}
