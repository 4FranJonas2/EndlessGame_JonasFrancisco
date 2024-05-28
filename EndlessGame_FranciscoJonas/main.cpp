#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;

void PlayerMovemment(sf::RectangleShape& rectangle);


struct Player
{
	const float ACCELERATION;

	sf::Vector2f position;
	sf::Vector2f gravity;
	sf::Vector2f velocity;

};

int main()
{
	//Me crea la ventana
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML EndlessGame Francisco Jonas");
	//Crea un circulo
	sf::RectangleShape rectangle(sf::Vector2f(100.f, 50.f));
	rectangle.setSize(sf::Vector2f(100.f, 100.f));
	rectangle.setFillColor(sf::Color(150, 50, 250));
	// set shape
	rectangle.setOutlineThickness(20.f);
	rectangle.setOutlineColor(sf::Color(250, 150, 100));
	rectangle.setOrigin(-50, -350);
	


	/*sf::Vector2f gravity(0, 10);                     
	sf::Vector2f userInput = ...;                    
	sf::Vector2f acceleration = gravity + userInput;*/

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		PlayerMovemment(rectangle);

		window.clear();
		window.draw(rectangle);
		window.display();
	}

	return 0;
}

void PlayerMovemment(sf::RectangleShape& rectangle)
{

	rectangle.setSize(sf::Vector2f(100.f, 100.f));
	sf::Vector2f position = rectangle.getPosition();
	sf::Vector2f gravity(0, 10);
	sf::Vector2f userInput = position;
	sf::Vector2f acceleration = gravity + userInput;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		rectangle.setPosition(position + sf::Vector2f(0.1, 0));
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		rectangle.setPosition(position + sf::Vector2f(-0.1, 0));
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		rectangle.setPosition(position + sf::Vector2f(0, -0.1));
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		rectangle.setSize(sf::Vector2f(100.f, 50.f));
		rectangle.setOrigin(-50, -400);
	}
}