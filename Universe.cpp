
#include "Universe.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <vector>
#include <cmath>

Universe::Universe(){
	
}

sf::Vector2f Universe::force(Body p1, Body p2){
  	sf::Vector2f planet_force;
  	double totalForce, dx, dy, radius, radius_squared;
  	double grav = (-6.67e-11);
  
  	dx = (((p1.getPosition()).x) - ((p2.getPosition()).x));
  	dy = (((p1.getPosition()).y) - ((p2.getPosition()).y));

  	radius_squared = pow(dx, 2) + pow(dy, 2);
  	radius = sqrt(radius_squared);

  	totalForce = ((grav) * (p1.getMass()) * (p2.getMass())) / (radius_squared);

  	planet_force.x = totalForce * (dx/radius);
  	planet_force.y = totalForce * (dy/radius);

  	return planet_force;
}

void Universe::running(double time, double step)
{


	//int planet_count;

  	//double univ_radius;
  	//double time_step, current, time_;
  
  	//std::string planet_name;
  	//std::string planet_filename;
  
  	//std::vector<Body> planets;

  	//sf::Vector2f t_force;
  
  	//sf::Image background;

  	//sf::Music music;

  	//sf::Font font;
  	//sf::Text timestamp;

  	//time_ = time;
  	//time_step =  step;

  	sf::RenderWindow window( sf::VideoMode(800,800), "FinalProject - Solar System");
	while(window.isOpen()) {
	    sf::Event event;
		    while(window.pollEvent(event)) {
		      if(event.type == sf::Event::Closed) {
			window.close();
			break;
	        }
	    }
	}	
}
