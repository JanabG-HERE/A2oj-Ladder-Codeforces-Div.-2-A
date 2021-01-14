//By janab.g, contest: Educational Codeforces Round 102 (Rated for Div. 2), problem: (A) Replacing Elements, Accepted, #, Copy
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <math.h>
#include <cmath>
#include <set>
#define ll long long
using namespace std;
 
 
 
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n ,d,a=0;
		cin>>n>>d;
		vector<int>v(n);
		for(ll i=0;i<n;i++)
		{
			
			cin>>v[i];
			if(v[i]<=d)
			{
				a++;
			}
			
		}
		//cout<<a<<endl;
		if(a==n)
		{
			cout<<"Yes"<<endl;;
		}
		sort(v.begin(), v.end());
		//sort(v.begin(), v.end(), greater<int>()); 
		for(ll i=0;i<n;i++)
		{
			//cout<<v[i]<<endl;
			
			
			if(v[i]>d)
			{
				if(v[0]+v[1]<=d)
				{
					cout<<"Yes"<<endl;
					break;
				}
				else
				{
					cout<<"No"<<endl;
					break;
				}
			}
			
		}
				
			
		
	}
	return 0;
	
}
