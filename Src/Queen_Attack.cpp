//
// Created by Manoloon on 7/8/2023.
//

#include "Queen_Attack.h"

namespace queen_attack
{
    std::pair<int,int>  queen_attack::chess_board::white() const
    {
        return whiteQ;
    }

    std::pair<int,int> queen_attack::chess_board::black() const
    {
        return blackQ;
    }

    [[maybe_unused]] bool queen_attack::chess_board::can_attack() const
    {
        if(PositionsAreEqual(whiteQ.first,blackQ.first) &&
           !PositionsAreEqual(whiteQ.second,blackQ.second))
        {
            return true;
        }
        if(!PositionsAreEqual(whiteQ.first,blackQ.first) &&
           PositionsAreEqual(whiteQ.second,blackQ.second))
        {
            return true;
        }
        return (std::abs(whiteQ.first - blackQ.first) == std::abs(whiteQ.second - blackQ.second) );
    }

    bool queen_attack::chess_board::IsNegative(const std::pair<int, int>& input)
    {
        return (input.first < 0 || input.second < 0);
    }

    bool queen_attack::chess_board::IsSmallerThanBoardSize(const std::pair<int, int>& input)
    {
        return (input.first < BoardSize && input.second < BoardSize);
    }

    bool queen_attack::chess_board::PositionsAreEqual(const int PosA,const int PosB)
    {
        return (PosA == PosB);
    }

}  // namespace queen_attack