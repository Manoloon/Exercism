#if !defined(ROBOT_SIMULATOR_H)
#define ROBOT_SIMULATOR_H
#include <string_view>
#include <utility>
namespace robot_simulator
{
    enum Bearing{NORTH,EAST,SOUTH,WEST};
    class Robot
    {
    public:
        Robot()=default;
        Robot(std::pair<int,int>pos,Bearing newBearing):position(std::move(pos)),bearing(newBearing){}

        Bearing get_bearing()const;
        std::pair<int,int> get_position()const;
        void execute_sequence(std::string_view Command);
        void turn_right();
        void turn_left();
        void advance();
        void robot_position(std::pair<int,int>pos);
        void robot_bearing(const Bearing& newBearing);
    private:
        void change_direction(int n);
        std::pair<int,int> position={0,0};
        Bearing bearing=Bearing::NORTH;
    };
}  // namespace robot_simulator

#endif // ROBOT_SIMULATOR_H