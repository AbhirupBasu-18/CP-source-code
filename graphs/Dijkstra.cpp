#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define vl vector<ll>
#define sza(x) ((int)x.size())
vector<int> dijkstra(int n,vector<vector<pair<int,int>>> &graph,int src){
    vector<int> distance(n+1,INFINITY);
    distance[src]=0;
    priority_queue<pair<int,int>>pq;
    pq.push({0,src});
    while(!pq.empty()){
        int currentNode = pq.top().second;
        int currentDist = pq.top().first;
        pq.pop();
        if(distance[currentNode]<currentDist){
            continue;
        }
        for(auto& it: graph[currentNode]){
            int node= it.first;
            int dis = it.second;
            if(distance[node]>dis+distance[currentNode]){
                distance[node]=dis+distance[currentNode];
                pq.push({distance[node],node});
            }
        }
    }
    return distance;
}

 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc=1;
    //cin>>tc;
    for (int t = 1; t <= tc; t++) {
        //debug(Testcase, t);
        //solve(tc,t);
        //crndl;
    }
}