//By janab.g, contest: Codeforces Round #258 (Div. 2), problem: (A) Game With Sticks, Accepted, #, 
#include <bits/stdc++.h>
#define int long long
#define double long double
using namespace std;
main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	int n,m;
	cin>>n>>m;
	if(m==1 || n==1)
	{
		cout<<"Akshat";
		return 0;
		
	}
	int min=(n<m)?n:m;
	if(min%2==0)
	{
		cout<<"Malvika";
		return 0;
		
	}
	else if(min%2!=0)
	{
		cout<<"Akshat";
		return 0;
	}
		
	
 
	
}
 
