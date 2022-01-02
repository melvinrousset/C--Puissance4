//
// Created by melvinr on 09/10/2021.
//

#include "Calculation.h"
#include "Board.h"
#include <iostream>

int Calculation::addPoint(Board &board, const int choice, const int player) {
    const size_t size{board.getSizeBoard() - 1};
    auto array{board.getBoard()};
    int raw{0};
        for (raw = 0; raw <= size; ++raw) {
            if (array[raw][choice] == 0)
                continue;
             else
                {
                board.setBoard(raw - 1, choice, player);
                return raw-1;
                }
        }

        board.setBoard(size, choice, player);
    return size;
}

    const bool Calculation::checkLimite(Board &board, const int choice) const
    {
        if (!board.getBoard()[0][choice])
            return true;
        return false;
    }

const bool Calculation::checkWin(Board &board,int raw,int column, const int player) const
{
    int tempo_column{column};
    auto array {board.getBoard()};
    unsigned int count {0};
    for (int i = column; i > -1 ; --i) {

        if (array[raw][i] == player)
            count++;

        if (array[raw][i] != 0 && array[raw][i] != player)
            i = -1;

    }
    for (size_t i = column; i < board.getSizeBoard()-1 ; ++i) {
        if (array[raw][i+1] == player)
            count++;
        if (array[raw][i] != 0 && array[raw][i] != player)
            i = board.getSizeBoard()-1;
    }

    if (count >= 4)
        return true;
    count = 0;

    for (int i = raw; i > -1 ; --i) {

        if (array[i][column] == player)
            count++;

        if (array[i][column] != 0 && array[i][column] != player)
            i = -1;

    }
    for (size_t i = raw; i < board.getSizeBoard()-1 ; ++i) {
        if (array[i][column] == player)
            count++;
        if (array[i][column] != 0 && array[i][column] != player)
            i = board.getSizeBoard()-1;
    }
    if (count >= 4)
        return true;
    count = 0;
    for (size_t i = raw; i > -1 ; --i) {
        if (array[i][tempo_column] == player)
            count++;
        if (array[i][tempo_column] != 0 && array[i][tempo_column] != player)
            i = -1;

        tempo_column--;

    }
    tempo_column = column;
    for (size_t i = raw; i < board.getSizeBoard()-1 ; ++i) {
        if (array[i][tempo_column] == player)
            count++;
        if (array[i][tempo_column] != 0 && array[i][tempo_column] != player)
            i = board.getSizeBoard()-1;

        tempo_column++;
    }
    if (count >= 3)
        return true;

    return false;


}
