#include "opponents_card1.hpp"
#include "card1.hpp"
#include <cstdlib>
#include <string>
#include "card1.hpp"
#include "card2.hpp"
using namespace std;

int func_opponents_card1()
{
    string koloda[52] = {"2_clubs", "3_clubs", "4_clubs", "5_clubs", "6_clubs", "7_clubs", "8_clubs", "9_clubs", "10_clubs", "jack_clubs", "queen_clubs", "king_clubs", "ace_clubs", "2_diamonds", "3_diamonds", "4_diamonds", "5_diamonds", "6_diamonds", "7_diamonds", "8_diamonds", "9_diamonds", "10_diamonds", "jack_diamonds", "queen_diamonds", "king_diamonds", "ace_diamonds", "2_hearts", "3_hearts", "4_hearts", "5_hearts", "6_hearts", "7_hearts", "8_hearts", "9_hearts", "10_hearts", "jack_hearts", "queen_hearts", "king_hearts", "ace_hearts", "2_spades", "3_spades", "4_spades", "5_spades", "6_spades", "7_spades", "8_spades", "9_spades", "10_spades", "jack_spades", "queen_spades", "king_spades", "ace_spades"};
    
    int card1;
    card1 = func_card1();
    int card2;
    card2 = func_card2();
    int opponents_card1;
    srand((unsigned)time(NULL));
    opponents_card1 = rand() % 52;
    while (opponents_card1 == card1 || opponents_card1 == card2)
    {
        opponents_card1 = rand() % 52;
    }
    return opponents_card1;
}
