#include "Menu.h"

void Menu::UseMenu()
{
	bool menuWork = true;


	do
	{
		size_t choose;

		cout << "enter your choose: ";
		lcin >> choose;

		switch (choose)
		{
		case 0:
			break;
		}
	} while (menuWork);
}

void Menu::showAll()
{
	for (size_t i = 0; i < this->listWithCars.size(); i++)
		this->listWithCars[i].print();
}

void Menu::addCar()
{
	Car car;
	string title;
	size_t number;

	do
	{
		cout << "enter car title: ";
		lcin >> title;
	} while (!car.setTitle(title));

	do
	{
		cout << "enter car year of constructione: ";
		lcin >> number;
	} while (!car.setYearOfConstruction(number));

	do
	{
		cout << "enter car engine volume: ";
		lcin >> number;
	} while (!car.setEngineVolume(number));

	do
	{
		cout << "enter car price: ";
		lcin >> number;
	} while (!car.setPrice(number));

	this->listWithCars.push_back(car);
}

void Menu::searchCar()
{
	const size_t PARAMETERS_SIZE = 4;
	string parameters[PARAMETERS_SIZE] = { "title", "year", "engine volume", "price" };
	string parametersText;

	cout << "enter parameters(title, year, engine v): ";
	lcin >> parametersText;

	ParametersData parametersData = checkParameters(parameters, PARAMETERS_SIZE, parametersText);
	vector<Car> carList;
	vector<Car> tempCar;

	for (size_t i = 0; i < this->listWithCars.size(); i++);
}

bool Menu::searchByTitle(const Car& car, const string& title)
{
	return car.getTitle() == title;
}

bool Menu::searchByPrice(const Car& car, const size_t& price)
{
	return car.getPrice() == price;
}

bool Menu::searchByYear(const Car& car, const size_t& year)
{
	return car.getYearOfConstruction() == year;
}

bool Menu::searchByVolume(const Car& car, const size_t volume)
{
	return car.getEngineVolume() == volume;
}

ParametersData Menu::checkParameters(const string* parameters, size_t size, const string& parametersText)
{
	ParametersData parametersData;
	parametersData.arr = new bool[size];
	parametersData.size = size;

	for (size_t i = 0; i < size; i++)
	{
		if (parametersText.find(parameters[i]))
			parametersData.arr[i] = true;
		else
			parametersData.arr[i] = false;
	}

	return parametersData;
}
