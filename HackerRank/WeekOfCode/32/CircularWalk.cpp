#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>

#define INF 1000*1000*1000
using namespace std;

vector<int> computeValues(int base, int g, int seed, int p, int n){
    vector<int> values(n);
    values[0] = base;
    for(auto i = 1; i < n; ++i){
        values[i] = (values[i-1] * g + seed) % p;
    }
    return values;
}

int mod(int a, int b)
{ return (a%b+b)%b; }

map<int, vector<int> > createAdjMatrix(vector<int> &vals){
    int n = vals.size();
    map<int, vector<int> > adj;
    for(auto i = 0; i < vals.size(); ++i){
        vector<int> nodeAdj;
        for(auto j = 1; j <= vals[i]; ++j){
            int node = (i + j) % n;
            if(find(nodeAdj.begin(), nodeAdj.end(), node) == nodeAdj.end()){
                nodeAdj.push_back(node);
            }
            if((i - j) < 0)
                node = mod((i-j), n);
            else
                node = (i-j) % n;
            if(find(nodeAdj.begin(), nodeAdj.end(), node) == nodeAdj.end()){
                nodeAdj.push_back(node);
            }
        }
        adj.insert(make_pair(i, nodeAdj));
    }
    return adj;
}

int djisktra(map<int, vector<int> > &adj, int source, int dest){
    set< pair<int, int> > setds;
    vector<int> dist(adj.size(), INF);
    setds.insert(make_pair(0, source));
    dist[source] = 0;
    while (!setds.empty()){
        // The first vertex in Set is the minimum distance
        // vertex, extract it from set.
        pair<int, int> tmp = *(setds.begin());
        setds.erase(setds.begin());
        int vertex = tmp.second;
        // all adjacent vertices of a vertex
        vector<int>::iterator itr;
        for(itr = adj[vertex].begin(); itr != adj[vertex].end(); ++itr){
            int n = *itr;
            if(dist[n] > dist[vertex] + 1){
                if (dist[n] != INF)
                    setds.erase(setds.find(make_pair(dist[n], n)));
                dist[n] = dist[vertex] + 1;
                setds.insert(make_pair(dist[n], n));
            }
        }
    }
    int distance = dist[dest];
    if(distance == INF)
        distance = -1;
    return distance;
}



int main() {
    int n, s, t;
    int base, g, seed, p;
    cin >> n >> s >> t;
    cin >> base >> g >> seed >> p;
    if(s == t){
        cout << 0;
    }else{
        vector<int> vals = computeValues(base, g, seed, p, n);
        map<int, vector<int> > adjs = createAdjMatrix(vals);
        cout << djisktra(adjs, s, t);
    }
    return 0;
}
