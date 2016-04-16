#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int k;
        cin>>k;
        int pos=1;
        for(int i=0; i<n; i++) {
            if(a[i]<a[k-1])
                pos++;
        }
        cout<<pos<<endl;
    }
    return 0;
}
