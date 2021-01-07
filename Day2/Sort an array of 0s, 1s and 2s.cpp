/*
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output: 0 0 1 2 2
Explanation: 0s 1s and 2s are segregated 
into ascending order.
 

Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output: 0 0 1
Explanation: 0s 1s and 2s are segregated 
into ascending order.

Your Task:
You don't need to read input or print anything. Your task is to complete the function sort012() that takes array and n as input parameters and sorts the array in-place. 


Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= N <= 10^5
0 <= A[i] <= 2
*/

void sort012(int a[], int n)
{
    // APPROACH 1: COUNTING NO. OF ZEROS, ONES AND TWOS
    int zero = 0, one = 0, two = 0;
    for(int i=0; i<n; i++) {
        if (a[i] == 0)
            zero++;
        else if (a[i] == 1)
            one++;
        else 
            two++;
    }
    int i = 0;
    while(zero > 0){
        a[i++] = 0;
        zero--;
    }
    while(one > 0) {
        a[i++] = 1;
        one--;
    }
    while(two > 0) {
        a[i++] = 2;
        two--;
    }
    // APPROACH 2: USING LOW, MID AND HIGH VARIABLES
    // int low = 0, mid = 0, high = n-1;
    // while(mid <= high) {
    //     if (a[mid] == 0){
    //         swap(a[low++], a[mid++]);
    //     } else if (a[mid] == 1) {
    //         mid++;
    //     } else {
    //         swap(a[mid], a[high--]);
    //     }
    // }
}
