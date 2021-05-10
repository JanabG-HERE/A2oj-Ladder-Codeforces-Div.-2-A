//By janab.g, contest: Codeforces Beta Round #97 (Div. 2), problem: (A) Presents, Accepted,
//WEIRD QUES CAN'T UNDERSTAND TOOK HELP FROM YOUTUBE

#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,inx=1;
	cin>>n;
	int s[n],l=n;
	while(n--)
	{
		int l;
		cin>>l;
		s[l]=inx;
		inx++;
	}
	for(int i=1;i<=l;i++)
	{
		cout<<s[i]<<" ";
	}
		
	return 0;
}
