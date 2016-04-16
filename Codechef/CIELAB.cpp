//https://www.codechef.com/problems/CIELAB
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    int c = a-b;
    if(c%10 > 1)
        cout<<(c-1);
    else
        cout<<(c+1);
    return 0;
}
