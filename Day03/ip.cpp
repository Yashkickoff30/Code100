// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int isValid(string s);
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout <<isValid(s) << endl;
    }
    return 0;
}// } Driver Code Ends


   int isValid(string s) {
    // your code here
     int i=0,count=0,sum=0,c=0,dot=0;
    //confirm count for each 1-3 set of nos before dot.
    int n= s.size();
    //cout<<"Print size of string is:"<<n<<endl;
    if(n>=7)
        count++;
    else
        return 0;
    for(i=0;i<n;i++)
    {
        if(s[i]>=48 && s[i]<=57)
            continue;
        else if(s[i]=='.')
            dot++;
        else
            break;
    }
            
    if(count==1 && dot==3)
    {
        i=0;
        //cout<<"\nhi";
        while(i<n && s[i]!='.')
        {
            if(s[i]=='0' && s[i+1]!='.' && (i+1)<n)
            {
                break;
            }
            //cout<<"\nhello";
            //cout<<"\n"<<int(s[i]);
                sum=(sum*10)+(int(s[i])-48);
               // cout<<"The sum is:"<<sum<<endl;
                i++;
                //b++;
                //cout<<"i value is:"<<i<<endl;
            
                if(i==n)
                    c++;
                if(s[i]=='.')
                {
                    
                    //cout<<"\nhellooo";
                    i++;
                    if(sum>=0 && sum<=255)
                    {
     //                   cout<<"yash";
                        sum=0;
                        //b=0;
                        c++;
                        //cout<<"The c value is:"<<c<<endl;
                    }
                    else
                        break;
                }
        }    
    }
    if(c==4)
        count++;
    if(count==2)
        return 1;
    else
        return 0;
    
}
