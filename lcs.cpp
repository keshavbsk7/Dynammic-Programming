#include<iostream>
#include<vector>
using namespace std;
int max(int a,int b)
{
	if(a>b)return a;
	else return b;
}
int lcs(int x,int y,vector<vector<int>>& memo,string s1,string s2)
{
	if(x<0||y<0)
	{
		return 0;
		
	}
	if(memo[x][y]!=-1) return memo[x][y];
	
	if(s1[x]==s2[y])
	{
		memo[x][y]=1+lcs(x-1,y-1,memo,s1,s2);
		return memo[x][y];
	}
	else{
		memo[x][y]=max(lcs(x-1,y,memo,s1,s2),lcs(x,y-1,memo,s1,s2));
		return memo[x][y];
	} 

}
int main()
{
	int x=3,y=3;
	vector<vector<int>> memo(x+1,vector<int>(y+1,-1));
	
	cout<<lcs(3,3,memo,"abced","acbed");
}