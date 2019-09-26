#include "Block.h"

Block::Block(float t_X, float t_Y, float t_Width, float t_Height)
{

	shape.setPosition(t_X, t_Y);
	shape.setSize({ t_Width, t_Height });
	shape.setFillColor(Color::Yellow);
	shape.setOrigin(t_Width / 2.f, t_Height / 2.f);

}

void Block::draw(RenderTarget& target, RenderStates state) const
{
	target.draw(this->shape, state);
}


float Block::left()
{
	return this->shape.getPosition().x - shape.getSize().x / 2.f;
}

float Block::right()
{
	return this->shape.getPosition().x + shape.getSize().x / 2.f;
}

float Block::top()
{
	return this->shape.getPosition().y - shape.getSize().y / 2.f;
}

float Block::bottom()
{
	return this->shape.getPosition().y + shape.getSize().y / 2.f;
}


Vector2f Block::getPosition()
{
	return shape.getPosition();
}

bool Block::isDestroyed()
{
	return this->destroyed;
}
void Block::destroy()
{
	this->destroyed = true;
}
Vector2f Block::getSize()
{
	return shape.getSize();
}

void Block::update()
{

}