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
#include "pair.hpp"
#include "three_of_a_kind.hpp"
#include "straight.hpp"
#include "flush.hpp"
#include "full_house.hpp"
#include "four_of_a_kind.hpp"
#include "straight_flush_clubs.hpp"
#include "straight_flush_diamonds.hpp"
#include "straight_flush_hearts.hpp"
#include "straight_flush_spades.hpp"
#include "royal_flush.hpp"
using namespace std;

int main()
{
    int card1 = func_card1();
    int card2 = func_card2();
    int opponents_card1 = func_opponents_card1();
    int opponents_card2 = func_opponents_card2();
    int flops_card1 = func_flops_card1();
    int flops_card2 = func_flops_card2();
    int flops_card3 = func_flops_card3();
    int turn_card = func_turn_card();
    int river_card = func_river_card();
    
    string koloda[52] = {"2_clubs", "3_clubs", "4_clubs", "5_clubs", "6_clubs", "7_clubs", "8_clubs", "9_clubs", "10_clubs", "jack_clubs", "queen_clubs", "king_clubs", "ace_clubs", "2_diamonds", "3_diamonds", "4_diamonds", "5_diamonds", "6_diamonds", "7_diamonds", "8_diamonds", "9_diamonds", "10_diamonds", "jack_diamonds", "queen_diamonds", "king_diamonds", "ace_diamonds", "2_hearts", "3_hearts", "4_hearts", "5_hearts", "6_hearts", "7_hearts", "8_hearts", "9_hearts", "10_hearts", "jack_hearts", "queen_hearts", "king_hearts", "ace_hearts", "2_spades", "3_spades", "4_spades", "5_spades", "6_spades", "7_spades", "8_spades", "9_spades", "10_spades", "jack_spades", "queen_spades", "king_spades", "ace_spades"};
    
    string combination[10] = {"higt card", "pair", "two pair", "three of a kind", "straight", "flush", "full house", "four of a kind", "straight flush", "royal flush"};
    string your_combination = combination[0];
    
    cout << "your hand: " << endl << koloda[card1] << " and " << koloda[card2];
    cout << endl << "your opponents hand:" << endl << koloda[opponents_card1] << " and " << koloda[opponents_card2];
    cout << endl << "flop: " << endl << koloda[flops_card1] << " " << koloda[flops_card2] << " " << koloda[flops_card3];
    cout << endl << "turn:" << endl << koloda[flops_card1] << " " << koloda[flops_card2] << " " << koloda[flops_card3] << " " << koloda[turn_card];
    cout << endl << "river:" << endl << koloda[flops_card1] << " " << koloda[flops_card2] << " " << koloda[flops_card3] << " " << koloda[turn_card] << " " << koloda[river_card] << endl;
    
    int pair = func_pair();
    if (pair == 1)
    {
        your_combination = combination[1];
    }
    if (pair == 2)
    {
        your_combination = combination[2];
    }
    
    int set = func_three_of_a_kind();
    if (set == 1)
    {
        your_combination = combination[3];
    }
    
    int straight = func_straight();
    if (straight == 1)
    {
        your_combination = combination[4];
    }
    
    int flush = func_flush();
    if (flush == 1)
    {
        your_combination = combination[5];
    }
    
    int full_house = func_full_house();
    if (full_house == 1)
    {
        your_combination = combination[6];
    }
    
    int kare = func_kare();
    if (kare == 1)
    {
        your_combination = combination[7];
    }
    
    int straight_flush_clubs = func_straight_flush_clubs();
    if (straight_flush_clubs == 1)
    {
        your_combination = combination [8];
    }
    
    int straight_flush_diamonds = func_straight_flush_diamonds();
    if (straight_flush_diamonds == 1)
    {
        your_combination = combination [8];
    }
    
    int straight_flush_hearts = func_straight_flush_hearts();
    if (straight_flush_hearts == 1)
    {
        your_combination = combination [8];
    }
    
    int straight_flush_spades = func_straight_flush_spades();
    if (straight_flush_spades == 1)
    {
        your_combination = combination [8];
    }
    
    int royal_flush = func_royal_flush();
    if (royal_flush == 1)
    {
        your_combination = combination[9];
    }
    
    cout << "Your combination is: " << your_combination << endl;
    
    cout << card1 << endl;
    cout << card2 << endl;
    cout << flops_card1 << endl;
    cout << flops_card2 << endl;
    cout << flops_card3 << endl;
    cout << turn_card << endl;
    cout << river_card << endl;
    
    return 0;
}
