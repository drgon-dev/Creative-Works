#pragma once
#include <iostream>
#include <ctime>

class Food
{
protected:
	std::string Name;
	float Price;
	const std::string Prod[5] = { "Milk   ","Waffles","Cheese ","Egg    ","Bread  " };
	const float Pric[5] = { 15.2,100.1,8.41,1.1,22.8 };
public:
	Food() {
		int randnn = rand()%5;
		Name = Prod[randnn];
		Price = Pric[randnn];
	}
	Food(std::string N, float P) {
		Name = N;
		Price = P;
	}
	~Food() {}
	std::string GName() {
		return this->Name;
	}
	float GPrice() {
		return this->Price;
	}
};

