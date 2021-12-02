class Solution {
public:
    void nextPermutation(vector<int>& nums) {
                                   // idx - just greter that idx-1 - swap - reverse after idx to end
        int idx=0;
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(nums[i] > nums[i-1])
            {
                idx = i;
                break;
            }
        }
        
        if(idx < 0)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            int prev=idx;
            for(int i = idx+1; i<nums.size(); i++)
          {
            if(nums[i] > idx and nums[i] <= prev)
            {
               prev=i;
            }  
          }
               swap(nums[idx-1],nums[prev]);
               reverse(nums.begin()+idx,nums.end());
        }
        
   }
};