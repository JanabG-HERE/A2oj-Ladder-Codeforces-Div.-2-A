By janab.g, contest: Codeforces Round #694 (Div. 2), problem: (A) Strange Partition, Happy New Year!, #
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <set>
#define ll long long
using namespace std;
 
 
 
int main() {
    ll t;
    cin >> t;
    while(t--) 
    {
		ll n,x;
        cin>>n>>x;
        ll t1=0,t2=0;
        for(int i=0;i<n;i++)
        {
			ll in;
			cin>>in;
			t1+=in;
			//cout<<"c ="<<ceil((in*1.0)/(x*1.0))<<endl;
			t2+= (in/x);
			if(in%x) t2++;
			//cout<<t2<<"--"<<endl;
		}
		ll other=t1/x;
		if(t1%x) other++;
		cout<<other<<" "<<t2<<endl;
	}
			
        
        
                    
    return 0;
}
/*
For calculating 
MIN = (sum of in)/x + ceil((sum of in)/x)
MAX = sum of all (in/x) + sum of all ceil(in/x)
*/
