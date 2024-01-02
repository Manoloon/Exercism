#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include<unordered_set>
#include<unordered_map>

namespace allergies {
    class allergy_test {
        std::unordered_set<std::string> allergiesPresent;

    public:
        explicit allergy_test(int _score) {

            std::unordered_map<int, std::string> allergies{
                    {1,   "eggs"},
                    {2,   "peanuts"},
                    {4,   "shellfish"},
                    {8,   "strawberries"},
                    {16,  "tomatoes"},
                    {32,  "chocolate"},
                    {64,  "pollen"},
                    {128, "cats"}};

            for (const auto& it: allergies) {
                if ((_score & it.first) == it.first)
                    allergiesPresent.insert(it.second);
            }
        }

        bool is_allergic_to(const std::string &allergy) {
            return allergiesPresent.count(allergy);
        }

        std::unordered_set<std::string> get_allergies() const {
            return allergiesPresent;
        }
    };
}  // namespace allergies
#endif // ALLERGIES_H