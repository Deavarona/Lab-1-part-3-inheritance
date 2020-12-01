#include "Section.h"

Section::Section()
{
	std::string temp;

	std::cout << "Отдел товара: ";
	temp = createString();
	setCategory(temp);

	std::cout << "Название товара: ";
	temp = createString();
	setType(temp);
}

std::string Section::createString()
{
	std::string temp_string;
	std::getline(std::cin, temp_string);
	//temp_string.insert(0, "\"");
	//temp_string += "\"";
	return temp_string;
}

void Section::setCategory(std::string category = DEFAULT_VALUE_STRING)
{
	m_category = category;
}

void Section::setType(std::string type = DEFAULT_VALUE_STRING)
{
	m_type = type;
}