#pragma once
#include <SFML/Graphics.hpp>

class Gravity
{
private:

    sf::RectangleShape m_shape;
    sf::Vector2f position, velocity, acceleration;

public:

    Gravity(float x_pos, float y_pos) : position(x_pos, y_pos);
    void Step();
    void Draw(sf::RenderWindow& window);
};
