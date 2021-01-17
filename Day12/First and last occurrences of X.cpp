// Eashwar Prabu

/*
Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Note: If the number x is not found in the array just print '-1'.

Input:
The first line consists of an integer T i.e number of test cases. The first line of each test case contains two integers n and x. The second line contains n spaced integers.

Output:
Print index of the first and last occurrences of the number x with a space in between.

Constraints: 
1<=T<=100
1<=n,a[i]<=1000

Example:
Input:
2
9 5
1 3 5 5 5 5 67 123 125
9 7
1 3 5 5 5 5 7 123 125

Output:
2 5
6 6
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, number, temp;
	    bool isPresent = false;
	    cin >> n >> number;
	    vector<int> v(n);
	    for(int i=0; i<n; i++)  {
	        cin >> temp;
	        v[i] = temp;
	        if(temp == number)  isPresent = true;
	    }
	    vector<int>::iterator lower = lower_bound(v.begin(), v.end(), number);
	    vector<int>::iterator upper = upper_bound(v.begin(), v.end(), number);
	    if(!isPresent)   cout<<-1<<"\n";
	    else    cout<< (lower - v.begin()) << " "<< ((upper - v.begin()) - 1)<<"\n";
	}
	return 0;
}
