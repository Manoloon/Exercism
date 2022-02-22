//
// Created by Manoloon on 22/02/2022.
//

#include "pascal_triangle.h"
namespace pascals_triangle
{
    // binomial coefficient
    // n >= 0 && k >0
    // c(n/k) = (n -1 / k - 1) + ( n - 1/k)
    int binomialCoefficient(int n, int k)
    {
        int res = 1;
        if (k > n - k)
            k = n - k;
        for (int i = 0; i < k; ++i)
        {
            res *= (n - i);
            res /= (i + 1);
        }
        return res;
    }
    std::vector<std::vector<int>> generate_rows(int numRows)
    {
        std::vector<std::vector<int>>Rows;

        for(int i=0;i<numRows;i++)
        {
            std::vector<int>row;
            int number=i;
            for(int a=0;a<=number;a++)
            {
                row.push_back(binomialCoefficient(number,a));
            }
            Rows.push_back({row});
        }
        return Rows;
    }
}