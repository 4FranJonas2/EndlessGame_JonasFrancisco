#pragma once
#include "Declarations.h"

class Gravity
{
private:

    sf::RectangleShape m_shape;
    sf::Vector2f position, velocity, acceleration;

public:

    Gravity(float x_pos, float y_pos);
    void Step();
    void Draw(sf::RenderWindow& window);
};