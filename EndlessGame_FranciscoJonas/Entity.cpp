#include "Entity.h"
#include "Declarations.h"

Gravity::Gravity(float x_pos, float y_pos) : position(x_pos, y_pos)
{
    m_shape.setSize(sf::Vector2f(100, 100));
    m_shape.setFillColor(sf::Color::Black);
    m_shape.setPosition(sf::Vector2f(x, y));

    // Constants at the moment (initial velocity up, then gravity pulls down)
    velocity = sf::Vector2f(0, -30);
    acceleration = sf::Vector2f(0, 9.81); //Earth's acceleration
}

void Gravity::Step()
{ // TODO: use delta time
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        velocity.y -= 1;
    }

    velocity.x += acceleration.x;
    velocity.y += acceleration.y;
    x += velocity.x;
    y += velocity.y;

    m_shape.setPosition(x, y);
}

void Gravity::Draw(sf::RenderWindow& window)
{
    window.draw(m_shape);
}