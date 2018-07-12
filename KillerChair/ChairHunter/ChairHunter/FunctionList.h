#pragma once
#include "stdafx.h" // this is all the libraries that are being using in the program

int Timer(); // this is the timer function that this appications is built upon
void Info(); // This is the info about what this program is and what it does
void PlayerName(); // this gets the player name after they have entered it
int Swap(); // this function is that outputs the swap function that exchanges values
void badSwap(int x, int y); // this one and the one below it are used to swap values for the hand trick
void goodSwap(int& x, int& y);

