#include "MapCity.h"

MapCity::MapCity(std::string name, std::vector <MapCity*> neighbours) :name(name), neighbours(neighbours){};
MapCity::MapCity(){};

MapCity::MapCity(std::string name)
{
	this->name = name;
}

std::string MapCity::getName()
{
	return name;
	std::cout << std::endl;
}

std::vector<MapCity*> MapCity::getNeighbours()
{
	return neighbours;
}


void MapCity::getListOfNeighbours()
{
	for (int i = 0; i < neighbours.size(); i++)
	{
		std::cout << i + 1 << ") " << neighbours[i]->getName() << std::endl;
	}
};


void MapCity::setNeighbours(std::vector<MapCity*> neighbours)
{
	this->neighbours = neighbours;
}