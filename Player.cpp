#include "stdafx.h"
#include <iostream>
#include "Player.h"



Player::Player()
{

};

Player::Player(std::string name, Pawn pawn)
{
	name_h = name;
	pawn_h = pawn;

	std::cout << std::endl << "Player initialized!" << std::endl << "Name: " << getName() << std::endl << "Pawn color: " <<  pawn.getColor() << std::endl;

};

std::string Player::getName()
{
	return name_h;
};

void Player::displayPossessions()
{
	std::cout << getName() << ", has the following possessions: " << std::endl << pawn_h.getColor() << " colored pawn.";
}