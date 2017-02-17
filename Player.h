#ifndef PLAYER_H
#define PLAYER_H
#include "Pawn.h"
#include "ReferenceCard.h"
#include "InfectionCard.h"
#include <string>

class Player
{
public:

	Player();
	Player(std::string name, Pawn pawn);// , ReferenceCard referenceCard);
	std::string getName();
	void displayPossessions();

private:
	Pawn pawn_h;
	ReferenceCard referenceCard_h;
	std::string name_h;


};






#endif 