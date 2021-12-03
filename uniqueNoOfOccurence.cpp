class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(auto& i : arr){
            mp[i]++;
        }
        map<int,int> freq;
        for(auto i=mp.begin(); i!=mp.end(); i++){
            freq[i->second]++;
        }
        for(auto& i : freq){
          if(i.second!=1)
              return false;
        }
        return true;
    }
};