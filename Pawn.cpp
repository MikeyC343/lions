#include "stdafx.h"
#include "Pawn.h"


Pawn::Pawn()
{
	color_h = "";
};

Pawn::Pawn(std::string color)
{
	color_h = color;
}

void Pawn::setColor(std::string color)
{
	color_h = color;
}


std::string Pawn::getColor()
{
	return color_h;
}