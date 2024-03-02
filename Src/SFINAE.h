#pragma once
#include <iostream>
#include <type_traits>

struct B{
    typedef double number;
};

template<typename T>
typename T::number read(const T& t){
    std::cout << "read<T>\n";
    return 0;
}
// creating this overload function makes the error goes away
// the compiler will throw away this overload.
int read(int i){ std::cout << "read<T>\n";}

// in C++17 , we can use std::enable_if_t to complain with SFINAE
template<class T>
typename std::enable_if_t<std::is_arithmetic_v<T>,T>
    readSF(T t){
        std::cout << "read SFINAE<arithmetic<T>\n";
        return t;
    }
// here we permit the use of NON-arithmetic types such as string
template<class T>
typename std::enable_if_t<!std::is_arithmetic_v<T>,T>
    readSF(T t){
        std::cout << "read SFINAE<NON arithmetic<T>\n";
        return t;
    }
int main(){
    read(B());
    // error , 0 is an int , number is double. 
    // Substitution Failure Is Not An Error.
    read(0); 
    // use arithmetics type
    readSF(0);
    //types such as string
    readSF("");
}