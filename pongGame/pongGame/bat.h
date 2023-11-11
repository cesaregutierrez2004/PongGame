#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Bat
{
private:
	Vector2f m_position;
	RectangleShape m_shape;
	float m_speed = 1000.0f;
	bool m_MovingRight = false;
	bool m_MovingLeft = false;
public:
	Bat(float startX, float startY);
	FloatRect getPosition();
	void moveLeft();
	RectangleShape getShape();
	void moveRight();
	void stopLeft();
	void stopRight();
	void update(Time dt);

};