vector<int> dijkstra(int n,vector<vector<pair<int,int>>> &graph,int src){
    vector<int> distance(n+1,INFINITY);
    distance[src]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
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