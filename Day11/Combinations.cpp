// Eashwar Prabu

/*
Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.

You may return the answer in any order.

 

Example 1:

Input: n = 4, k = 2
Output:
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]
Example 2:

Input: n = 1, k = 1
Output: [[1]]
 

Constraints:

1 <= n <= 20
1 <= k <= n
*/

class Solution {
public:
    void makeCombinations(vector<vector<int>> &answer, vector<int> &temp, int index, int n, int k) {
        if(k == 0) {
            answer.push_back(temp);
            return;
        }
        for(int i=index; i<=n; i++) {
            temp.push_back(i);
            makeCombinations(answer, temp, i+1, n, k-1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> answer;
        vector<int> temp;
        makeCombinations(answer, temp, 1, n , k);
        return answer;
    }
};
