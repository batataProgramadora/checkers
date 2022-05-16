#include "board.h"

Board::Board(board_dimension dimension,int blocks_size,sf::RenderWindow window) {
	this->dimension = dimension;
	this->blocks_size = blocks_size;
	this->window = &window;
	
}

Board::Board(sf::RenderWindow window, board_dimension = standart, int blocks_size = 20) {
	this->window = &window;
	this->dimension = dimension;
	this->blocks_size = blocks_size;

}