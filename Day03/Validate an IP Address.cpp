// Eashwar Prabu

/*
Write a program to Validate an IPv4 Address. According to Wikipedia, IPv4 addresses are canonically represented in dot-decimal notation, which consists of four decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1 . The generalized form of an IPv4 address is (0-255).(0-255).(0-255).(0-255). Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered invalid.

Your task is  to complete the function isValid which returns 1 if the ip address is valid else returns 0. The function takes a string s as its only argument .

Example 1:

Input:
ip = 222.111.111.111
Output: 1
Example 2:

Input:
ip = 5555..555
Output: 0
Explanation: 5555..555 is not a valid
ip address, as the middle two portions
are missing.
Your Task:
Complete the function isValid() which takes the string s as an input parameter and returns 1 if this is a valid ip address otherwise returns 0.

Expected Time Complexity: O(N), N = length of string.
Expected Auxiliary Space: O(1)

Constraints:
1<=length of string <=50
*/


int isValid(string s) {
    stringstream ss(s);
    int counter = 0;
    string temp;
    int dotCount = count(s.begin(), s.end(), '.');
    if (dotCount > 3) return 0;
    while(getline(ss, temp, '.')) {
        int n = temp.length();
        if(n) counter++;
        if (n > 3) return 0;
        for(int i=0; i<n; i++) {
            if((temp[i] >= '0' && temp[i] <= '9') == false)
                return 0;
        }
        if(temp.find('0') == 0 && n > 1) return 0;
        stringstream temp_int(temp);
        int num;
        temp_int >> num;
        if((num >= 0 && num <= 255) == false) return 0;
    }
    if (counter != 4) return 0;
    else return 1;
}
