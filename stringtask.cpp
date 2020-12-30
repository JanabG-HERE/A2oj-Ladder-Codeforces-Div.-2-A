////By cp_days, contest: Codeforces Beta Round #89 (Div. 2), problem: (A) String Task, Accepted, #,
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	string vowel="aeiouy";
	for (char c: vowel) {
        s.erase(remove(s.begin(), s.end(), c), s.end());
    }
    int n=s.size();
    for(int i=0;i<n;i++)
    {
		cout<<"."<<s[i];
	}
	return 0;
    
		
}		
