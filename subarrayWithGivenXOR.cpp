int Solution::solve(vector<int> &A, int B) {
    vector<int> prefix(A.size(),0);
    prefix[0]=A[0];

    for(int i=0;i<A.size();i++)
    {
        prefix[i]=prefix[i-1] ^ A[i];
    }

    int ans=0;
    unordered_map<int,int> mp;

    for(int i=0; i<prefix.size();i++)
    {
        int xor1 = B ^ prefix[i];

        if(mp.find(xor1)!=mp.end())
          ans += mp[xor1];

        mp[prefix[i]]++;

        if(prefix[i]==B)
          ans++;
    }
    return ans;
}
