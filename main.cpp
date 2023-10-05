#include <iostream>
#include <memory>
#include <string>
#include "Src/atbash_cipher.h"

int main()
{
    std::cout <<  atbash_cipher::encode("Truth is fiction.") << std::endl;
    std::cout <<  atbash_cipher::encode("Testing,1 2 3, testing.")<< std::endl;
    std::cout <<  atbash_cipher::decode("vcvix rhn")<< std::endl;
    std::cout <<  atbash_cipher::decode("zmlyh gzxov rhlug vmzhg vkkrm thglm v")<< std::endl;
    std::cout <<  atbash_cipher::decode("gvhgr mt123 gvhgr mt")<< std::endl;
    // Dijkstra used
    /*
    int nodes = 6; // Number of nodes and edges

    std::vector<std::vector<Edge>> graph(nodes);
    std::vector<std::tuple<int,int,int>> Inputs = //Source Node , Destination node, edge weight
            {
                {0, 1, 7},
                {0 ,2 ,9},
                {0 ,5 ,14},
                {1 ,2 ,10},
                {1 ,3 ,15},
                {2 ,3 ,11},
                {2 ,5 ,2},
                {3 ,4 ,6},
                {4, 5, 9}
            };

    for (const auto& [sourceNode,DestinationNode,EdgeWeight] : Inputs)
    {
        graph[sourceNode].push_back({DestinationNode, EdgeWeight});
        graph[DestinationNode].push_back({sourceNode, EdgeWeight}); // If your graph is undirected
    }

    int start = 0; // Starting node

    std::vector<int> distance;
    CalcPath(graph, start, distance);

    // Print the shortest distances from the starting node to all other nodes
    for (int i = 0; i < nodes; ++i) {
        std::cout << "Shortest distance from node " << start << " to node " << i << " is " << distance[i] << std::endl;
    }
    ////////////////////////
     */
   return 0;
}