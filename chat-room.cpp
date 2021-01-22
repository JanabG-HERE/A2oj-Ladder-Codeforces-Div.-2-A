By janab.g, contest: Codeforces Beta Round #54 (Div. 2), problem: (A) Chat room, Accepted,
#include <bits/stdc++.h> 
#include <string>
using namespace std;
#define ll long long

int main()
{
    string t,cmp("hello");
    cin>>t;
    int j=0;
    for(int i=0;i<t.size();i++)
    {
		if(t[i]=='h'||t[i]=='e'||t[i]=='l'||t[i]=='l'||t[i]=='o')
		{
			if(cmp[j]==t[i])
			{
				j++;
				//cout<<j<<endl;
			}
		}
		else
		{
			t[i]='\n';
		}
	}
	if(j==5)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
	}
		
    return 0;
}
