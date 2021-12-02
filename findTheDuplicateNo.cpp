class Solution {
public:          // n and 1
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;
    }
};

// first brute force array
//  we will sort the array , by linearly traveseing i,i+1 coz duplicate elment will be together in sorted array 
//  nlogn complexity.
//  another is hashing n and 1.
