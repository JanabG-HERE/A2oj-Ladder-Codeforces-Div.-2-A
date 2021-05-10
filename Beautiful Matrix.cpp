//By janab.g, contest: Codeforces Round #161 (Div. 2), problem: (A) Beautiful Matrix, Accepted,
#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	vector<int> v;
	int m,n;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			int k;
			cin>>k;
			v.push_back(k);
			if(k==1)
			{
				m=i;
				n=j;
			}
		}
	}
	if(m==2 and n==2)
	{
		cout<<"0";
	}
	else
	{
		cout<<abs(m-2)+abs(n-2);
	}
	
		
	return 0;
}
