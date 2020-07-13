#pragma once
#include "checks.h"
using std::cout;
using std::endl;

/*
Создайте приложение для работы автосалона. Необходимо
хранить информацию о продаваемых автомобилях (название, год выпуска, объем двигателя, цену).
Реализуйте интерфейс для добавления данных, удаления данных,
отображения данных, сортировке данных по различным
параметрам, поиску данных по различным параметрам.
*/

class Car
{
public:
	enum Limits
	{
		MAX_PRICE = 1000000,
		MAX_VOLUME = 2000,
	};

	Car();
	Car(string title, size_t yearOfConstruction, size_t engineVolume, size_t price);

	/*setters*/

	bool setTitle(string title);
	bool setYearOfConstruction(size_t year);
	bool setEngineVolume(size_t enjineVolume);
	bool setPrice(size_t price);

	bool setAll(string title, size_t yearOfConstruction, size_t engineVolume, size_t price);
	void setStandart();

	/*getters*/

	string getTitle() const;
	size_t getYearOfConstruction() const;
	size_t getEngineVolume() const;
	size_t getPrice() const;

	void print() const;

private:
	string title;
	size_t yearOfConstruction;
	size_t engineVolume;
	size_t price;

};

