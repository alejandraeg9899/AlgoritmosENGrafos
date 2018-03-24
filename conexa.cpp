#include "CommonGraphs.hpp"
#include "conexa.hpp"
#include <stack>

std::vector<int> conexa(const Graph& G)
{
    using vertex_t = Graph::vertex_t;
    auto n = G.num_vertices();
    std::vector<int> componentes(n, -1);
    int vecino;
    int cont = 0;
    for(vertex_t v = 0; v < n; ++v)
    {
        if(componentes[v] != -1)
          continue;

        componentes[v] = cont;
        std::stack<vertex_t> frontier;
        frontier.push(v);

        while(!frontier.empty())
        {
            auto p = frontier.top();
            frontier.pop();
            if (componentes[p]!= -1)
                continue;

            componentes[p] = cont;
            for(auto u : G.neighbors(p))
            {
                if (componentes[u] == -1)
                    frontier.push(u);
            }
        }
    }
    ++cont;
    return componentes;
}
