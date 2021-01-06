#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v;
        for (int i=0; i<n-1; i++) {
            int num;
            cin>>num;
            v.push_back(num);
        }
        int org_result = (n * (n + 1)) / 2;
        int result = accumulate(v.begin(), v.end(), 0);
        cout<<org_result - result<<'\n';
    }
    return 0;
}
