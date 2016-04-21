#include "Body.hpp"
#include <string>
#include <istream>

std::istream& operator >> (std::istream& in, Body& body){
    sf::Vector2f pos;
    sf::Vector2f vel;
    sf::Vector2f accel;
    double _mass;
    std::string _name;
    in >> (pos.x) >> (pos.y) >> (vel.x) >> (vel.y) >> _mass >> _name;
    body.setPosition(pos);
    body.setVelocity(vel);
    body.setMass(_mass);
    body.setName(_name);
    return in;
}

void Body::step(double seconds){
	setNewAccel();
  	setNewVelo(seconds);
  	setNewPos(seconds);
  	setUpPos();

}

void Body::setName(sf::String name){
	planet_name_ = name;
}

void Body::setFile(sf::String file){
	filename_= file;
}

void Body::setForce(sf::Vector2f force){
	force_ = force;
}

sf::Vector2f Body::getForce(){
	return force_;
}

void Body::setNewAccel(){
	sf::Vector2f accel;
  	accel.x = ((getForce()).x / (getMass()));
  	accel.y = ((getForce()).y / (getMass()));
  	setAccel(accel);
}

void Body::setNewVelo(double seconds){
	sf::Vector2f velo;
  	velo.x = ((getVelocity()).x + (seconds * (getAccel()).x));
  	velo.y = ((getVelocity()).y + (seconds * (getAccel()).y));
  	setVelocity(velo);
	
}

void Body::setNewPos(double seconds){
	sf::Vector2f pos;
  	pos.x = ((getPosition()).y + (seconds * (getVelocity()).y));
  	setPosition(pos);

}


sf::String Body::getFile() const{
    return filename_;
}

sf::String Body::getName(){
    return planet_name_;
}

void Body::setUpPos() {
    sf::Vector2f pos;
    (pos.x) = ((((800) / 2) + (((getPosition().x) / getUniverseRadius()) * (800) / 2)));
    (pos.y) = (((800) / 2) - (((getPosition().y) / getUniverseRadius()) *(800/ 2)));
 	setNormalPos(pos);
}

void Body::draw( sf::RenderTarget &target, sf::RenderStates state ) const{
	sf::Sprite sprite;
  	sf::Image image;
  	sf::Texture texture;
  	image.loadFromFile(getFile());
  	texture.loadFromImage(image);
  	sprite.setTexture(texture);
  	sprite.setPosition((getNormalPos()).x, (getNormalPos()).y);
  	target.draw(sprite, state);
}
