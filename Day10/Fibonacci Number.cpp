// Eashwar Prabu

/*
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

 

Example 1:

Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
Example 2:

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
Example 3:

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
 

Constraints:

0 <= n <= 30
*/

class Solution {
public:
    int fib(int n) {
    
    // APPROACH 1: USING A VECTOR
        // vector<int> v;
        // v.push_back(0);
        // v.push_back(1);
        // for(int i=2; i<=n; i++) {
        //     v.push_back(v[i-1] + v[i-2]);
        // }
        // return v[n];
    
    // APPROACH 2: USING 3 VARIABLES
        int a = 0, b = 1, c;
        if(n == 0)  return a;
        if(n == 1)  return b;
        for(int i = 2; i<=n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};
