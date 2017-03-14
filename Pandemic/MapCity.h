#pragma once 
#include <vector>
#include <iostream>
#include <string>

class MapCity
{
private:
	std::string name;
	std::vector <MapCity*> neighbours;

public:
	MapCity::MapCity(std::string name, std::vector <MapCity*> neighbours);
	MapCity::MapCity(std::string name);
	MapCity::MapCity();

	std::string getName();
	std::vector<MapCity*> getNeighbours();

	void setNeighbours(std::vector <MapCity*> neighbours);

	void getListOfNeighbours();
};
