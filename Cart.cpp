#include "Cart.h"

Cart::Cart()
{
	std::cout << "����������, ��: ";
	int quantity = inputNaturalNumber();
	setQuantity(quantity);
}

void Cart::setQuantity(int quantity=DEFAULT_VALUE_NUMBER)
{
	m_quantity = quantity;
}