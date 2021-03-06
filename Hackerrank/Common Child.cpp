//https://www.hackerrank.com/challenges/common-child
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int l[5001][5001];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a, b;
    cin>>a>>b;
    int m=a.length();
    int n=b.length();
    for(int i=0; i<=m; i++) {
        for(int j=0; j<=n; j++) {
            if(i==0 || j==0)
                l[i][j]=0;
            else if (a[i-1]==b[j-1])
                l[i][j]=l[i-1][j-1]+1;
            else
                l[i][j]=max(l[i-1][j], l[i][j-1]);
        }
    }

    cout<<l[m][n];
    return 0;
}
