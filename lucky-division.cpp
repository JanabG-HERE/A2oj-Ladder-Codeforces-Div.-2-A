//By janab.g, contest: Codeforces Beta Round #91 (Div. 2 Only), problem: (A) Lucky Division, Accepted

#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int p,l,c=0,k=0;
	cin>>p;
	int n=p;
	while(n!=0)
	{
		l=n%10;
		if(l==4 || l==7)
		{
			c++;
		}
		k++;
		n=n/10;
	}
	//cout<<c<<" "<<k<<"\n";	
	if(c==k)
	{
		cout<<"YES";
		return 0;
	}
	else if(p%4==0 || p%7==0 || p%44==0 || p%47==0 || p%74==0 || p%77==0 || p%444==0 || p%447==0 || p%477==0 || p%744==0 || p%747==0 || p%777==0)
	{
		cout<<"YES";
		return 0;
	}
	else {
		cout<<"NO";
	}
	
	return 0;
}
