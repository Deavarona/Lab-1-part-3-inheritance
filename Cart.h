#pragma once
#include "Product.h"

class Cart:public Product
{
protected:
	int m_quantity;
public:
	Cart();
	void setQuantity(int);
	~Cart()
	{
		std::cout << "Destructor 'Cart' is working" << std::endl;
	}
};