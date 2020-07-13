#include "Car.h"

Car::Car()
{
	setStandart();
}

void Car::setStandart() 
{
	this->title = "none";
	this->yearOfConstruction = 0;
	this->engineVolume = 0;
	this->price = 0;
}

Car::Car(string title, size_t yearOfConstruction, size_t engineVolume, size_t price)
{
	setAll(title, yearOfConstruction, engineVolume, price);
}

bool Car::setTitle(string title)
{
	return ch::CheckTitle(this->title, title);
}

bool Car::setYearOfConstruction(size_t year)
{
	return ch::CheckRangeEnum(this->yearOfConstruction, year, 0, 2077);
}

bool Car::setEngineVolume(size_t enjineVolume)
{
	return ch::CheckRangeEnum(this->engineVolume, engineVolume, 0, MAX_VOLUME);
}

bool Car::setPrice(size_t price)
{
	return ch::CheckRangeEnum(this->price, price, 0, MAX_PRICE);
}

bool Car::setAll(string title, size_t yearOfConstruction, size_t engineVolume, size_t price)
{
	bool correct = true;
	
	if (!setTitle(title)) 
	{
		correct = false;
		cout << "uncorectly title\n";
	}
	if (!setYearOfConstruction(yearOfConstruction))
	{
		correct = false;
		cout << "uncorectly year\n";
	}
	if (!setEngineVolume(engineVolume)) 
	{
		correct = false;
		cout << "uncorectly engine volume\n";
	}
	if (!setPrice(price)) 
	{
		correct = false;
		cout << "uncorectly price\n";
	}
	
	if(!correct)
		setStandart();

	return true;
}

string Car::getTitle() const
{
	return this->title;
}

size_t Car::getYearOfConstruction() const
{
	return this->yearOfConstruction;
}

size_t Car::getEngineVolume() const
{
	return this->engineVolume;
}

size_t Car::getPrice() const
{
	return this->price;
}

void Car::print() const
{
	cout << "title: " << getTitle() << endl;
	cout << "car year: " << getYearOfConstruction() << endl;
	cout << "engine volume: " << getEngineVolume() << endl;
	cout << "price: " << getPrice() << endl;
}