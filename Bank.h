#pragma once
#include "Cart.h"
#include <ctime>

class Bank:public Cart
{
protected:
	tm m_current_time;
	double m_total_cost;
public:
	Bank();
	void setTotalCost();
	void setCurrentTime();
	void showCheck();
	~Bank()
	{
		std::cout << "Destructor 'Bank' is working" << std::endl;
	}
};
