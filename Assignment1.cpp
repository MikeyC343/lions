// COMP345AssignmentOne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Player.h"


int main()
{
	int choiceNumber;
	int referenceNumberChoice;

	std::string playerOneName;
	std::string color;
	std::vector <InfectionCard> infectionCards;
	
	ReferenceCard referenceCard; // TO BE USED WITH EVERY PLAYER SINCE IT HAS ONLY ONE UNIQUE FUNCTION

	InfectionCard riyadh("Riyadh", "Black");
	InfectionCard khartoum("Khartoum", "Yellow");
	InfectionCard washington("Washington", "Blue");
	InfectionCard shanghai("Shanghai", "Red");

	infectionCards.push_back(riyadh);
	infectionCards.push_back(khartoum);
	infectionCards.push_back(washington);
	infectionCards.push_back(shanghai);

	//std::srand(infectionCards.size);
	//int cardDraw;
	//std::cout << cardDraw;
	// std::cout << infectionCards.size();

	std::cout << "Welcome to the Pandemic introduction program! What is your name?" << std::endl;
	std::cin >> playerOneName;
	std::cout << std::endl;
	std::cout << "What is the color of your pawn?" << std::endl;
	std::cin >> color;
	std::cout << std::endl;
	Pawn pawnOne(color);
	Player player1(playerOneName, pawnOne);//, referenceCard);// , color, referenceCard);

	std::cout << "Drawing 3 infection cards!" << std::endl << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "I N F E C T E D   C I T I E S" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	infectionCards[0].infect();
	infectionCards[1].infect();
	infectionCards[2].infect();

	std::cout << "Press 1: to display possessions" << std::endl;
	std::cout << "Press 2: to display reference card actions" << std::endl;
	std::cin >> choiceNumber;

	if (choiceNumber == 1)
		player1.displayPossessions();
	else if (choiceNumber == 2)
	{
		referenceCard.displayCard();
		std::cout << "What do you want to do?" << std::endl;
		std::cin >> referenceNumberChoice;
		switch (referenceNumberChoice)
		{
			case 1: 
				std::cout << "Stuff and things "; // this is just a placeholder for later to be updated.
				break;
			case 9: break;
		}
	}
	//referenceCard.displayCard();

	//system("pause");
	return 0;
}

