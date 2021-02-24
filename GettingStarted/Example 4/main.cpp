// main.cpp: Jose Miralles
// Description: A simple guessing game.

#include <iostream>
using namespace std;

class Game {
public:

	int guess;
	int randomNumber;
	int low;
	int high;

	Game(int low, int high);
	void getGuessFromUser();
	void getRandomNumber(int low, int high);
};

Game::Game(int low, int high)
{
	this->low = low;
	this->high = high;
}

void Game::getGuessFromUser()
{
	cout << "Guess a number..." << endl;
	
	do 
	{
		if (!(cin >> this->guess))
		{
			cout << "You need to enter a numeric value..." << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		else if (this->guess != -1)
		{
			if (this->guess == this->randomNumber) {
				cout << "You've guessed it!!!";
				return;
			}
		}
	} while (this->guess != -1);
}

/// <summary>
	/// Generates a random number between high and low, inclusive.
	/// </summary>
	/// <param name="low">Lowest number</param>
	/// <param name="high">Highest number</param>
	/// <returns></returns>
void Game::getRandomNumber(int low, int high)
{
	srand( time(NULL) );
	this->randomNumber = rand() % high + low;
}


int main()
{
	Game game = Game(0, 10);
	game.getRandomNumber(0, 10);
	game.getGuessFromUser();
	return 0;
}