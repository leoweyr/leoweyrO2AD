class Solution {
    public int[] twoSum(int[] nums, int target) {
        int numsSize = nums.length;

        for(int numsMainIndex = 0; numsMainIndex < numsSize; numsMainIndex ++){
            for(int startPosition = numsMainIndex + 1; startPosition < numsSize; startPosition++){
                int[] returnArray = new int[2];
                returnArray[0] = numsMainIndex;
                for(int numsSubIndex = startPosition; numsSubIndex < numsSize; numsSubIndex ++){
                    if(nums[numsMainIndex] + nums[numsSubIndex] == target){
                        returnArray[1] = numsSubIndex;
                        return returnArray;
                    } else {
                        break;
                    }
                }
            }
        }
        return null;
    }
}