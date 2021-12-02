//for gfg row && col are sorted

#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int arr[n][m];



   int i = 0;
   j = m-1;
   while(i<n && j>=0){
       if(mat[i][j]==x){
           cout<<"n found at"<<i<<", "<<j;
           return 1;
       }
       if(mat[i][j]>x){
           j--;
       }else
         i++;
   }

    return 0;
}

// for leetcode all row sorted
class Solution {
public:                              // /col -> row , %col -> col  
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0) return false;
        int n=matrix.size();
        int m=matrix[0].size();
        
        int lo=0;
        int hi=(n*m)-1;
        
        while(lo<=hi){
          int mid=(lo + (hi - lo) / 2);
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
            if(matrix[mid/m][mid%m] > target){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return false;
    }
};
