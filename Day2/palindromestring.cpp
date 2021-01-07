#include<iostream>
using namespace std;
int main()
{
		int i=0,count=0,b=0;
	string s;
	cin>>s;
    count=s.size();
    //cout<<"count:"<<count;
	for(i=0;i<count;i++)
	{
		if(s[i]==s[count-1-i])
		    b++;
	}
	if(b==count)
	    cout<<1;
	else
		cout<<0;
	
	return 0;
}