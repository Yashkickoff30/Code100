// Eashwar Prabu

/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 

Constraints:

1 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 104
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end());
       vector<vector<int>> ans;
       
       // APPROACH 1:
       //  for(auto interval: intervals) {
       //      if(ans.empty()) ans.push_back(interval);
       //      else {
       //          if(ans.back()[1] < interval[0])    ans.push_back(interval);
       //          else ans.back()[1] = max(ans.back()[1], interval[1]);   
       //      }
       //  }
       //  return ans;
       
       // APPROACH 2:
        int i=0, j, n = intervals.size();
        while(i < n) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            for(j = i+1; j<n && intervals[j][0] <= end; j++) {
                end = max(end, intervals[j][1]);
            }
            ans.push_back({start, end});
            i = j;
        }
        return ans;
    }
};
