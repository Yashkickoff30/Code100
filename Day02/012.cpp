#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,zero=0,one=0,two=0;
	cout<<"Enter the count of nos:";
	cin>>n;
	int a[n];
	cout<<"\nEnter the numbers in form of 0's, 1's and 2's:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
			zero++;
		if(a[i]==1)
			one++;
		if(a[i]==2)
			two++;
	}
	i=0;
	cout<<zero<<one<<two<<endl;
	while(i<n)
	{
		if(zero!=0)
		{
			a[i]=0;
			zero--;
			cout<<a[i];
		}
		if(zero==0 && one!=0)
		{
			a[i]=1;
			one--;
			cout<<a[i];
		}
		if(zero==0 && one ==0 && two!=0)
		{
			a[i]=2;
			two--;
			cout<<a[i];
		}	
		i++;	
	}
	return 0;
}
