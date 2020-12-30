//By cp_days, contest: Codeforces Beta Round #65 (Div. 2), problem: (A) Way Too Long Words, Accepted,
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--){
	string w;
	cin>>w;
	int l =w.size();
	if(l<=10)
	{
		cout<<w<<endl;
	}
	else
	{
		cout<<w.at(0)<<l-2<<w.at(l-1)<<endl;
	}
}
	return 0;
}
	
