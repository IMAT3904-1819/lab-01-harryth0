// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include <iostream>
#include "time.h"

using namespace std;

bool win = false;
int guesses = 5;

void main()
{
	srand(time(NULL));

	int iRandom = rand() % 10 + 1;

	int guess = 0;

	while (!win && guesses > 0)
	{
		cout << "Guess the number, between 1 and 100. Guesses remaining: " << guesses << endl;
		cin >> guess;

		while (guess < 1 || guess > 100 )
		{
			cout << "INVALID GUESS!" << endl;
			cout << "Please guess a number between 1 and 100. Guesses remaining : " << guesses<< endl;
			cin >> guess;
		}

		guesses--;

		if (guess < iRandom)
		{
			cout << "Higher." << endl;
		}
		else if (guess > iRandom)
		{
			cout << "Lower." << endl;
		}
		else
		{
			cout << "You win!" << endl;
			win = true;
		}
	}

	if (!win)
	{
		cout << "You lose, loser," << endl;
	}

	cout << "The random number was.... : " << iRandom << endl;

	system("PAUSE");
}

