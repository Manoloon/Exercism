//
// Created by Manoloon on 7/8/2023.
//
#include <utility>
#include <stdexcept>

#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

namespace queen_attack {
    class chess_board{
    public:
        chess_board(const std::pair<int, int>& white, const std::pair<int, int>& black)
                : whiteQ(white), blackQ(black)
                {
                    if(white == black)
                    {
                        throw std::domain_error("cannot be the same");
                    }
                    if(IsNegative(white))
                    {
                        throw std::domain_error("White cannot be negative");
                    }
                    if(IsNegative(black))
                    {
                        throw std::domain_error("Black cannot be negative");
                    }
                    if(!IsSmallerThanBoardSize(white))
                    {
                        throw std::domain_error("White cannot be greater than Board Size");
                    }
                    if(!IsSmallerThanBoardSize(black))
                    {
                        throw std::domain_error("Black cannot be greater than Board Size ");
                    }
                }

        std::pair<int,int> white() const;
        std::pair<int,int> black() const;

        [[maybe_unused]] bool can_attack() const;

    private:
        static bool IsNegative(const std::pair<int, int>& input) ;
        static bool IsSmallerThanBoardSize(const std::pair<int, int>& input) ;
        static bool PositionsAreEqual(const int PosA,const int PosB) ;
        static const int BoardSize = 8;

        std::pair<int,int> whiteQ;
        std::pair<int,int> blackQ;
    };
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H
