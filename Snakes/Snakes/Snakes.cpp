#include <iostream>
#include "UI/MainMenu.h"
#include <SFML/Graphics.hpp>
#include "UI/WindowManager.h"
int main()

{

	// Создание окна
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "Green Circle");
	window.setFramerateLimit(60);

	MainMenu ButonMenu;	


	while (window.isOpen()) {

		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		window.clear(sf::Color::Black);
		ButonMenu.Update(window);
		window.display();
	}

	return 0;



}
