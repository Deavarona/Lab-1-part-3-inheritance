//Написать программу для обслуживания клиентов магазина. 
//Реализовать класс «Товар», «Отдел», «Корзина», «Банк».
//Каждый товар имеет характеристики: категория, тип, описание, страна происхождения, штрихкод.
//При обслуживании клиента необходимо подготовить электронный чек, в котором должна быть указано название товара, его цена,
//количество, общая сумма покупки, дата и время покупки

//Section=>Product=>Cart=>Bank

#include <iostream>
#include <Windows.h>
#include "Tools.h"
#include "Section.h"
#include "Product.h"
#include "Cart.h"
#include "Bank.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Bank shopping;
	shopping.showCheck();
}