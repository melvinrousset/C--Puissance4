//
// Created by melvinr on 09/10/2021.
//

#ifndef TUTOC___CALCULATION_H
#define TUTOC___CALCULATION_H

#include "Board.h"
class Calculation {
private:
    int type_joueur{0};

public:
    int addPoint(Board &board, const int choice, const int player);
    const bool checkLimite(Board &board, const int choice)const;
    const bool checkWin(Board &board,int raw,int column, const int player)const;


};


#endif //TUTOC___CALCULATION_H
