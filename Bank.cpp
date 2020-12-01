#include "Bank.h"

Bank::Bank()
{
	setTotalCost();
	setCurrentTime();
}

void Bank::setTotalCost()
{
	m_total_cost = m_price * m_quantity;
}

void Bank::setCurrentTime()
{
	time_t my_time = time(NULL);
	localtime_s(&m_current_time, &my_time);
}

void Bank::showCheck()
{
	system("cls");
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Название товара: " << m_type << std::endl;
	std::cout << "Цена за единицу: " << m_price << "р." << std::endl;
	std::cout << "Количество, шт: " << m_quantity << std::endl;
	std::cout << "Итого: " << m_total_cost << "р." << std::endl;
	std::cout << std::endl;
	std::cout << "||||||||||||||" << std::endl;
	std::cout << m_barcode << std::endl;
	std::cout << std::endl;
	std::cout << m_current_time.tm_year+1900 << "-" << m_current_time.tm_mon+1 << "-" << m_current_time.tm_mday << " | ";
	std::cout << m_current_time.tm_hour << ":" << m_current_time.tm_min << ":" << m_current_time.tm_sec << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}