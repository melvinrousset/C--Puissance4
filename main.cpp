#include <iostream>
#include <vector>
#include "Board.h"
#include "Display.h"
#include "Calculation.h"

int *apply_all(const int first_array[], size_t first_size, const int second_array[],const size_t second_size) {
    int *array{nullptr};
    size_t size = first_size * second_size;
    array = new int[size];
    int value_array{0};
    int zeros{0};
    for (size_t i{0}; i < second_size; ++i) {
        array[zeros] = (first_array[zeros] * second_array[i]);


        zeros++;
    }
    return array;
}

int ajout(int a, int b)
{
    return 1;
}


int main() {
    size_t size_main;
    int player{1};
    int colone{0};
    int raw{0};

    std::cout << "entrer la taille du tableaux";

    std::cin >> size_main;
    Board the_board(size_main);
    Display aficher;
    Calculation calcul;
    while (true) {
        aficher.printBoard(the_board);
        aficher.printChoice(the_board);
        std::cout << "Joueur : " << player <<" Quelle colone ? ";
        std::cin >> colone;
        colone--;
        std::cout << colone << "\n";
        raw = calcul.addPoint(the_board,colone,player);

        if (calcul.checkWin(the_board, raw, colone, player)) {
            std::cout << "Le joueur :" << player << " A Gagner!!! " << "\n";
            return 1;
        } else if (player == 1) {
            player = 2;
        } else{
            player = 1;
        }
    }








}

