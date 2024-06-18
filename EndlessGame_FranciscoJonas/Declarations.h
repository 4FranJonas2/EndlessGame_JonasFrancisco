#pragma once
#include <SFML/Graphics.hpp>

using namespace std;
const float maxY = 50.f;
const sf::Vector2f gravity(0.f, 5.f);

struct Player
{
	const float ACCELERATION = 200.0f;
	const float MAX_GRAVITY_VELOCITY = 200.0f;

	sf::Vector2f position;
	float gravity = 100.0f;
	sf::Vector2f velocity;

};