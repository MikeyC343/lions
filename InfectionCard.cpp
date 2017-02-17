#include "stdafx.h"
#include <iostream>
#include "InfectionCard.h"


InfectionCard::InfectionCard(std::string city, std::string colorCode)
{
		city_h = city;
		colorCode_h = colorCode;
}

void InfectionCard::infect()
{
	std::cout << city_h << " infected! 1 " << colorCode_h << " added to " << city_h << "." << std::endl;
}