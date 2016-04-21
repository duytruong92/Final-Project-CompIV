#ifndef BODY_HPP

#include "SpaceObject.hpp"

class Body: public SpaceObject{
private:
	sf::String filename_;
  	sf::String planet_name_;
    sf::Vector2f force_;

public:
	Body(int univ_size, double unive_radius):SpaceObject(univ_size, unive_radius){}
	friend std::istream& operator >> (std::istream& in, Body& body);
	void step(double seconds);
	void setName(sf::String name) ;
  	void setFile(sf::String file);
  	void setForce(sf::Vector2f force);
    sf::String getFile() const;
    sf::String getName(); 
  	sf::Vector2f getForce();
  	void setNewAccel();
  	void setNewVelo(double seconds);
  	void setNewPos(double seconds);
  	void setUpPos();
  	void draw( sf::RenderTarget &target, sf::RenderStates state ) const;

};

#endif 
