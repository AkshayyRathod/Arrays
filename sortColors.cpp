  // dutch national flag algorithm  -> 3 POINTERS


  class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int i = 0;
        int j = nums.size()-1;
        int k = j;
        while(i<=j){
            int curr = nums[j];
            if(curr == 0){
                swap(nums, i++ , j);
            }else if(curr == 2){
                swap(nums, j-- , k--);
            }else
                j--;
         }
         
       }
     void swap(vector<int>& nums, int i, int j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
};