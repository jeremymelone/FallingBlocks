#pragma once

#include <vector>

#include <SFML/Graphics.hpp>

class Game
{

public:

	sf::RenderWindow window;

	sf::Vector2i enemies[20];
	int winw, winh;
	int left, right;
	int charPos, charVel;
	bool bulletTime, playerDead;
	int btLength;
	unsigned int score;

	const int BULLET_TIME_LENGTH = 5000;//length bullet time lasts for
	const int MAX_VEL = 6;//velocity of player
	const int ENEMY_FALL_SPEED = 5;//speed of enemies

	Game();
	~Game();

	void loop();
	void inputs();
	void update(int time);
	void render();

};
