class Solution {
public:
    void reverseString(vector<char>& str) {
        int i=0;
        int n=str.size();
  
    // Swap character starting from two 
    // corners 
    for (i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 
};
