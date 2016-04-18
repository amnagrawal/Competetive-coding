//https://www.hackerrank.com/challenges/cavity-map
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

bool isgreatest(int i, int j, vector<string> grid) {
    //ar temp = grid[i][j];
    int c = int(grid[i][j]);
    int u = (int)grid[i-1][j];
    int l = (int)grid[i][j-1];
    int r = (int)grid[i][j+1];
    int d = (int)grid[i+1][j];
    if(c>u && c>l && c>r && c>d)
        return true;
    else
        return false;
}

int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }

    vector<int> cavity;
    int ptr=n;
    for(int i=1; i<n-1; i++) {
        for(int j=1; j<n-1; j++) {
            ptr++;
            if(isgreatest(i, j, grid))
                cavity.push_back(ptr);
        }
        ptr+=2;
    }

    vector<int>::iterator it = cavity.begin();
    ptr=0;
    if(!cavity.empty()) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++, ptr++) {
                if(ptr== *it)
                    it++, cout<<"X";
                else
                    cout<<grid[i][j];
            }
            cout<<endl;
        }
    }
    else {
        for(int grid_i = 0;grid_i < n;grid_i++){
            cout << grid[grid_i]<<endl;
        }
    }
    return 0;
}
