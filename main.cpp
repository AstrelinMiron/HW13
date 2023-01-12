#include <iostream>
#include "graph.h"

int main()
{
    Graph g;

    // добавляем вершины
    g.addVertex(0);
    g.addVertex(1);
    g.addVertex(2);
    g.addVertex(3);
    g.addVertex(4);
    g.addVertex(5);
    g.addVertex(6);


    // добавляем ребра
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 5);
    g.addEdge(1, 6);
    g.addEdge(3, 6);
    g.addEdge(3, 4);
    g.addEdge(0, 4);
    g.addEdge(5, 6);
    g.addEdge(3, 6);
    g.addEdge(4, 5);
    g.addEdge(0, 3);

    //g.findMinDistances(2, 3);
    g.showPairs(2);

    return 0;
}