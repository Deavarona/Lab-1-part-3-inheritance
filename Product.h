#pragma once
#include "Section.h"
#include "Tools.h"
#include <ctime>

class Product :public Section
{
protected:
	std::string m_description;
	std::string m_origin;
	double m_price;
	std::string m_barcode;
public:
	Product();
	void setDescription(std::string);
	void setOrigin(std::string);
	void setPrice(double);
	void createBarcode();
	void setBarcode(std::string barcode);
	~Product()
	{
		std::cout << "Destructor 'Product' is working" << std::endl;
	}
};