// Eashwar Prabu

/*
Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element K. The task is to find the index of the given element K in the array A.

Input:
The first line of the input contains an integer T, denoting the total number of test cases. Then T test cases follow. Each test case consists of three lines. First line of each test case contains an integer N denoting the size of the given array. Second line of each test case contains N space separated integers denoting the elements of the array A. Third line of each test case contains an integer K denoting the element to be searched in the array.

Output:
Corresponding to each test case, output the index of the element found in the array.  If element is not present, then output -1.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
0 ≤ Ai ≤ 108
1 ≤ K ≤ 108

Example:
Input:
3
9
5 6 7 8 9 10 1 2 3
10
3
3 1 2
1
4
3 5 1 2
6

Output:
5
1
-1

Explanation:
Testcase 1: 10 is found at index 5.
*/

#include <iostream>
using namespace std;

int search(int arr[], int start, int end, int key) {
    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == key) return mid;
        else if (arr[start] <= arr[mid]) {
            if (key >= arr[start] && key <= arr[mid])   end = mid - 1;
            else    start = mid + 1;
        } else {
            if(key >= arr[mid] && key <= arr[end])  start = mid + 1;
            else    end = mid - 1;
        }
    }
    return -1;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, number, answer;
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++) {
	        cin >> arr[i];
	    }
	    cin >> number;
      
     // APPROACH 1: O(n) Solution
	   // for(int i=0; i<n; i++) {
	   //     if(arr[i] == number) {
	   //         answer = i;
	   //     }
	   // }
     
     // APPROACH 2: O(log n) Solution
	   answer = search(arr, 0, n-1, number);
	   cout<<answer<<"\n";
	}
	return 0;
}
