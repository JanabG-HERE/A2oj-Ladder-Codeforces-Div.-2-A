#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,mx,mn,min=0,max=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int l;
		cin>>l;
		if(i==0)
			mn=l;
		mn = (l <= mn)? l : mn;
		if(l<=mn)
			min=i;
		mx = (l >= mx)? l : mx;
		if(l >= mx)
			max=i;
	}
	if(min<=n/2 and max>=n/2)
	{
		cout<<(((n-1)-min)+(abs(0-max)))-1;
	}
	else
	{
		cout<<((n-1)-min)+(abs(0-max));
	}
	
	
		
	return 0;
}
