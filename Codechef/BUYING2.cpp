//https://www.codechef.com/problems/BUYING2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, x;
        cin>>n>>x;
        int a[n];
        int sum=0;
        for(int i=0; i<n; i++) {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a, a+n);
        int count = sum/x;
        sum -= a[0];
        int check = sum/x;
        if(count == check)
            cout<<"-1"<<endl;
        else
            cout<<count<<endl;
    }
    return 0;
}
