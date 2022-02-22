//
// Created by Manoloon on 22/02/2022.
//

#include "VisualPatterns.h"
#include <iostream>
namespace VisualPatterns
{
    void HalfPyramidLeft(const int rows)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < i; j++)
            {
                std::cout << " * ";
            }
            std::cout << std::endl;
        }
    }

    void HalfInvertedPyramidLeft(const int rows)
    {
        for (int i = rows; i >= 1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                std::cout << " * ";
            }
            std::cout << std::endl;
        }
    }

    void FullPyramid(const int rows)
    {
        int count=0,count1=0,k=0;
        for(int i =1;i<=rows;++i)
        {
            for(int s=1;s<=rows-i;++s)
            {
                std::cout << "  ";
                ++count;
            }
            while (k != 2*i-1)
            {
                if(count <=rows-1)
                {
                    std::cout << i+k << " ";
                    ++count;
                }
                else
                {
                    ++count1;
                    std::cout << i+k-2*count1 << " ";
                }
                ++k;
            }
            count1 = count = k =0;
            std::cout << std::endl;
        }
    }

    void Square(const int rows)
    {
        for(int i=0;i<rows;++i)
        {
            for (int j=0;j<rows;++j)
            {
                std::cout << "#" << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}