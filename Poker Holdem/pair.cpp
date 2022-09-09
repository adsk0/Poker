#include <iostream>
#include <string>
#include <cstdlib>
#include "pair.hpp"
#include <stdio.h>
#include "river_card.hpp"
#include "turn_card.hpp"
#include "flops_card3.hpp"
#include "flops_card2.hpp"
#include "flops_card1.hpp"
#include "opponents_card2.hpp"
#include "opponents_card1.hpp"
#include "card1.hpp"
#include "card1.hpp"
#include "card2.hpp"
using namespace std;

int func_pair()
{
    int card1 = func_card1();
    int card2 = func_card2();
    int flops_card1 = func_flops_card1();
    int flops_card2 = func_flops_card2();
    int flops_card3 = func_flops_card3();
    int turn_card = func_turn_card();
    int river_card = func_river_card();
    double d_card1 = card1;
    double d_card2 = card2;
    double d_flops_card1 = flops_card1;
    double d_flops_card2 = flops_card2;
    double d_flops_card3 = flops_card3;
    double d_turn_card = turn_card;
    double d_river_card = river_card;
    int karmanka;

    if (d_card1 - d_card2 == 0 || ((d_card1 - d_card2) / 13 == 1) || ((d_card1 - d_card2) / 13 == 2) || ((d_card1 - d_card2) / 13 == 3) || ((d_card1 - d_card2) / 13 == -1) || ((d_card1 - d_card2) / 13 == -2) || ((d_card1 - d_card2) / 13 == -3))
    {
    karmanka = 1;
    }
    else
    {
       karmanka = 0;
    }

    int para_card1_and_board;

    if ((((d_card1 - d_flops_card1) / 13 == 1 || (d_card1 - d_flops_card1) / 13 == 2 || (d_card1 - d_flops_card1) / 13 == 3 || (d_card1 - d_flops_card1) / 13 == -1 || (d_card1 - d_flops_card1) / 13 == -2 || (d_card1 - d_flops_card1) / 13 == -3) && ((d_card1 - d_flops_card2) / 13 != 1 && (d_card1 - d_flops_card2) / 13 != 2 && (d_card1 - d_flops_card2) / 13 != 3 && (d_card1 - d_flops_card2) / 13 != -1 && (d_card1 - d_flops_card2) / 13 != -2 && (d_card1 - d_flops_card2) / 13 != -3) && ((d_card1 - d_flops_card3) / 13 != 1 && (d_card1 - d_flops_card3) / 13 != 2 && (d_card1 - d_flops_card3) / 13 != 3 && (d_card1 - d_flops_card3) / 13 != -1 && (d_card1 - d_flops_card3) / 13 != -2 && (d_card1 - d_flops_card3) / 13 != -3) && ((d_card1 - d_turn_card) / 13 != 1 && (d_card1 - d_turn_card) / 13 != 2 && (d_card1 - d_turn_card) / 13 != 3 && (d_card1 - d_turn_card) / 13 != -1 && (d_card1 - d_turn_card) / 13 != -2 && (d_card1 - d_turn_card) / 13 != -3) && ((d_card1 - d_river_card) / 13 != 1 && (d_card1 - d_river_card) / 13 != 2 && (d_card1 - d_river_card) / 13 != 3 && (d_card1 - d_river_card) / 13 != -1 && (d_card1 - d_river_card) / 13 != -2 && (d_card1 - d_river_card) / 13 != -3)) || (((d_card1 - d_flops_card2) / 13 == 1 || (d_card1 - d_flops_card2) / 13 == 2 || (d_card1 - d_flops_card2) / 13 == 3 || (d_card1 - d_flops_card2) / 13 == -1 || (d_card1 - d_flops_card2) / 13 == -2 || (d_card1 - d_flops_card2) / 13 == -3) && ((d_card1 - d_flops_card1) / 13 != 1 && (d_card1 - d_flops_card1) / 13 != 2 && (d_card1 - d_flops_card1) / 13 != 3 && (d_card1 - d_flops_card1) / 13 != -1 && (d_card1 - d_flops_card1) / 13 != -2 && (d_card1 - d_flops_card1) / 13 != -3) && ((d_card1 - d_flops_card3) / 13 != 1 && (d_card1 - d_flops_card3) / 13 != 2 && (d_card1 - d_flops_card3) / 13 != 3 && (d_card1 - d_flops_card3) / 13 != -1 && (d_card1 - d_flops_card3) / 13 != -2 && (d_card1 - d_flops_card3) / 13 != -3) && ((d_card1 - d_turn_card) / 13 != 1 && (d_card1 - d_turn_card) / 13 != 2 && (d_card1 - d_turn_card) / 13 != 3 && (d_card1 - d_turn_card) / 13 != -1 && (d_card1 - d_turn_card) / 13 != -2 && (d_card1 - d_turn_card) / 13 != -3) && ((d_card1 - d_river_card) / 13 != 1 && (d_card1 - d_river_card) / 13 != 2 && (d_card1 - d_river_card) / 13 != 3 && (d_card1 - d_river_card) / 13 != -1 && (d_card1 - d_river_card) / 13 != -2 && (d_card1 - d_river_card) / 13 != -3)) || (((d_card1 - d_flops_card3) / 13 == 1 || (d_card1 - d_flops_card3) / 13 == 2 || (d_card1 - d_flops_card3) / 13 == 3 || (d_card1 - d_flops_card3) / 13 == -1 || (d_card1 - d_flops_card3) / 13 == -2 || (d_card1 - d_flops_card3) / 13 == -3) && ((d_card1 - d_flops_card1) / 13 != 1 && (d_card1 - d_flops_card1) / 13 != 2 && (d_card1 - d_flops_card1) / 13 != 3 && (d_card1 - d_flops_card1) / 13 != -1 && (d_card1 - d_flops_card1) / 13 != -2 && (d_card1 - d_flops_card1) / 13 != -3) && ((d_card1 - d_flops_card2) / 13 != 1 && (d_card1 - d_flops_card2) / 13 != 2 && (d_card1 - d_flops_card2) / 13 != 3 && (d_card1 - d_flops_card2) / 13 != -1 && (d_card1 - d_flops_card2) / 13 != -2 && (d_card1 - d_flops_card2) / 13 != -3) && ((d_card1 - d_turn_card) / 13 != 1 && (d_card1 - d_turn_card) / 13 != 2 && (d_card1 - d_turn_card) / 13 != 3 && (d_card1 - d_turn_card) / 13 != -1 && (d_card1 - d_turn_card) / 13 != -2 && (d_card1 - d_turn_card) / 13 != -3) && ((d_card1 - d_river_card) / 13 != 1 && (d_card1 - d_river_card) / 13 != 2 && (d_card1 - d_river_card) / 13 != 3 && (d_card1 - d_river_card) / 13 != -1 && (d_card1 - d_river_card) / 13 != -2 && (d_card1 - d_river_card) / 13 != -3)) || (((d_card1 - d_turn_card) / 13 == 1 || (d_card1 - d_turn_card) / 13 == 2 || (d_card1 - d_turn_card) / 13 == 3 || (d_card1 - d_turn_card) / 13 == -1 || (d_card1 - d_turn_card) / 13 == -2 || (d_card1 - d_turn_card) / 13 == -3) && ((d_card1 - d_flops_card1) / 13 != 1 && (d_card1 - d_flops_card1) / 13 != 2 && (d_card1 - d_flops_card1) / 13 != 3 && (d_card1 - d_flops_card1) / 13 != -1 && (d_card1 - d_flops_card1) / 13 != -2 && (d_card1 - d_flops_card1) / 13 != -3) && ((d_card1 - d_flops_card2) / 13 != 1 && (d_card1 - d_flops_card2) / 13 != 2 && (d_card1 - d_flops_card2) / 13 != 3 && (d_card1 - d_flops_card2) / 13 != -1 && (d_card1 - d_flops_card2) / 13 != -2 && (d_card1 - d_flops_card2) / 13 != -3) && ((d_card1 - d_flops_card3) / 13 != 1 && (d_card1 - d_flops_card3) / 13 != 2 && (d_card1 - d_flops_card3) / 13 != 3 && (d_card1 - d_flops_card3) / 13 != -1 && (d_card1 - d_flops_card3) / 13 != -2 && (d_card1 - d_flops_card3) / 13 != -3) && ((d_card1 - d_river_card) / 13 != 1 && (d_card1 - d_river_card) / 13 != 2 && (d_card1 - d_river_card) / 13 != 3 && (d_card1 - d_river_card) / 13 != -1 && (d_card1 - d_river_card) / 13 != -2 && (d_card1 - d_river_card) / 13 != -3)) || (((d_card1 - d_river_card) / 13 == 1 || (d_card1 - d_river_card) / 13 == 2 || (d_card1 - d_river_card) / 13 == 3 || (d_card1 - d_river_card) / 13 == -1 || (d_card1 - d_river_card) / 13 == -2 || (d_card1 - d_river_card) / 13 == -3) && ((d_card1 - d_flops_card1) / 13 != 1 && (d_card1 - d_flops_card1) / 13 != 2 && (d_card1 - d_flops_card1) / 13 != 3 && (d_card1 - d_flops_card1) / 13 != -1 && (d_card1 - d_flops_card1) / 13 != -2 && (d_card1 - d_flops_card1) / 13 != -3) && ((d_card1 - d_flops_card2) / 13 != 1 && (d_card1 - d_flops_card2) / 13 != 2 && (d_card1 - d_flops_card2) / 13 != 3 && (d_card1 - d_flops_card2) / 13 != -1 && (d_card1 - d_flops_card2) / 13 != -2 && (d_card1 - d_flops_card2) / 13 != -3) && ((d_card1 - d_flops_card3) / 13 != 1 && (d_card1 - d_flops_card3) / 13 != 2 && (d_card1 - d_flops_card3) / 13 != 3 && (d_card1 - d_flops_card3) / 13 != -1 && (d_card1 - d_flops_card3) / 13 != -2 && (d_card1 - d_flops_card3) / 13 != -3) && ((d_card1 - d_turn_card) / 13 != 1 && (d_card1 - d_turn_card) / 13 != 2 && (d_card1 - d_turn_card) / 13 != 3 && (d_card1 - d_turn_card) / 13 != -1 && (d_card1 - d_turn_card) / 13 != -2 && (d_card1 - d_turn_card) / 13 != -3)))
    {

         para_card1_and_board = 1;
    }
    else
    {
       para_card1_and_board = 0;
    }

    int para_card2_and_board;

    if ((((d_card2 - d_flops_card1) / 13 == 1 || (d_card2 - d_flops_card1) / 13 == 2 || (d_card2 - d_flops_card1) / 13 == 3 || (d_card2 - d_flops_card1) / 13 == -1 || (d_card2 - d_flops_card1) / 13 == -2 || (d_card2 - d_flops_card1) / 13 == -3) && ((d_card2 - d_flops_card2) / 13 != 1 && (d_card2 - d_flops_card2) / 13 != 2 && (d_card2 - d_flops_card2) / 13 != 3 && (d_card2 - d_flops_card2) / 13 != -1 && (d_card2 - d_flops_card2) / 13 != -2 && (d_card2 - d_flops_card2) / 13 != -3) && ((d_card2 - d_flops_card3) / 13 != 1 && (d_card2 - d_flops_card3) / 13 != 2 && (d_card2 - d_flops_card3) / 13 != 3 && (d_card2 - d_flops_card3) / 13 != -1 && (d_card2 - d_flops_card3) / 13 != -2 && (d_card2 - d_flops_card3) / 13 != -3) && ((d_card2 - d_turn_card) / 13 != 1 && (d_card2 - d_turn_card) / 13 != 2 && (d_card2 - d_turn_card) / 13 != 3 && (d_card2 - d_turn_card) / 13 != -1 && (d_card2 - d_turn_card) / 13 != -2 && (d_card2 - d_turn_card) / 13 != -3) && ((d_card2 - d_river_card) / 13 != 1 && (d_card2 - d_river_card) / 13 != 2 && (d_card2 - d_river_card) / 13 != 3 && (d_card2 - d_river_card) / 13 != -1 && (d_card2 - d_river_card) / 13 != -2 && (d_card2 - d_river_card) / 13 != -3)) || (((d_card2 - d_flops_card2) / 13 == 1 || (d_card2 - d_flops_card2) / 13 == 2 || (d_card2 - d_flops_card2) / 13 == 3 || (d_card2 - d_flops_card2) / 13 == -1 || (d_card2 - d_flops_card2) / 13 == -2 || (d_card2 - d_flops_card2) / 13 == -3) && ((d_card2 - d_flops_card1) / 13 != 1 && (d_card2 - d_flops_card1) / 13 != 2 && (d_card2 - d_flops_card1) / 13 != 3 && (d_card2 - d_flops_card1) / 13 != -1 && (d_card2 - d_flops_card1) / 13 != -2 && (d_card2 - d_flops_card1) / 13 != -3) && ((d_card2 - d_flops_card3) / 13 != 1 && (d_card2 - d_flops_card3) / 13 != 2 && (d_card2 - d_flops_card3) / 13 != 3 && (d_card2 - d_flops_card3) / 13 != -1 && (d_card2 - d_flops_card3) / 13 != -2 && (d_card2 - d_flops_card3) / 13 != -3) && ((d_card2 - d_turn_card) / 13 != 1 && (d_card2 - d_turn_card) / 13 != 2 && (d_card2 - d_turn_card) / 13 != 3 && (d_card2 - d_turn_card) / 13 != -1 && (d_card2 - d_turn_card) / 13 != -2 && (d_card2 - d_turn_card) / 13 != -3) && ((d_card2 - d_river_card) / 13 != 1 && (d_card2 - d_river_card) / 13 != 2 && (d_card2 - d_river_card) / 13 != 3 && (d_card2 - d_river_card) / 13 != -1 && (d_card2 - d_river_card) / 13 != -2 && (d_card2 - d_river_card) / 13 != -3)) || (((d_card2 - d_flops_card3) / 13 == 1 || (d_card2 - d_flops_card3) / 13 == 2 || (d_card2 - d_flops_card3) / 13 == 3 || (d_card2 - d_flops_card3) / 13 == -1 || (d_card2 - d_flops_card3) / 13 == -2 || (d_card2 - d_flops_card3) / 13 == -3) && ((d_card2 - d_flops_card1) / 13 != 1 && (d_card2 - d_flops_card1) / 13 != 2 && (d_card2 - d_flops_card1) / 13 != 3 && (d_card2 - d_flops_card1) / 13 != -1 && (d_card2 - d_flops_card1) / 13 != -2 && (d_card2 - d_flops_card1) / 13 != -3) && ((d_card2 - d_flops_card2) / 13 != 1 && (d_card2 - d_flops_card2) / 13 != 2 && (d_card2 - d_flops_card2) / 13 != 3 && (d_card2 - d_flops_card2) / 13 != -1 && (d_card2 - d_flops_card2) / 13 != -2 && (d_card2 - d_flops_card2) / 13 != -3) && ((d_card2 - d_turn_card) / 13 != 1 && (d_card2 - d_turn_card) / 13 != 2 && (d_card2 - d_turn_card) / 13 != 3 && (d_card2 - d_turn_card) / 13 != -1 && (d_card2 - d_turn_card) / 13 != -2 && (d_card2 - d_turn_card) / 13 != -3) && ((d_card2 - d_river_card) / 13 != 1 && (d_card2 - d_river_card) / 13 != 2 && (d_card2 - d_river_card) / 13 != 3 && (d_card2 - d_river_card) / 13 != -1 && (d_card2 - d_river_card) / 13 != -2 && (d_card2 - d_river_card) / 13 != -3)) || (((d_card2 - d_turn_card) / 13 == 1 || (d_card2 - d_turn_card) / 13 == 2 || (d_card2 - d_turn_card) / 13 == 3 || (d_card2 - d_turn_card) / 13 == -1 || (d_card2 - d_turn_card) / 13 == -2 || (d_card2 - d_turn_card) / 13 == -3) && ((d_card2 - d_flops_card1) / 13 != 1 && (d_card2 - d_flops_card1) / 13 != 2 && (d_card2 - d_flops_card1) / 13 != 3 && (d_card2 - d_flops_card1) / 13 != -1 && (d_card2 - d_flops_card1) / 13 != -2 && (d_card2 - d_flops_card1) / 13 != -3) && ((d_card2 - d_flops_card2) / 13 != 1 && (d_card2 - d_flops_card2) / 13 != 2 && (d_card2 - d_flops_card2) / 13 != 3 && (d_card2 - d_flops_card2) / 13 != -1 && (d_card2 - d_flops_card2) / 13 != -2 && (d_card2 - d_flops_card2) / 13 != -3) && ((d_card2 - d_flops_card3) / 13 != 1 && (d_card2 - d_flops_card3) / 13 != 2 && (d_card2 - d_flops_card3) / 13 != 3 && (d_card2 - d_flops_card3) / 13 != -1 && (d_card2 - d_flops_card3) / 13 != -2 && (d_card2 - d_flops_card3) / 13 != -3) && ((d_card2 - d_river_card) / 13 != 1 && (d_card2 - d_river_card) / 13 != 2 && (d_card2 - d_river_card) / 13 != 3 && (d_card2 - d_river_card) / 13 != -1 && (d_card2 - d_river_card) / 13 != -2 && (d_card2 - d_river_card) / 13 != -3)) || (((d_card2 - d_river_card) / 13 == 1 || (d_card2 - d_river_card) / 13 == 2 || (d_card2 - d_river_card) / 13 == 3 || (d_card2 - d_river_card) / 13 == -1 || (d_card2 - d_river_card) / 13 == -2 || (d_card2 - d_river_card) / 13 == -3) && ((d_card2 - d_flops_card1) / 13 != 1 && (d_card2 - d_flops_card1) / 13 != 2 && (d_card2 - d_flops_card1) / 13 != 3 && (d_card2 - d_flops_card1) / 13 != -1 && (d_card2 - d_flops_card1) / 13 != -2 && (d_card2 - d_flops_card1) / 13 != -3) && ((d_card2 - d_flops_card2) / 13 != 1 && (d_card2 - d_flops_card2) / 13 != 2 && (d_card2 - d_flops_card2) / 13 != 3 && (d_card2 - d_flops_card2) / 13 != -1 && (d_card2 - d_flops_card2) / 13 != -2 && (d_card2 - d_flops_card2) / 13 != -3) && ((d_card2 - d_flops_card3) / 13 != 1 && (d_card2 - d_flops_card3) / 13 != 2 && (d_card2 - d_flops_card3) / 13 != 3 && (d_card2 - d_flops_card3) / 13 != -1 && (d_card2 - d_flops_card3) / 13 != -2 && (d_card2 - d_flops_card3) / 13 != -3) && ((d_card2 - d_turn_card) / 13 != 1 && (d_card2 - d_turn_card) / 13 != 2 && (d_card2 - d_turn_card) / 13 != 3 && (d_card2 - d_turn_card) / 13 != -1 && (d_card2 - d_turn_card) / 13 != -2 && (d_card2 - d_turn_card) / 13 != -3)))
    {
       para_card2_and_board = 1;
    }
    else
    {
       para_card2_and_board = 0;
    }

    int para_flops_card_1_and_flops_card_2;

    if (((d_flops_card1 - d_flops_card2) / 13 == 1 || (d_flops_card1 - d_flops_card2) / 13 == 2 || (d_flops_card1 - d_flops_card2) / 13 == 3 || (d_flops_card1 - d_flops_card2) / 13 == -1 || (d_flops_card1 - d_flops_card2) / 13 == -2 || (d_flops_card1 - d_flops_card2) / 13 == -3))
    {
       para_flops_card_1_and_flops_card_2 = 1;
    }
    else
    {
    para_flops_card_1_and_flops_card_2 = 0;
    }

    int para_flops_card_1_and_flops_card_3;

    if (((d_flops_card1 - d_flops_card3) / 13 == 1 || (d_flops_card1 - d_flops_card3) / 13 == 2 || (d_flops_card1 - d_flops_card3) / 13 == 3 || (d_flops_card1 - d_flops_card3) / 13 == -1 || (d_flops_card1 - d_flops_card3) / 13 == -2 || (d_flops_card1 - d_flops_card3) / 13 == -3) && ((d_flops_card1 - d_flops_card3) / 13 != 1 || (d_flops_card1 - d_flops_card3) / 13 != 2 || (d_flops_card1 - d_flops_card3) / 13 != 3 || (d_flops_card1 - d_flops_card3) / 13 != -1 || (d_flops_card1 - d_flops_card3) / 13 != -2 || (d_flops_card1 - d_flops_card3) / 13 != -3))
    {
      para_flops_card_1_and_flops_card_3 = 1;
    }
    else
    {
    para_flops_card_1_and_flops_card_3 = 0;
    }

    int para_flops_card_1_and_turn_card;

    if (((d_flops_card1 - d_turn_card) / 13 == 1 || (d_flops_card1 - d_turn_card) / 13 == 2 || (d_flops_card1 - d_turn_card) / 13 == 3 || (d_flops_card1 - d_turn_card) / 13 == -1 || (d_flops_card1 - d_turn_card) / 13 == -2 || (d_flops_card1 - d_turn_card) / 13 == -3) && ((d_flops_card1 - d_turn_card) / 13 != 1 || (d_flops_card1 - d_turn_card) / 13 != 2 || (d_flops_card1 - d_turn_card) / 13 != 3 || (d_flops_card1 - d_turn_card) / 13 != -1 || (d_flops_card1 - d_turn_card) / 13 != -2 || (d_flops_card1 - d_turn_card) / 13 != -3))
    {
      para_flops_card_1_and_turn_card = 1;
    }
    else
    {
    para_flops_card_1_and_turn_card = 0;
    }

    int para_flops_card_1_and_river_card;

    if (((d_flops_card1 - d_river_card) / 13 == 1 || (d_flops_card1 - d_river_card) / 13 == 2 || (d_flops_card1 - d_river_card) / 13 == 3 || (d_flops_card1 - d_river_card) / 13 == -1 || (d_flops_card1 - d_river_card) / 13 == -2 || (d_flops_card1 - d_river_card) / 13 == -3) && ((d_flops_card1 - d_river_card) / 13 != 1 || (d_flops_card1 - d_river_card) / 13 != 2 || (d_flops_card1 - d_river_card) / 13 != 3 || (d_flops_card1 - d_river_card) / 13 != -1 || (d_flops_card1 - d_river_card) / 13 != -2 || (d_flops_card1 - d_river_card) / 13 != -3))
    {
      para_flops_card_1_and_river_card = 1;
    }
    else
    {
    para_flops_card_1_and_river_card = 0;
    }

    int para_flops_card_2_and_flops_card_3;

    if (((d_flops_card2 - d_flops_card3) / 13 == 1 || (d_flops_card2 - d_flops_card3) / 13 == 2 || (d_flops_card2 - d_flops_card3) / 13 == 3 || (d_flops_card2 - d_flops_card3) / 13 == -1 || (d_flops_card2 - d_flops_card3) / 13 == -2 || (d_flops_card2 - d_flops_card3) / 13 == -3) && ((d_flops_card2 - d_flops_card3) / 13 != 1 || (d_flops_card2 - d_flops_card3) / 13 != 2 || (d_flops_card2 - d_flops_card3) / 13 != 3 || (d_flops_card2 - d_flops_card3) / 13 != -1 || (d_flops_card2 - d_flops_card3) / 13 != -2 || (d_flops_card2 - d_flops_card3) / 13 != -3))
    {
      para_flops_card_2_and_flops_card_3 = 1;
    }
    else
    {
    para_flops_card_2_and_flops_card_3 = 0;
    }

    int para_flops_card_2_and_turn_card;

    if (((d_flops_card2 - d_turn_card) / 13 == 1 || (d_flops_card2 - d_turn_card) / 13 == 2 || (d_flops_card2 - d_turn_card) / 13 == 3 || (d_flops_card2 - d_turn_card) / 13 == -1 || (d_flops_card2 - d_turn_card) / 13 == -2 || (d_flops_card2 - d_turn_card) / 13 == -3) && ((d_flops_card2 - d_turn_card) / 13 != 1 || (d_flops_card2 - d_turn_card) / 13 != 2 || (d_flops_card2 - d_turn_card) / 13 != 3 || (d_flops_card2 - d_turn_card) / 13 != -1 || (d_flops_card2 - d_turn_card) / 13 != -2 || (d_flops_card2 - d_turn_card) / 13 != -3))
    {
      para_flops_card_2_and_turn_card = 1;
    }
    else
    {
    para_flops_card_2_and_turn_card = 0;
    }

    int para_flops_card_2_and_river_card;

    if (((d_flops_card2 - d_river_card) / 13 == 1 || (d_flops_card2 - d_river_card) / 13 == 2 || (d_flops_card2 - d_river_card) / 13 == 3 || (d_flops_card2 - d_river_card) / 13 == -1 || (d_flops_card2 - d_river_card) / 13 == -2 || (d_flops_card2 - d_river_card) / 13 == -3) && ((d_flops_card2 - d_river_card) / 13 != 1 || (d_flops_card2 - d_river_card) / 13 != 2 || (d_flops_card2 - d_river_card) / 13 != 3 || (d_flops_card2 - d_river_card) / 13 != -1 || (d_flops_card2 - d_river_card) / 13 != -2 || (d_flops_card2 - d_river_card) / 13 != -3))
    {
      para_flops_card_2_and_river_card = 1;
    }
    else
    {
    para_flops_card_2_and_river_card = 0;
    }

    int para_flops_card_3_and_turn_card;

    if (((d_flops_card3 - d_turn_card) / 13 == 1 || (d_flops_card3 - d_turn_card) / 13 == 2 || (d_flops_card3 - d_turn_card) / 13 == 3 || (d_flops_card3 - d_turn_card) / 13 == -1 || (d_flops_card3 - d_turn_card) / 13 == -2 || (d_flops_card3 - d_turn_card) / 13 == -3) && ((d_flops_card3 - d_turn_card) / 13 != 1 || (d_flops_card3 - d_turn_card) / 13 != 2 || (d_flops_card3 - d_turn_card) / 13 != 3 || (d_flops_card3 - d_turn_card) / 13 != -1 || (d_flops_card3 - d_turn_card) / 13 != -2 || (d_flops_card3 - d_turn_card) / 13 != -3))
    {
       para_flops_card_3_and_turn_card = 1;
    }
    else
    {
      para_flops_card_3_and_turn_card = 0;
    }

    int para_flops_card_3_and_river_card;

    if (((d_flops_card3 - d_river_card) / 13 == 1 || (d_flops_card3 - d_river_card) / 13 == 2 || (d_flops_card3 - d_river_card) / 13 == 3 || (d_flops_card3 - d_river_card) / 13 == -1 || (d_flops_card3 - d_river_card) / 13 == -2 || (d_flops_card3 - d_river_card) / 13 == -3) && ((d_flops_card3 - d_river_card) / 13 != 1 || (d_flops_card3 - d_river_card) / 13 != 2 || (d_flops_card3 - d_river_card) / 13 != 3 || (d_flops_card3 - d_river_card) / 13 != -1 || (d_flops_card3 - d_river_card) / 13 != -2 || (d_flops_card3 - d_river_card) / 13 != -3))
    {
      para_flops_card_3_and_river_card = 1;
    }
    else
    {
    para_flops_card_3_and_river_card = 0;
    }

    int para_turn_card_and_river_card;

    if (((d_turn_card - d_river_card) / 13 == 1 || (d_turn_card - d_river_card) / 13 == 2 || (d_turn_card - d_river_card) / 13 == 3 || (d_turn_card - d_river_card) / 13 == -1 || (d_turn_card - d_river_card) / 13 == -2 || (d_turn_card - d_river_card) / 13 == -3) && ((d_turn_card - d_river_card) / 13 != 1 || (d_turn_card - d_river_card) / 13 != 2 || (d_turn_card - d_river_card) / 13 != 3 || (d_turn_card - d_river_card) / 13 != -1 || (d_turn_card - d_river_card) / 13 != -2 || (d_turn_card - d_river_card) / 13 != -3))
    {
      para_turn_card_and_river_card = 1;
    }
    else
    {
     para_turn_card_and_river_card = 0;
    }

    int pair = 0;
    int para[13] = {para_card1_and_board, para_card2_and_board, karmanka, para_flops_card_1_and_flops_card_2, para_flops_card_1_and_flops_card_3, para_flops_card_1_and_turn_card, para_flops_card_1_and_river_card,  para_flops_card_2_and_flops_card_3, para_flops_card_2_and_turn_card, para_flops_card_2_and_river_card,  para_flops_card_3_and_turn_card, para_flops_card_3_and_river_card, para_turn_card_and_river_card};

    int i;
    int sum_para = 0;
    for (i = 0; i < 13; i++)
    {
        sum_para = sum_para + para[i];
    }
    if (sum_para == 1)
    {
        pair = 1;
    }
    if (sum_para > 1)
    {
        pair = 2;
    }
return pair;
}


