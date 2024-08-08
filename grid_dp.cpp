#include<iostream>
#include<map>
#include <iterator>
//#include<pair>
using namespace std;
long long grid(int a,int n,map<pair<int,int>,long long> &m)
{
	pair<int, int> key = make_pair(a,n);
	if (m.find(key) != m.end()) return m[key];
	if(a==1&&n==1) return 1;
	if(a==0||n==0) return 0;
	m[key]=grid(a-1,n,m)+grid(a,n-1,m);
	return m[key];
}
int main()
{
	map<pair<int,int>,long long> m;
	
	cout<<grid(18,18,m);
	
	
}