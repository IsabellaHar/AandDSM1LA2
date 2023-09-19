#pragma once

#include <string>

using std::string;

class Penguin
{
private:
	string name;
	int age;
	float weight;

public:

	void displayStats();

	//Constructors
	Penguin();
	Penguin(string n, int a, float w);

	//Destructor
	~Penguin();

	//Getters (accessors)
	string getName();
	int getAge();
	float getWeight();

	//Setters (modifiers)
	void setName(string _name);
	void setAge(int _age);
	void setWeight(float _weight);

};

