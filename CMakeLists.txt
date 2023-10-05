cmake_minimum_required(VERSION 3.20)
project(Exercism)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_executable(Exercism main.cpp Src/space_age.cpp Src/space_age.h Src/Triangles.cpp Src/Triangles.h
        Src/grains.cpp Src/grains.h Src/Raindrops.cpp Src/Raindrops.h Src/pangram.h Src/two_fer.cpp
        Src/two_fer.h Src/grade_school.h Src/Hamming.h
        Src/difference_of_squares.cpp Src/difference_of_squares.h Src/collatz_conjecture.h
        Src/collatz_conjecture.cpp Src/hexadecimal.cpp Src/hexadecimal.h Src/binary.h Src/binary.cpp
        Src/sum_of_multiples.cpp Src/sum_of_multiples.h Src/Armstrong_Numbers.cpp Src/Armstrong_Numbers.h
        Src/pascal_triangle.cpp Src/pascal_triangle.h Src/VisualPatterns.cpp Src/VisualPatterns.h
        Src/Queen_Attack.cpp Src/Queen_Attack.h Src/perfect_numbers.h Src/perfect_numbers.cpp Src/robot_simulator.cpp
        Src/robot_simulator.h Src/circular_buffer.h Src/log_line.h Src/last_will.h Src/secret_handshake.h
        Src/largest_series_product.h Src/vehicle_purchase.h
        Src/atbash_cipher.h Src/troll_the_trolls.h Src/dijkstra_algorithm.h)
