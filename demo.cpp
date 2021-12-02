#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int ans=-1;
	int res=-1;
	for(int i=0; i<=10; i++)
	{
	    if(n/i==0){
	        ans=i;
	        res=max(ans,res);
	    }
	}
	cout<<res;
	return 0;
}
