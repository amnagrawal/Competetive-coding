//https://www.hackerrank.com/challenges/service-lane
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

//int result[100000][100000];
int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }

    //vector< vector<int> > result(n, vector<int> (n,0));
    //cout<<"aaaaaaaa";
    /*for(int i=0; i<n; i++) {
        int mini = width[i];
        result[i][i] = width[i];
        for(int j=i; j<n; j++) {
            result[i][j] = min(mini, width[j]);
            mini = result[i][j];
            result[j][i] = result[i][j];
        }
    }*/

    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        //cout<<result[i][j]<<endl;
        int mini = width[i];
        for(int k=i; k<=j; k++) {
            mini = min(width[k], mini);
        }
        cout<<mini<<endl;
    }
    return 0;
}
