class Solution {    // wrong ans///////////////...../......////////////.
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if(intervals.size() == 0){
            return result;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> temp = intervals[0];
        for(int i=0; i<intervals.size(); i++){
           if(intervals[0] <= temp[1]){
           temp[1] = max(temp[1],intervals[i][1]);
           }else{
             result.push_back(temp);
               temp = intervals[i];
           }
        }
        result.push_back(temp);
    }
};

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<vector<int>> ans;
        for(int i = 0; i<n; i++)
        {
            if(ans.empty())
            {
                ans.push_back(intervals[i]);
            }
            else
            {
              vector<int> &v = ans.back();
                int y = v[1];
                if(intervals[i][0]<=y)
                {
                    v[1]=max(y,intervals[i][1]);
                }
                else
                {
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};