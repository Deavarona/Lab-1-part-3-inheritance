#include "Product.h"

Product::Product()
{
	std::string temp_string;

	std::cout << "Страна происхождения: ";
	temp_string = createString();
	setOrigin(temp_string);

	std::cout << "Описание товара: ";
	temp_string = createString();
	setDescription(temp_string);

	std::cout << "Цена товара: ";
	double temp_number;
	temp_number = inputPositiveNumber();
	setPrice(temp_number);

	createBarcode();
}

void Product::setDescription(std::string description = DEFAULT_VALUE_STRING)
{
	m_description = description;
}

void Product::setOrigin(std::string origin = DEFAULT_VALUE_STRING)
{
	m_origin = origin;
}

void Product::setPrice(double price=DEFAULT_VALUE_NUMBER)
{
	m_price = price;
}

void Product::createBarcode()
{
	srand(time(NULL));
	int country_code = rand() % (999 - 100 + 1) + 100;
	int product_code = rand() % (9999 - 1000 + 1) + 1000;
	int manufacturer_code = rand() % (99999 - 10000 + 1) + 100000;
	int check_digit = country_code / 10 % 10 + product_code / 1000 + product_code % 100 / 10 + 
		manufacturer_code / 10000 + manufacturer_code % 1000 + manufacturer_code / 100 + manufacturer_code % 10;
	check_digit *= 3;
	check_digit += country_code / 100 + country_code % 10 + product_code / 100 % 10 + product_code % 10 
		+ manufacturer_code / 1000 % 10 + manufacturer_code % 100 / 10;
	check_digit %= 10;
	std::string barcode = std::to_string(country_code) + std::to_string(product_code) 
		+ std::to_string(manufacturer_code) + std::to_string(check_digit);
	setBarcode(barcode);
}

void Product::setBarcode(std::string barcode)
{
	m_barcode = barcode;
}