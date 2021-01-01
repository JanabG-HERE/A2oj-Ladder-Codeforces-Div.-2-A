#include <string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(), ::tolower);
	int size=s.length(),c1=0,c2=0;
	for(int i=0;i<size;i++)
	{
		if(i<(size/2))
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
				c1++;}
		}
		else
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
				c2++;}
		}
	}
	if(c1==c2)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
	
	
	
	return 0;
}
