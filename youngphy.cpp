//By cp_days, contest: Codeforces Beta Round #63 (Div. 2), problem: (A) Young Physicist, Accepted,
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ,x,y,z,xsum=0,ysum=0,zsum=0;
	cin>>n;
	while(n--)
	{
		cin>>x>>y>>z;
		xsum+=x;
		ysum+=y;
		zsum+=z;
	}
	if(xsum==0&&ysum==0&&zsum==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
	return 0;
}
	
