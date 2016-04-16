//https://www.codechef.com/problems/NUKES
#include <iostream>
using namespace std;

int main() {
    long int a;
    int n, k;
    cin>>a;
    cin>>n>>k;
    while(k--) {
        cout<<a%(n+1)<<" ";
        a = a/(n+1);
    }
    return 0;
}
