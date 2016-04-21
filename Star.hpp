#ifdef STAR_HPP

#include"SpaceObject.hpp"

class star : public SpaceObject{
private:
	sf::CircleShape circle;
public:
	star();
};

#endif