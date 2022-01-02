//
// Created by melvinr on 09/10/2021.
//

#include "Display.h"
#include <iostream>
const void Display::printBoard(Board &tab) const
{
    const size_t size_board{tab.getSizeBoard()};
    auto array{tab.getBoard()};
    for (size_t size_dim_one = 0; size_dim_one < size_board; ++size_dim_one) {
        for (int size_dim_two = 0; size_dim_two < size_board; ++size_dim_two) {
            std::cout << array[size_dim_one][size_dim_two];
        }
        std::cout << "\n";
    }



}

const void Display::printChoice(Board &tab) const
{
    size_t board_size{tab.getSizeBoard()};
    char list [] = {'^','|'};

    for (size_t size = 0; size < board_size ; ++size)
    {
        std::cout << list[0];
    }
    std::cout << "\n";
    for (size_t size = 0; size < board_size ; ++size)
    {
        std::cout << list[1];
    }
    std::cout << "\n";
    for (size_t size = 0; size < board_size ; ++size)
    {
        std::cout << size+1;
    }
    std::cout << "\n";
}