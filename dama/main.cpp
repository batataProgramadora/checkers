#include <SFML\Graphics.hpp>
#include "menu.h"






int main() {
	sf::RenderWindow window(sf::VideoMode(800, 800), "Dama!");
	sf::Event ev;
	while (window.isOpen()) {
		while (window.pollEvent(ev)) {
			if (ev.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::White);
		int button_width = 200;
		int button_height = 50;
		sf::Color button_color = sf::Color::Color(255, 140, 0);
		sf::RectangleShape play_button=createShape(button_width, button_height, button_color, sf::Color::Black);
		window.draw(play_button);
		sf::Font font;
		if (!font.loadFromFile("depend/res/font/arial.ttf"))
		{
			system("pause");
		}
		
		sf::Text text("Um pequeno texto",font,24);
		window.draw(text);
		//window.draw(settings_button);
		
		window.display();
	}
}