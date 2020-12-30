//By cp_days, contest: Codeforces Beta Round #85 (Div. 2 Only), problem: (A) Petya and Strings, Accepted, #
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
 
int main()
{
	string word1,word2;
	cin>>word1>>word2;
	
	transform(word1.begin(),word1.end(),word1.begin(), ::tolower);
	transform(word2.begin(),word2.end(),word2.begin(), ::tolower);
	
	int n1=word1.size();
	for(auto i=0;i<n1;i++)
	{
		if(word1[i]<word2[i])
		{
			cout << -1;
			return 0;
		}
		else if(word1[i]>word2[i])
		{
			cout << 1;
			return 0;
		}
	}
	cout << 0;
	
	
	return 0;
}
