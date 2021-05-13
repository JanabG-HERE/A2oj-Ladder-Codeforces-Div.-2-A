#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,mx,mn,min=0,max=0;
	cin >> n;
	int v[n];
	for(int i=0;i<n;i++)
	{
		int l;
		cin>>l;
		v[i]=l;
		if(i==0)
			mn=l;
		mn = (l <= mn)? l : mn;
		if(l<=mn)
			min=i;
	}
	for(int i=n-1;i>=0;i--)
	{
		mx = (v[i] > mx)? v[i] : mx;
		if(v[i] >= mx)
			max=i;
	}
	
	if( min < max)
	{
		cout<<(((n-1)-min)+(abs(0-max)))-1;
	}
	
		
	else if(max < min)
	{
		cout<<((n-1)-min)+(abs(0-max));
	}
	
	
		
	return 0;
}
