#include <iostream>
#include <SFML/Graphics.hpp>
#include "Declarations.h"
#include "Entity.h"

//https://stackoverflow.com/questions/20876494/how-can-i-set-gravity-using-this-code-sfml-c#comment31353305_20876494
//Player& player
void PlayerMovemment(sf::RectangleShape& rectangle, sf::Clock clock);

int main()
{

	//Me crea la ventana
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML EndlessGame Francisco Jonas");
	window.setFramerateLimit(120u);
	sf::Vector2f position;
	//Crea un circulo
	sf::RectangleShape rectangle(sf::Vector2f(100.f, 50.f));
	rectangle.setSize(sf::Vector2f(100.f, 100.f));
	rectangle.setFillColor(sf::Color(150, 50, 250));
	// set shape
	rectangle.setOutlineThickness(20.f);
	rectangle.setOutlineColor(sf::Color(250, 150, 100));
	rectangle.setOrigin(-50, -350);
	Player player;

	/*sf::Vector2f gravity(0, 10);                     
	sf::Vector2f userInput = ...;                    
	sf::Vector2f acceleration = gravity + userInput;*/

	while (window.isOpen())
	{
		sf::Clock clock;
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		PlayerMovemment(rectangle, clock);

		window.clear();
		window.draw(rectangle);
		window.display();
	}
	return 0;
}

void PlayerMovemment(sf::RectangleShape& rectangle, sf::Clock clock)
{
	float dt = clock.restart().asSeconds();

	rectangle.setSize(sf::Vector2f(100.f, 100.f));
	sf::Vector2f position = rectangle.getPosition();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		rectangle.setPosition(position + sf::Vector2f(0, -5.0));
		sf::Vector2f velocity(0.f, -5.0f);
		position += velocity * dt;
	}
	/*else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		rectangle.setSize(sf::Vector2f(100.f, 50.f));
		rectangle.setOrigin(-50, -400);
	}*/


}


