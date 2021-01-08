#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& a) {
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==a[i+1])
                return a[i];
        }
        return -1;
    }
};
int main()
{
	vector<int> a;
	int input,n;
	cout<<"Enter the nos of elements:"<<endl;
	cin>>n;
	cout<<"Enter the elements with one duplicate:"<<endl;
	for(int i=0;i<n;i++) 
	{
		cin>>input;
		a.push_back(input);
	}
	Solution s;
	cout<<"The duplicate no is:"<<s.findDuplicate(a);   	
}

