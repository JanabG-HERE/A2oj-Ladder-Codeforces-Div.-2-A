//hACKER eARTH qUES..
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    while(n--)
    {
        int q,x;
        string key;
        cin>>q;
        
        if(q==1)
        {
            cin>>key;
            cin>>x;
            map<string,int>::iterator itr=m.find(key);
            if(itr==m.end())
            {
                m.insert(make_pair(key,x));
            }
            else
            {
                int l=x+m[key];
                m.erase(key);
                m.insert(make_pair(key,l));
            }
        }
        else if(q==2)
        {
            cin>>key;
            m.erase(key);
        }
        else if(q==3)
        {
            cin>>key;
            map<string,int>::iterator itr=m.find(key);
            if(itr==m.end())
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<m[key]<<endl;
            }
        }    
    }
    return 0;
}
