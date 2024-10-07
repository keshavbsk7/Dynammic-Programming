#include<iostream>
#include<cmath>
using namespace std;
int frogjump(int n,int energy[],int memo[])
{
	
	if(memo[n]!=0) return memo[n];
	int right=INT_MAX;
	if(n==0) return 0;
	
	int left=frogjump(n-1,energy,memo)+abs(energy[n]-energy[n-1]);
	if(n>1)
		 right=frogjump(n-2,energy,memo)+abs(energy[n]-energy[n-2]);
	return memo[n]=min(left,right);
}
int main()
{
	int energy[6]={30,10,60,10,60,50};
	int memo[6+1]={0};
	cout<<frogjump(6-1,energy,memo);
}
