By janab.g, contest: Codeforces Round #111 (Div. 2), problem: (A) Twins, Accepted, #, 
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <set>
#define ll long long
using namespace std;
 
 
 
int main() 
{
	ll t,sum=0,ans=0,count=0;
	cin>>t;
	vector <int> v(t);
	for(ll i=0;i<t;i++)
	{
		ll y;
		cin>>y;
		sum+=y;
		v.push_back(y);
	}
	//cout<<sum<<endl;
	sort(v.begin(), v.end(), greater<int>()); 
	for(ll i =0; i<t; i++)
	{
		ans+=v[i];
		if(ans<=sum/2){
			count++;
		}
	}
	//cout<<ans<<endl;
	cout<<(count+1)<<endl;
	return 0;
}
