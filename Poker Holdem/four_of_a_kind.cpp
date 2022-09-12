#include "four_of_a_kind.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
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

int func_kare()
{
    int card1 = func_card1();
    int card2 = func_card2();
    int flops_card1 = func_flops_card1();
    int flops_card2 = func_flops_card2();
    int flops_card3 = func_flops_card3();
    int turn_card = func_turn_card();
    int river_card = func_river_card();
    
    int kare2 = 0;
    if ((card1 == 0 || card2 == 0 || flops_card1 == 0 || flops_card2 == 0 || flops_card3 == 0 || turn_card == 0 || river_card == 0) && (card1 == 13 || card2 == 13 || flops_card1 == 13 || flops_card2 == 13 || flops_card3 == 13 || turn_card == 13 || river_card == 13) && (card1 == 26 || card2 == 26 || flops_card1 == 26 || flops_card2 == 26 || flops_card3 == 26 || turn_card == 26 || river_card == 26) && (card1 == 39 || card2 == 39 || flops_card1 == 39 || flops_card2 == 39 || flops_card3 == 39 || turn_card == 39 || river_card == 39))
    {
        kare2 = 1;
    }
    
    int kare3 = 0;
        if ((card1 == 1 || card2 == 1 || flops_card1 == 1 || flops_card2 == 1 || flops_card3 == 1 || turn_card == 1 || river_card == 1) && (card1 == 14 || card2 == 14 || flops_card1 == 14 || flops_card2 == 14 || flops_card3 == 14 || turn_card == 14 || river_card == 14) && (card1 == 27 || card2 == 27 || flops_card1 == 27 || flops_card2 == 27 || flops_card3 == 27 || turn_card == 27 || river_card == 27) && (card1 == 40 || card2 == 40 || flops_card1 == 40 || flops_card2 == 40 || flops_card3 == 40 || turn_card == 40 || river_card == 40))
        {
            kare3 = 1;
        }

    int kare4 = 0;
        if ((card1 == 2 || card2 == 2 || flops_card1 == 2 || flops_card2 == 2 || flops_card3 == 2 || turn_card == 2 || river_card == 2) && (card1 == 15 || card2 == 15 || flops_card1 == 15 || flops_card2 == 15 || flops_card3 == 15 || turn_card == 15 || river_card == 15) && (card1 == 28 || card2 == 28 || flops_card1 == 28 || flops_card2 == 28 || flops_card3 == 28 || turn_card == 28 || river_card == 28) && (card1 == 41 || card2 == 41 || flops_card1 == 41 || flops_card2 == 41 || flops_card3 == 41 || turn_card == 41 || river_card == 41))
        {
            kare4 = 1;
        }

    int kare5 = 0;
            if ((card1 == 3 || card2 == 3 || flops_card1 == 3 || flops_card2 == 3 || flops_card3 == 3 || turn_card == 3 || river_card == 3) && (card1 == 16 || card2 == 16 || flops_card1 == 16 || flops_card2 == 16 || flops_card3 == 16 || turn_card == 16 || river_card == 16) && (card1 == 29 || card2 == 29 || flops_card1 == 29 || flops_card2 == 29 || flops_card3 == 29 || turn_card == 29 || river_card == 29) && (card1 == 42 || card2 == 42 || flops_card1 == 42 || flops_card2 == 42 || flops_card3 == 42 || turn_card == 42 || river_card == 42))
            {
                kare5 = 1;
            }

    int kare6 = 0;
            if ((card1 == 4 || card2 == 4 || flops_card1 == 4 || flops_card2 == 4 || flops_card3 == 4 || turn_card == 4 || river_card == 4) && (card1 == 17 || card2 == 17 || flops_card1 == 17 || flops_card2 == 17 || flops_card3 == 17 || turn_card == 17 || river_card == 17) && (card1 == 30 || card2 == 30 || flops_card1 == 30 || flops_card2 == 30 || flops_card3 == 30 || turn_card == 30 || river_card == 30) && (card1 == 43 || card2 == 43 || flops_card1 == 43 || flops_card2 == 43 || flops_card3 == 43 || turn_card == 43 || river_card == 43))
            {
                kare6 = 1;
            }
    
    int kare7 = 0;
            if ((card1 == 5 || card2 == 5 || flops_card1 == 5 || flops_card2 == 5 || flops_card3 == 5 || turn_card == 5 || river_card == 5) && (card1 == 18 || card2 == 18 || flops_card1 == 18 || flops_card2 == 18 || flops_card3 == 18 || turn_card == 18 || river_card == 18) && (card1 == 31 || card2 == 31 || flops_card1 == 31 || flops_card2 == 31 || flops_card3 == 31 || turn_card == 31 || river_card == 31) && (card1 == 44 || card2 == 44 || flops_card1 == 44 || flops_card2 == 44 || flops_card3 == 44 || turn_card == 44 || river_card == 44))
            {
                kare7 = 1;
            }

    int kare8 = 0;
            if ((card1 == 6 || card2 == 6 || flops_card1 == 6 || flops_card2 == 6 || flops_card3 == 6 || turn_card == 6 || river_card == 6) && (card1 == 19 || card2 == 19 || flops_card1 == 19 || flops_card2 == 19 || flops_card3 == 19 || turn_card == 19 || river_card == 19) && (card1 == 32 || card2 == 32 || flops_card1 == 32 || flops_card2 == 32 || flops_card3 == 32 || turn_card == 32 || river_card == 32) && (card1 == 45 || card2 == 45 || flops_card1 == 45 || flops_card2 == 45 || flops_card3 == 45 || turn_card == 45 || river_card == 45))
            {
                kare8 = 1;
            }

    int kare9 = 0;
            if ((card1 == 7 || card2 == 7 || flops_card1 == 7 || flops_card2 == 7 || flops_card3 == 7 || turn_card == 7 || river_card == 7) && (card1 == 20 || card2 == 20 || flops_card1 == 20 || flops_card2 == 20 || flops_card3 == 20 || turn_card == 20 || river_card == 20) && (card1 == 33 || card2 == 33 || flops_card1 == 33 || flops_card2 == 33 || flops_card3 == 33 || turn_card == 33 || river_card == 33) && (card1 == 46 || card2 == 46 || flops_card1 == 46 || flops_card2 == 46 || flops_card3 == 46 || turn_card == 46 || river_card == 46))
            {
                kare9 = 1;
            }

    int kare10 = 0;
            if ((card1 == 8 || card2 == 8 || flops_card1 == 8 || flops_card2 == 8 || flops_card3 == 8 || turn_card == 8 || river_card == 8) && (card1 == 21 || card2 == 21 || flops_card1 == 21 || flops_card2 == 21 || flops_card3 == 21 || turn_card == 21 || river_card == 21) && (card1 == 34 || card2 == 34 || flops_card1 == 34 || flops_card2 == 34 || flops_card3 == 34 || turn_card == 34 || river_card == 34) && (card1 == 47 || card2 == 47 || flops_card1 == 47 || flops_card2 == 47 || flops_card3 == 47 || turn_card == 47 || river_card == 47))
            {
                kare10 = 1;
            }

    int karejack = 0;
            if ((card1 == 9 || card2 == 9 || flops_card1 == 9 || flops_card2 == 9 || flops_card3 == 9 || turn_card == 9 || river_card == 9) && (card1 == 22 || card2 == 22 || flops_card1 == 22 || flops_card2 == 22 || flops_card3 == 22 || turn_card == 22 || river_card == 22) && (card1 == 35 || card2 == 35 || flops_card1 == 35 || flops_card2 == 35 || flops_card3 == 35 || turn_card == 35 || river_card == 35) && (card1 == 48 || card2 == 48 || flops_card1 == 48 || flops_card2 == 48 || flops_card3 == 48 || turn_card == 48 || river_card == 48))
            {
                karejack = 1;
            }
    
    int karequeen = 0;
            if ((card1 == 10 || card2 == 10 || flops_card1 == 10 || flops_card2 == 10 || flops_card3 == 10 || turn_card == 10 || river_card == 10) && (card1 == 23 || card2 == 23 || flops_card1 == 23 || flops_card2 == 23 || flops_card3 == 23 || turn_card == 23 || river_card == 23) && (card1 == 36 || card2 == 36 || flops_card1 == 36 || flops_card2 == 36 || flops_card3 == 36 || turn_card == 36 || river_card == 36) && (card1 == 49 || card2 == 49 || flops_card1 == 49 || flops_card2 == 49 || flops_card3 == 49 || turn_card == 49 || river_card == 49))
            {
                karequeen = 1;
            }

    int kareking = 0;
            if ((card1 == 11 || card2 == 11 || flops_card1 == 11 || flops_card2 == 11 || flops_card3 == 11 || turn_card == 11 || river_card == 11) && (card1 == 24 || card2 == 24 || flops_card1 == 24 || flops_card2 == 24 || flops_card3 == 24 || turn_card == 24 || river_card == 24) && (card1 == 37 || card2 == 37 || flops_card1 == 37 || flops_card2 == 37 || flops_card3 == 37 || turn_card == 37 || river_card == 37) && (card1 == 50 || card2 == 50 || flops_card1 == 50 || flops_card2 == 50 || flops_card3 == 50 || turn_card == 50 || river_card == 50))
            {
                kareking = 1;
            }
    
    int kareace = 0;
            if ((card1 == 12 || card2 == 12 || flops_card1 == 12 || flops_card2 == 12 || flops_card3 == 12 || turn_card == 12 || river_card == 12) && (card1 == 25 || card2 == 25 || flops_card1 == 25 || flops_card2 == 25 || flops_card3 == 25 || turn_card == 25 || river_card == 25) && (card1 == 38 || card2 == 38 || flops_card1 == 38 || flops_card2 == 38 || flops_card3 == 38 || turn_card == 38 || river_card == 38) && (card1 == 51 || card2 == 51 || flops_card1 == 51 || flops_card2 == 51 || flops_card3 == 51 || turn_card == 51 || river_card == 51))
            {
                kareace = 1;
            }
    
    int kare = 0;
    if (kare2 == 1 || kare3 == 1 || kare4 == 1 || kare5 == 1 || kare6 == 1 || kare7 == 1 || kare8 == 1 || kare9 == 1 || kare10 == 1 || karejack == 1 || karequeen == 1 || kareking == 1 || kareace)
    {
        kare = 1;
    }
    return kare;
}
