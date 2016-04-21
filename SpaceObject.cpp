#include "SpaceObject.hpp"

SpaceObject::SpaceObject(int univ_size, double unive_radius){
	setUniverseSize(univ_size);
	setUniverseRadius(unive_radius);
}

void SpaceObject::setPosition(sf::Vector2f pos){
	pos_ = pos;
}

void SpaceObject::setVelocity(sf::Vector2f velo){
	velo_ = velo;
}

void SpaceObject::setMass(double mass){
	mass_ = mass;
}

void SpaceObject::setUniverseSize(double univ_size){
	univ_size_ = univ_size;
}

void SpaceObject::setUniverseRadius(double unive_radius){
	unive_radius_ = unive_radius;
}

void SpaceObject::setNormalPos(sf::Vector2f normal_pos){
	normal_pos_ = normal_pos;
}

void SpaceObject::setAccel(sf::Vector2f accel){
	accel_ = accel;
}

double SpaceObject::getUniverseSize(){
	return univ_size_;
}
double SpaceObject::getMass(){
	return mass_;
}

double SpaceObject::getUniverseRadius(){
	return unive_radius_;
}

sf::Vector2f SpaceObject::getAccel(){
	return accel_;
}

sf::Vector2f SpaceObject::getPosition(){
	return pos_;
}

sf::Vector2f SpaceObject::getVelocity(){
	return velo_;
}

sf::Vector2f SpaceObject::getNormalPos() const
{
	return normal_pos_;
}

