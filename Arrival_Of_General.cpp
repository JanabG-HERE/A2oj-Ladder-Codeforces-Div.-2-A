//By janab.g, contest: Codeforces Round #103 (Div. 2), problem: (A) Arrival of the General, Accepted, #, Copy
#include <bits/stdc++.h>
#define int long long
#define double long double
using namespace std;
int a[100005];
int n,x,y;
main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	cin>>n;
	for(int i=0; i<n; i++)
	{
	cin>>a[i];
	if (a[i]>a[x])x=i;
	if (a[i]<=a[y])y=i;
	}
	cout<< n-y-1+x-(y<x)<<"\n";
}
 
