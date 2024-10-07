#include<iostream>
#include<vector>
using namespace std;
long long countnumberstairs(long long n,vector<int>memo)
{
	if(memo[n]!=0) return memo[n];
	if(n<1) return 1;
	
	 memo[n]=(n-1)+(n-2);
	 return memo[n];
}
int main()
{
	vector<int>memo(3,0);
	cout<<countnumberstairs(5,memo);
}