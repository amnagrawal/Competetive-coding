//https://www.hackerrank.com/challenges/floyd-city-of-blinding-lights
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>

#define INF 200000
using namespace std;

int graph[401][401];
int dist[401][401];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            graph[i][j]=INF;
            dist[i][j]=INF;
            dist[i][i]=0;
        }
    }
    //cout<<dist[2][1];
    while(m--) {
        int a, b, r;
        cin>>a>>b>>r;
        graph[a][b]=r;
        dist[a][b]=r;
    }

    for(int k=1; k<=n; k++) {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                if(dist[i][k]+dist[k][j]<dist[i][j])
                    dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }

    int q;
    cin>>q;
    while(q--) {
        int x, y;
        cin>>x>>y;
        if(dist[x][y]==INF)
            cout<<"-1"<<endl;
        else
            cout<<dist[x][y]<<endl;
    }


    return 0;
}
