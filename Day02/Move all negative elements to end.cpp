/*
Given an unsorted array having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

Examples:

Input : A[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 1  3  2  11  6  -1  -7  -5 

Input : A[] = {-5, 7, -3, -4, 9, 10, -1, 11}
Output : 7  9  10  11  -5  -3  -4  -1  

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
For each test case in a new line output the modified array.

Constraints:
1<=T<=100
1<=N<=100
-1000<=A[]<=1000

Example:
Input:
2
8
1 -1 3 2 -7 -5 11 6
8
-5 7 -3 -4 9 10 -1 11
Output:
1 3 2 11 6 -1 -7 -5
7 9 10 11 -5 -3 -4 -1
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<int> pos, neg;
	    int n, input;
	    cin>>n;
	    for(int i=0; i<n; i++) {
	        cin>>input;
	        if (input >= 0) {
	            pos.push_back(input);
	        } else {
	            neg.push_back(input);
	        }
	    }
	    pos.insert(pos.end(), neg.begin(), neg.end());
	    for(auto it: pos) {
	        cout<<it<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
