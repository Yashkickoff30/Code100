#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    vector<int> pos, neg;
	    int n, nos;
	    cin>>n;
	    for(int i=0; i<n; i++) 
	    {
	        cin>>nos;
	        if (nos >= 0) 
	        {
	            pos.push_back(nos);
	        } 
	        else 
	        {
	            neg.push_back(nos);
	        }
	    }
	    pos.insert(pos.end(), neg.begin(), neg.end());
	    for(auto it: pos) 
	    {
	        cout<<it<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}