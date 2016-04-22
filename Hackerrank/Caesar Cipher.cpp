//https://www.hackerrank.com/challenges/caesar-cipher-1
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    string s;
    char a;
    cin>>n>>s>>k;
    //k=k%26;
    for(auto &i:s) {
        if(isalpha(i)){
            a = isupper(i)? 'A':'a';
            i = a + (i-a+k)%26;
        }
    }
    cout<<s<<endl;
    return 0;
}
