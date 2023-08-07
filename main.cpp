#include <iostream>
#include <string>
#include "Src/pascal_triangle.h"
#include "Src/VisualPatterns.h"
#include "Src/Queen_Attack.h"

int main()
{
    const auto white = std::make_pair(4, 1);
    const auto black = std::make_pair(2, 5);
    const queen_attack::chess_board board{white, black};
    std::cout << "result :" << (white == board.white()) << std::endl;
    std::cout << "result :" << (black == board.black()) << std::endl;
   return 0;
}