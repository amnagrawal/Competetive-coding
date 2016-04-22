//https://www.hackerrank.com/challenges/sherlock-and-squares
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--) {
        long long int a, b, m, n;
        cin>>a>>b;
        cout<<floor(sqrt(b))-ceil(sqrt(a))+1<<endl;
    }
    return 0;
}
