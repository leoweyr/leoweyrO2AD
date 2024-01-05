class Solution {
    public boolean isPalindrome(int x) {
        String intArray = String.valueOf(x);
        int inArraySize = intArray.length();
        for(int index = 0; index < inArraySize; index ++){
            if(intArray.charAt(index) != intArray.charAt(intArray.length() - index - 1)){
                return false;
            }
        }
        return true;
    }
}