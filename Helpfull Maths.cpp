//By cp_days, contest: Codeforces Round #197 (Div. 2), problem: (A) Helpful Maths, Accepted, #, Copy
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
	char sw[100], sn[100];
	cin>>sw;
	int j=0;
	for(int i=0;sw[i]!='\0';i++)
	{
		if(sw[i]!='+')
		{
			sn[j]=sw[i];
			j++;
		}
	}
	sn[j]='\0';
	sort(sn,sn+j);
	cout<<sn[0];
	for(int i=1;i<j;i++)
	{
		cout<<"+"<<sn[i];
	}
	return 0;
}
