//�������� ��������� ��� ������������ �������� ��������. 
//����������� ����� ������, ������, ��������, �����.
//������ ����� ����� ��������������: ���������, ���, ��������, ������ �������������, ��������.
//��� ������������ ������� ���������� ����������� ����������� ���, � ������� ������ ���� ������� �������� ������, ��� ����,
//����������, ����� ����� �������, ���� � ����� �������

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