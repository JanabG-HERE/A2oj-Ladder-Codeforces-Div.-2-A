//Hacker Earth Ques..
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,x,dd,de,dl;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>dd;
    v.erase(v.begin()+dd-1);
    
    cin>>de>>dl;
    v.erase(v.begin()+de-1,v.begin()+dl-1);
    
    cout<<v.size()<<endl;
    
    vector<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<" ";
    }

    return 0;
}
