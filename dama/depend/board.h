#pragma once

#include <SFML\Graphics.hpp>

enum board_dimension {
	standart = 8,higher=10
	
};

class Board
{
public:
	Board(board_dimension dimension,int blocks_size,sf::RenderWindow window);
	Board(sf::RenderWindow, board_dimension dimension, int blocks_size);
	
	

private:
	sf::RenderWindow* window;
	sf::RectangleShape* big_rec;
	int blocks_size;
	int dimension;
	sf::RectangleShape* small_recs[100];

};


