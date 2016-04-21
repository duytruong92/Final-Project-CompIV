#ifndef SPACEOBJECT_HPP
#define SPACEOBJECT_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


class SpaceObject : public sf::Drawable
{
public:
	SpaceObject(){};
	SpaceObject(int univ_size, double unive_radius);
	void setPosition(sf::Vector2f pos);
	void setVelocity(sf::Vector2f velo);
	void setMass(double mass);
	void setUniverseSize(double univ_size);
	void setUniverseRadius(double unive_radius);
	void setNormalPos(sf::Vector2f normal_pos);
	void setAccel(sf::Vector2f accel);
	double getUniverseSize();
	double getMass();
	double getUniverseRadius();
	sf::Vector2f getAccel();
	sf::Vector2f getPosition();
	sf::Vector2f getVelocity();
	sf::Vector2f getNormalPos() const;

private:
	sf::Vector2f pos_;
	sf::Vector2f velo_;
	sf::Vector2f accel_;
	sf::Vector2f normal_pos_;
	double univ_size_;
	double unive_radius_;
	double mass_;
	virtual void draw( sf::RenderTarget &target, sf::RenderStates state ) const ;

};

#endif 