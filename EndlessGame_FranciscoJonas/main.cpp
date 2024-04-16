#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;


int main()
{
    //Me crea la ventana
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML EndlessGame Francisco Jonas");
   //Crea un circulo
    sf::RectangleShape rectangle (sf::Vector2f(100.f,50.f));
    rectangle.setSize(sf::Vector2f(100.f, 100.f));
    rectangle.setFillColor(sf::Color(150,50,250));
    // set shape
    rectangle.setOutlineThickness(20.f);
    rectangle.setOutlineColor(sf::Color(250, 150, 100));


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(rectangle);
        window.display();
    }

    return 0;
}