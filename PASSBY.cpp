#include <bits/stdc++.h>
using namespace std;

void swap1pbv(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" 1 "<<b<<endl;
}

void swap2pba(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void swap3pbr(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}


int main()
{
	//PASS BY VALUE ACTUAL PARAMETER DOSE NOT CHANGE
	int x1=10,y1=20;
	swap1pbv(x1,y1);
	//cout<<x1<<" 1 "<<y1<<endl;
	
	//PASS BY ADDRESS
	int x2=10,y2=20;
	swap2pba(&x2,&y2);
	cout<<x2<<" 2 "<<y2<<endl;
	
	//PASS BY REFRENCE 
	//CANNOT HANDEL COMPLEX PROGRAM LIKE SIMPLE LOOP
	int x3=10,y3=20;
	swap3pbr(x3,y3);
	cout<<x3<<" 3 "<<y3<<endl;
	return 0;
}
