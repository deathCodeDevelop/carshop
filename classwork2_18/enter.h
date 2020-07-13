#pragma once
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

#define MAX_SIZE_T "4294967295";

class Enter
{
public:
	
	bool operator >> (string& text);
	bool operator >> (size_t& number);
	bool operator >> (bool& variable);
	void format(string& text, string filters);
	void format(string& text, char low, char high);

private:
	string data;

	void enter();

	bool returnData(size_t& number);
	bool returnData(string& string);
	bool returnData(bool& variable);

	bool checkString(char low, char high, char plus);
	bool checkStringByFilters(string filters);
	bool checkStringToMax(const char type[]);
};

static Enter lcin;