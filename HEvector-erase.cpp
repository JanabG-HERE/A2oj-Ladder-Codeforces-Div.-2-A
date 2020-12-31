//hacker earth ques STL..
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int n,x;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
