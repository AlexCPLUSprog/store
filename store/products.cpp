
#include "products.h"

// ����� ���������� �� �������
void print_prod(product& P) {
	std::cout << "�������� ������: " << P.name << std::endl;
	std::cout << "���������� ������: " << P.number << std::endl;
	std::cout << "���� �� �����: " << P.price << std::endl;
}

// ������ ��������� ��� �������
int full_price(product& P) {
	int tmp = 0;
	for (int i = 0; i < P.number; i++)
		tmp += P.price;
	return tmp;
}

// �����, �� ������� ��������� ���������� ������
void sell(product& P, int num) {
	std::cout << "�� ������� ���������� ������ �� " << num << std::endl;
	std::cout << "�������� ���������� ������: " << P.number - num << std::endl;
	P.number -= num;
}