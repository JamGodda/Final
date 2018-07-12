
#include "stdafx.h"   // the header file
#include "FunctionList.h" // The header file which contains all of the function names

int Continue = 0; // holds the int for if the player want's to play the game
string name = ""; // holds the players name
string* namePtr = &name; // the pointer for the name entered


void PlayerName() // The player enters thier name in this function
{

	cout << "This is the time lord applications and it is going to save your life today" << endl;
	cout << "\n\nBy the way what is your name? ";
	cin >> name; // player input
	cout << "Nice to meet you, " << name << endl; // output player name
	cout << "Wanna see seomthing cool? This is your pointer name: " << *namePtr << endl; // output player pointer name
	cout << "And this is your pointer name memory address: " << namePtr << endl; // output player name pointer memory location

	return;
}

void Info()
{
	cout << "\n\nDid you know that chairs kill more people than sharks every year? It's a true fact, trust me, I read it on the internet." << endl;
	cout << "This program is a timer to let you know when you should get out of your chair before it decideds to try and kill you!" << endl;
	cout << "Would you like help not dying today?" << endl;
	cout << "1. Yes" << endl; //player info text
	cout << "2. No" << endl; //player info text
	cin >> Continue; // player input
	if (Continue == 1) // checks to see if continue is equal to one
	{
		Timer(); // goes to this function if it is
	}
	if (Continue == 2) // chekcs to see if continue is equal to two
	{
		cout << "When your chair starts to eat just remeber I tried to help you..." << endl; // player sees this then it exits
	}
	if (Continue < 1 | Continue > 2) // checks to see if it is not a number listed above
	{
		cout << "thats not a valid option" << endl; 
		Info(); // reruns this function and allows the player to choose the correct answer
	}

	return;
}

int Timer() // this is the main function for the proram
{
	cout << "\n\nIn 15 minutes get up before the chair tries to kill you" << endl;
	for (int i = 15; i>0; --i) // it loops the program 15 times 
	{
		cout << "There is " << i << " minutes left till your chair will try and kill you" << endl;
		this_thread::sleep_for(std::chrono::minutes(1)); // basically it freezes the game for 1 minute at a time 15 times each minute it lets you know how long is left
	}
	cout << "Get out of your Chair!!" << endl;
	system("pause"); // lets the player read the text
	
	Swap();// calls the next function

	return 0;
}

int Swap() // this handles all of the swapping info
{
	srand(static_cast<unsigned int>(time(0))); //seed random number generator
	int RandomLeft = rand(); // tells it to grab a random number
	int RandomRight = rand(); // tells it to grab a random number

	int LeftHand = (RandomLeft % 5) + 1; // Random number between 1 and 5
	int RightHand = (RandomRight % 5) + 1; // Random number between 1 and 5

	cout << "\n\nThis is a secret magic trick I am going to take a number of finger from one hand and transfer it to the other." << endl;
	cout << "On my left hand I am going to put up " << LeftHand << " finger(s). " << endl; // output origial left hand finger amount
	cout << "On my right hand I am going to put up " << RightHand << " finger(s). " << endl; // output origial right hand finger amount
	cout << "Now watch closely" << endl;
	badSwap(LeftHand, RightHand); // keeps the finger numbers the same 
	cout << "I take the " << LeftHand << " finger(s) on my left hand and hit them together with my other hand." << endl; // output origial left hand finger amount
	cout << "I take the " << RightHand << " finger(s) on my right hand and hit them together with my other hand." << endl; // output origial right hand finger amount
	cout << "BAM, AMAZING, MAGICAL!!!" << endl;
	goodSwap(LeftHand, RightHand); // switches the finger numbers 
	cout << "I now have " << LeftHand << " finger(s) on my left hand." << endl; // switched left hand value
	cout << "And on my right hand I have " << RightHand << " finger(s) " << endl; // switched right hand value
	cout << "This would have probably been cooler if you could actually see my hand, huh." << endl;
	return 0;
}

void badSwap(int x, int y) // the varaibles are passed into x and y
{
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int& x, int& y) // Switches the x and y values so the finger number appears to be passed from one hand to another.
{
	int temp = x;
	x = y;
	y = temp;
}

