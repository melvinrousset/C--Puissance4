//
// Created by melvinr on 09/10/2021.
//

#ifndef TUTOC___BOARD_H
#define TUTOC___BOARD_H
#include <cstddef>

class Board {

private:
    int **board;
    size_t size_board;
public:
    Board(const size_t size);
    ~Board();
    size_t getSizeBoard() const;
    int **getBoard() const;
    void setBoard(int dim_one, int dim_two,int value);




};


#endif //TUTOC___BOARD_H
