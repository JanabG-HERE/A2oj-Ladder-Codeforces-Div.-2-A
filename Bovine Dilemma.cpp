#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		set <int> ans;
		for(int i=0;i<size;i++)
			for(int j=i+1;j<size;j++)
			{	
				ans.insert(abs(arr[i]-arr[j]));
				
			}
		cout<<"Ans- "<<ans.size()<<endl;
	}
	return 0;
}
