// Eashwar Prabu

/*
Write a function that takes a string as input and reverse only the vowels of a string.

Example 1:

Input: "hello"
Output: "holle"
Example 2:

Input: "leetcode"
Output: "leotcede"
Note:
The vowels does not include the letter "y".
*/

class Solution {
public:
    bool isVowel(char c) {
        if(c >= 'A' && c <= 'Z')    c = (c - 'A') + 'a';
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')    return true;
        else return false;
    }
    string reverseVowels(string s) {
        
        // APPROACH 1: USING STACK
        // stack<char> st;
        // string result;
        // for(auto it: s) {
        //     if(it == 'a' || it == 'e' || it == 'i' || it =='o' || it == 'u' || it == 'A' || it == 'E' || it == 'I' || it =='O' || it == 'U')    st.push(it);
        // }
        // for(auto it: s) {
        //     if(it == 'a' || it == 'e' || it == 'i' || it =='o' || it == 'u' || it == 'A' || it == 'E' || it == 'I' || it =='O' || it == 'U') {
        //         result += st.top();
        //         st.pop();
        //     } else  result += it;
        // }
        // return result;
        
        // APPROACH 2: USING 2 POINTERS
        int n = s.size();
        int first = 0, last = n - 1;
        while(first < last) {
            if(!isVowel(s[first]))  first++;
            if(!isVowel(s[last]))   last--;
            if(isVowel(s[first]) && isVowel(s[last])) {
                swap(s[first++], s[last--]);
            }
        }
      return s;
    }
};
