#include<iostream>
#include<vector>
using namespace std;
bool cansum(int target,int data[],int n,vector<bool>&v)
{
	if(v[target]>-1) return true;
	if(target==0) return true;
	if(target<0) return false;
	for(int i=0;i<n;i++)
	{
		int rem=target-data[i];
//		cout<<rem;
		if(cansum(rem,data,n,v)==true)
		{
			v[target]=true;
			return true;
		}
	}
	v[target]=false;
	return false;
}
int main()
{
	int data[]={2,3,5};
	vector<bool>v(3,-1);
	cout<<cansum(1000,data,3,v);
}