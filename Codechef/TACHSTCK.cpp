//https://www.codechef.com/problems/TACHSTCK
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    long int d, l[n];
    cin>>d;
    for(int i=0; i<n; i++)
        cin>>l[i];

    sort(l, l+n);
    int ltr=0, rtl=0;
    for(int i=0; i<n-1; i++) {
        if((l[i+1] - l[i]) <= d) {
            ltr++;
            i++;
        }
    }

    // for(int i=n-1; i>0; i--) {
    //     if((l[i] - l[i-1])>=d) {
    //         rtl++;
    //         i--;
    //     }
    // }
    cout<<ltr;

    return 0;
}
