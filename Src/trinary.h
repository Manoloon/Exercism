//
// Created by pablo on 1/1/2024.
//

#ifndef EXERCISM_TRINARY_H
#define EXERCISM_TRINARY_H
#if !defined(TRINARY_H)
#define TRINARY_H
#include <string>
#include <stdexcept>
#include <cmath>

namespace trinary {

    bool isNumber(const std::string& str){
        std::string::const_iterator it = std::begin(str);
        while(it != std::end(str) && std::isdigit(*it)){
            it++;
        }
        return it == std::end(str);
    }

    int to_decimal(const std::string& str){
        if(str == "") throw std::domain_error ("invalid arg") ;
        if (!isNumber(str)) return 0;
        int result=0;
        int size = str.size()-1;
        for(const char& c : str){
            int num = c - '0';
            int pow = 1;
            if(size >0) pow = std::pow(3,size);
            size--;
            result += num * pow;
        }
        return result;
    }

}  // namespace trinary

#endif // TRINARY_H
#endif //EXERCISM_TRINARY_H
