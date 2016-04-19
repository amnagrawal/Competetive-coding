//https://www.hackerrank.com/challenges/even-tree
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>
using namespace std;

int graph[101][101];
long int result=0;
bool visited[101];
stack<int> dfs;

int traverse(int n, int root) {
    int count=0;
    int temp = dfs.top();
    for(int i=1; i<=n; i++) {
        if(graph[i][temp] && !visited[i] && i!=root) {
            dfs.push(i);
            count += traverse(n, temp);
        }
    }
    dfs.pop();
    visited[temp]=true;
    count++;
    if(count%2==0)
        result++;
    
    //cout<<result<<endl;
    return count;
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    //int result=0;
    cin>>n>>m;
    memset(graph, 0, 10201);
    memset(visited, false, 101);
    while(m--) {
        int a, b;
        cin>>a>>b;
        graph[a][b]=graph[b][a]=1;
    }
    
    dfs.push(1);
    int count = traverse(n, 0);
    
    cout<<result-1;
    
    return 0;
}

