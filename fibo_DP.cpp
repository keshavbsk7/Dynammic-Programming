#include<iostream>
#include<vector>
using namespace std;

long long fibo(int n,long long memo[])
{
	if(memo[n]!= 0) return memo[n];
	if(n<=2) return 1;
	else{
		memo[n]=fibo(n-1,memo)+fibo(n-2,memo);
		return memo[n];
	}
}
int main()
{
	int n;
	cin>>n;
	long long memo[n+1]={0};
	cout<<fibo(n,memo);
}
