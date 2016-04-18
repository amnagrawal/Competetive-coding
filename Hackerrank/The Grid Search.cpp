//https://www.hackerrank.com/challenges/the-grid-search
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


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }

        int Flag = 0;
        int Row=0;
        while(!Flag && Row<R) {
            //vector<string>::iterator It = find(G[Row].begin(), G[Row].end(), P[0]);
            int A = G[Row].find(P[0]);
            //if(It==G[Row].end())
            if(A == string::npos)
                Row++;
            else {
                Row++;
                int row = 1;
                while(row<r && Row<R) {
                    //vector<string>::iterator it = find(G[Row].begin(), G[Row].end(), P[row]);
                    int a = G[Row].find(P[row]);
                    //if(it==G[Row].end())
                    if (a == string::npos)
                        break;
                    else if(a==A){
                        Row++;
                        row++;
                    }
                    else
                        break;
                }
                if(row>=r) {
                    Flag=1;
                    break;
                }
            }
        }
        if(Flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
