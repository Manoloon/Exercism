//
// Created by Manoloon on 6/9/2023.
//

#ifndef EXERCISM_DIJKSTRA_ALGORITHM_H
#define EXERCISM_DIJKSTRA_ALGORITHM_H
#include <vector>
#include <queue>
#include <limits>

struct Edge
        {
            int to =0;
            int weight = 1;
        };

void CalcPath(std::vector<std::vector<Edge>>& MapGraph,int StartLocation, std::vector<int>&
        Distance)
{
    Distance.assign(MapGraph.size(),std::numeric_limits<int>::max());
    Distance[StartLocation] = 0;
    std::priority_queue<std::pair<int,int>,std::vector<std::pair<int,int>>,
            std::greater<std::pair<int,int>>> PriorityQ;
    PriorityQ.push({0,StartLocation});

    while (!PriorityQ.empty())
    {
        int CurDistance = PriorityQ.top().first;
        int CurNode = PriorityQ.top().second;
        PriorityQ.pop();
        //heck, which is an optimization to skip processing nodes whose distances
        // have already been updated with a shorter path. This helps improve performance.
        if(CurDistance > Distance[CurNode]) continue;

        for (auto edge : MapGraph[CurNode])
        {
            int NeighborNode = edge.to;
            int NodeWeight = edge.weight;
            //updates the distance if a shorter path is found.
            if(Distance[CurNode] + NodeWeight < Distance[NeighborNode])
            {
                Distance[NeighborNode] = Distance[CurNode] + NodeWeight;
                PriorityQ.push({Distance[NeighborNode],NeighborNode});
            }
        }
    }
}
#endif //EXERCISM_DIJKSTRA_ALGORITHM_H
