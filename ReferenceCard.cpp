#include "stdafx.h"
#include "ReferenceCard.h"
#include <iostream>

void ReferenceCard::displayCard()
{
	std::cout << "Reference Card: " << std::endl;
	std::cout << "ACTIONS" << std::endl;
	std::cout << "1) DRIVE/FERRY" << std::endl;
	std::cout << "2) DIRECT FLIGHT" << std::endl;
	std::cout << "3) CHARTER FLIGHT" << std::endl;
	std::cout << "4) SHUTTLE FLIGHT" << std::endl;
	std::cout << "5) BUILD A RESEARCH STATION" << std::endl;
	std::cout << "6) TREAT DISEASE" << std::endl;
	std::cout << "7) SHARE KNOWLEDGE" << std::endl;
	std::cout << "8) DISCOVER A CURE" << std::endl;
	std::cout << "9) QUIT " << std::endl;

}