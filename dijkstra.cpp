#include "CommonGraphs.hpp"
#include "dijkstra.hpp"
#include <queue>

#define inf 1<<30
std::vector<int> dijkstra(const Graph& G, 0)
{
    priority_queue<pp,vector<pp>,pri> Q;
    using vertex_t = Graph::vertex_t;
    auto n = G.num_vertices();
    vector<Node> ady[n];
    int u;
    int distancia[n];
    bool visitado[n];
    int previo[n];
    int v;

    void init(){
        for(int i = 0; i <= V; ++i){
            distancia[i] = inf;
            visitado[i] = false;
            previo[i] = -1;
        }
    }

    Q.push(Node(inicial,0));
    distancia[inicial] = 0;

    while(!Q.empty()){
        u = Q.top().first();
        Q.pop();

        if(visitado[u])
            continue;

        visitado[u] = true;

        for(int i=0; i<ady[u].size(); ++i){
            adyacente = ady[u][i].first;
            peso = ady[u][i].second;
            if(!visitado[adyacente]){
                relajacion(u, adyacente, peso);
            }
        }

        void relajacion(int u, int adyacente, int peso){
            if(distancia[u]+peso < distancia[adyacente]){
                distancia[adyacente] = distancia[u]+peso;
                previo[adyacente] = u;
                Q.push(Node(adyacente, distancia[adyacente]));
            }
        }

        }
}
