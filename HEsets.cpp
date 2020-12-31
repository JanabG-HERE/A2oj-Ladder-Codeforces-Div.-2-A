//Hacker Rank Ques. STL
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>con;
    while(n--)
    {
        int q,x;
        cin>>q;
        
        if(q==1)
        {
            cin>>x;
            con.insert(x);
        }
        else if(q==2)
        {
            cin>>x;
            con.erase(x);
        }
        else if(q==3)
        {
            cin>>x;
            set<int>::iterator itr=con.find(x);
            if(itr==con.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }    
    }
    return 0;
}
