#include <cmath>
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long int mini = INT_MAX;
        long int s[n];
        for(int i=0; i<n; i++) {
            cin>>s[i];
        }
        sort(s,s+n);
        for(int i=0; i<n-1; i++) {
            mini = min((double) mini, abs((double) (s[i] - s[i+1])));
        }
        cout<<mini<<endl;
    }
    return 0;
}
