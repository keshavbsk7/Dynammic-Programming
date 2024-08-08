#include<iostream>
#include<vector>
using namespace std;
int min(int a,int b)
{
	if(a<b) return a;
	else return b;
}
int eats(int n,vector<int>&memo)
{
	if(memo[n]!=-1)
	{
		return memo[n];
	}
	if(n==0)
	{
		return 0;
	}
	else if(n==1) return 1;
	
	int x=1+(n%2)+eats(n/2,memo);
	int y=1+(n%3)+eats(n/3,memo);
	memo[n]=min(x,y);
	return memo[n];
}
int main()
{
	 vector<int> test_cases = {1, 4, 7, 10, 9, 0, 19};
    for (int n : test_cases)
    {
        vector<int> memo(n + 1, -1);
        cout << "n = " << n << ": " << eats(n, memo) << endl;
    }
    return 0;
}