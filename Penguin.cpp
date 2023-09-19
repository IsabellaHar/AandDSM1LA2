#include "Penguin.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;


void Penguin::displayStats() {
	std::cout << "Penguin: " << name << " age:" << age << " weight: " << weight << endl;
}

//GETTERS

//example getter - for name
string Penguin::getName() {
	return this->name;
}


//my getter (accessor) - for age
int Penguin::getAge() {
	return this->age;
}


//my getter - for weight
float Penguin::getWeight() {
	return this->weight;
}



//SETTERS

//example setter
void Penguin::setName(string _name) {
	this->name = _name;
}

//my setter (modifer) for age
void Penguin::setAge(int _age) {
	this->age = _age;
}

//my setter (modifer for weight
void Penguin::setWeight(float _weight) {
	this->weight = _weight;
}