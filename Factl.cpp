#include<bits/stdc++.h>
using namespace std;
int dp[10000];
int fact(int num)
{
	if(num<=1)
	{
		return num;
	}
	if(dp[num]!=-1)
	{
		return dp[num];
	}
	if(num>1)
	{
		return dp[num]=num*fact(num-1);
	}
	
}
int main()
{
	int num;
	cout<<"enter a number"<<endl;
	cin>>num;
	for(int i=0;i<=num;i++)
	{
		dp[i]=-1;
	}
	fact(num);
	cout<<"factorial of the entered number is "<<fact(num);
	return 0;
}

