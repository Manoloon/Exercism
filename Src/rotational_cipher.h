//
// Created by Manoloon on 26/1/2024.
//

#ifndef EXERCISM_ROTATIONAL_CIPHER_H
#define EXERCISM_ROTATIONAL_CIPHER_H
#pragma once

#include <string>
namespace rotational_cipher {
    std::string rotate(std::string str, int n) {
        n = n%26;
        for (auto &c: str) {
            if(std::isalpha(c)){
                char base = std::isupper(c) ? 'A' : 'a';
                c= static_cast<char>((c-base+n)%26+base);
            }
        }
        return str;
    }
}  // namespace rotational_cipher

#endif //EXERCISM_ROTATIONAL_CIPHER_H
