#pragma once
#include <Vector>
#include "Car.h"
#include "enter.h"
using std::vector;

struct ParametersData
{
	bool* arr;
	size_t size;
};

class Menu
{
public:
	static void UseMenu();
private:
	vector<Car> listWithCars;

	void showAll();
	void addCar();
	void removeCar();
	void searchCar();
	void editCar();

	bool searchByTitle(const Car& car, const string& title);
	bool searchByPrice(const Car& car, const size_t& price);
	bool searchByYear(const Car& car, const size_t& price);
	bool searchByVolume(const Car& car, const size_t volume);
	ParametersData checkParameters(const string* parameters, size_t size, const string& parametersText);
};

