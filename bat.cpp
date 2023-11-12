#include "bat.h"

Bat::Bat(float startX, float startY)
{
	m_position.x = startX;
	m_position.y = startY;

	m_shape.setSize(sf::Vector2f(50, 5));
	m_shape.setPosition(m_position);

}

FloatRect Bat::getPosition()
{
	return m_shape.getGlobalBounds();
}

RectangleShape Bat::getShape()
{
	return m_shape;
}

void Bat::moveLeft()
{
	m_MovingLeft = true;
}

void Bat::moveRight()
{
	m_MovingRight = true;
}
void Bat::stopLeft()
{
	m_MovingLeft = false;
}
void Bat::stopRight()
{
	m_MovingRight = false;
}

void Bat::update(Time dt)
{
	if (m_MovingLeft)
	{
		m_position.x -= m_speed * dt.asSeconds();
	}
	if (m_MovingRight)
	{
		m_position.x += m_speed * dt.asSeconds();
	}
	m_shape.setPosition(m_position);
}