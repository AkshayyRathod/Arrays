class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashset;
        for(int num : nums){
            hashset.insert(num);
        }
        int longestStreak = 0;
        for(int num : nums)
        {
            if(!hashset.count(num-1)){
               int currentNum=num;
                int currentStreak=1;
                while(hashset.count(currentNum+1)){
                currentNum += 1;
                 currentStreak +=1;
                }
                longestStreak = max(currentStreak,longestStreak);
            }
        }
        return longestStreak;
    }
};


//extreme fastest:::::::
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count = 0,maxcount = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1] - nums[i] == 1){
                count++;
            }
            else if(nums[i+1] == nums[i]){
                continue;
            }
            else{
                maxcount = max(maxcount,count);
                count = 0;
            }
        }
        maxcount = max(maxcount,count);
        return maxcount+1;
    }
};

// ayushi
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0; i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)!=s.end())
                continue;
            else{
                int count=0;
                int current=nums[i];
                while(s.find(current)!=s.end()){
                 count++;
                 current++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};