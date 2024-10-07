#include<iostream>
#include<cmath>
using namespace std;
int frogjump(int n,int energy[])
{
	int prev=0;
	int previ=0;
	int curr;
	for(int i=1;i<n;i++){
		int left=prev+abs(energy[i]-energy[i-1]);
	int right=INT_MAX;
	if(n>1)
		 right=previ+abs(energy[i]-energy[i-2]);
	curr =min(left,right);
	previ=prev;
	prev=curr;
	}
	return prev;
}
int main()
{
	int energy[6]={30,10,60,10,60,50};

	cout<<frogjump(6,energy);
}
