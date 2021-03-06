#pragma once

#include "Graph.hpp"

namespace graphs
{
Graph Petersen();

Graph Path(int n);

Graph Cycle(int n);

Graph Complete(int n);

Graph CompleteBipartite(int n, int m);

Graph Random(int n, double p);

Graph RandomWeighted(int n, double p);

Graph Random(int num_verts, int num_edges);

Graph TreeRandom(int n);

Graph Grid(int n, int m);

Graph AlbertBarabanasi(int n, int k);

Graph RamdonGraph (int n, int p);

Graph GrpahRandom (int num_verts, int num_edges);

}; // namespace graphs
