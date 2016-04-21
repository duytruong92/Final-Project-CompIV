#ifndef UNIVERSE_HPP
#define UNIVERSE_HPP

#include "SpaceObject.hpp"
#include "Body.hpp"
#include "Star.hpp"

class Universe {
private:
	sf::Vector2f force_;
	sf::Vector2f size;
public:
	Universe();
	sf::Vector2f force(Body p1, Body p2);
    void running(double time, double step);

};

#endif
