//
// Created by melvinr on 09/10/2021.
//

#include "Board.h"
#include <cstddef>
#include <iostream>
Board::Board(const size_t size)

{
    size_board = size;
    board = new int * [size_board];
    for ( int i = 0; i < size_board; i++ ) board[i] = new int[size_board];
}

Board::~Board() {
    delete [] board;
}

size_t Board::getSizeBoard() const {
    return size_board;
}

int **Board::getBoard() const {
    return board;
}

void Board::setBoard(int dim_one, int dim_two,int value)
{
    board[dim_one][dim_two] = {value};


}

