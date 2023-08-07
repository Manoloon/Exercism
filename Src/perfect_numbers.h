#if !defined(PERFECT_NUMBERS_H)
#define PERFECT_NUMBERS_H

namespace perfect_numbers
{
    enum Type { perfect, abundant, deficient, ERROR };
    Type classify(int number);
}  // namespace perfect_numbers

#endif  // PERFECT_NUMBERS_H