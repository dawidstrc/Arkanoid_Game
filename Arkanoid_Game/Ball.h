#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Ball : public sf::Drawable
{

public:
	Ball(float t_X, float t_Y);
	Ball() = delete;
	~Ball() = default;

	void update();

	void moveDown();
	void moveUp();
	void moveRight();
	void moveLeft();

	Vector2f getPosition();

	float left();
	float right();
	float top();
	float bottom();

private:
	CircleShape shape;
	const float ballRadius{ 10.0f };
	const float ballVelocity{ 4.0f };
	Vector2f velocity{ ballVelocity, ballVelocity };
	void draw(RenderTarget& target, RenderStates state) const override;
};

