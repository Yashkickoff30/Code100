// Eashwar Prabu

/*
Given a string S of lowercase letters, a duplicate removal consists of choosing two adjacent and equal letters, and removing them.

We repeatedly make duplicate removals on S until we no longer can.

Return the final string after all such duplicate removals have been made.  It is guaranteed the answer is unique.

 

Example 1:

Input: "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
 

Note:

1 <= S.length <= 20000
S consists only of English lowercase letters.
*/

class Solution {
public:
    string removeDuplicates(string S) {
    
    // APPROACH 1: USING A STACK
        // string s = "";
        // stack<char> st;
        // for(int i=0; i<S.size(); i++) {
        //     if(st.empty()) st.push(S[i]);
        //     else {    
        //         if(st.top() == S[i])
        //             st.pop();
        //         else st.push(S[i]);
        //     }
        // }
        // while(!st.empty()) {
        //     s += st.top();
        //     st.pop();
        // }
        // reverse(s.begin(), s.end());
        // return s;
        
    // APPROACH 2: USING A STRING
        string s;        
        for(int i=0;i<S.size();i++)
        {
            s += S[i];
            if(s.size() > 1)
            {
                char last = s[s.size()-1];
                s.pop_back();
                char last_before = s[s.size()-1];
                s.pop_back();
                if(last != last_before)
                {
                    s+=last_before;
                    s+=last;
                }
            }
        }
        return s;
    }
};
