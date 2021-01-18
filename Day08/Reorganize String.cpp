// Eashwar Prabu

/*
Given a string S, check if the letters can be rearranged so that two characters that are adjacent to each other are not the same.

If possible, output any possible result.  If not possible, return the empty string.

Example 1:

Input: S = "aab"
Output: "aba"
Example 2:

Input: S = "aaab"
Output: ""
Note:

S will consist of lowercase letters and have length in range [1, 500].
*/

class Solution {
public:
    string reorganizeString(string S) {
        unordered_map <char, int> umap;
        priority_queue<pair<int, char>> pq;
        string result = "";
        
        if (S.size() == 0) return "";
        for(auto c: S) {
            umap[c]++;
        }
        for(auto it: umap) {
            pq.push(make_pair(it.second, it.first));
        }
        
        while(pq.size() > 1) {
            auto a = pq.top();
            pq.pop();
            auto b = pq.top();
            pq.pop();
            
            result += a.second;
            result += b.second;
            
            a.first-= 1;
            b.first-= 1;
            
            if (a.first > 0) pq.push(a);
            if (b.first > 0) pq.push(b);
        }
        
        if(!pq.empty()) {
            if (pq.top().first > 1) return "";
            else result += pq.top().second;
        }
        return result;
    }
};
