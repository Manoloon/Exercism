#include <iostream>
#include <memory>
#include <string>
<<<<<<< HEAD
#include "Src/atbash_cipher.h"
#include "Src/CountBlocksOfOnes.h"

int main()
{
    std::cout << CountBlockOfOnes("101101110101111") << std::endl;
    std::cout << CountBlockOfOnes("1") << std::endl;
    std::cout << CountBlockOfOnes("00") << std::endl;
    std::cout << CountBlockOfOnes("") << std::endl;
    /*
    std::cout <<  atbash_cipher::encode("Truth is fiction.") << std::endl;
    std::cout <<  atbash_cipher::encode("Testing,1 2 3, testing.")<< std::endl;
    std::cout <<  atbash_cipher::decode("vcvix rhn")<< std::endl;
    std::cout <<  atbash_cipher::decode("zmlyh gzxov rhlug vmzhg vkkrm thglm v")<< std::endl;
    std::cout <<  atbash_cipher::decode("gvhgr mt123 gvhgr mt")<< std::endl;
    // Dijkstra used
    int nodes = 6;

    std::vector<std::vector<Edge>> graph(nodes);
    //Source Node , Destination node, edge weight
    std::vector<std::tuple<int,int,int>> Inputs =
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
        graph[DestinationNode].push_back({sourceNode, EdgeWeight});
    }

    int start = 0;

    std::vector<int> distance;
    CalcPath(graph, start, distance);

    // Print the shortest distances from the starting node to all other nodes
    for (int i = 0; i < nodes; ++i) {
        std::cout << "Shortest distance from node " << start << " to node " << i << " is " << distance[i] << std::endl;
    }
     */
=======
#include <vector>
#include "Src/circular_buffer.h"
#include "Src/three_sum.h"

int main()
{
    std::vector<int> nums ={-1,0,1,2,-1,-4};
    for(const auto& [a, b, c] : three_sum(nums)) {
        std::cout << a << ", " << b << ", " << c << std::endl;
    }

    circular_buffer::circular_buffer<int> buffer(2);
    buffer.write(1);
    buffer.overwrite(2);
    std::cout << buffer.read();
    std::cout << buffer.read();

   circular_buffer::circular_buffer<std::string> bufferString(3);
    bufferString.write("hello");
    bufferString.write("world");
    bufferString.write("zombies");
   std::cout << bufferString.read();
   bufferString.write("pants");
   bufferString.overwrite("banana");
   std::cout << bufferString.read();
   std::cout << bufferString.read();
   std::cout << bufferString.read();
>>>>>>> d1043bca41e9bc8d18f4655b3fbbe8665ee8bb0a
   return 0;
}