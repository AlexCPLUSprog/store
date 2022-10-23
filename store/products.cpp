
#include "products.h"

// Вывод информации об объекте
void print_prod(product& P) {
	std::cout << "Название товара: " << P.name << std::endl;
	std::cout << "Количество товара: " << P.number << std::endl;
	std::cout << "Цена за штуку: " << P.price << std::endl;
}

// Полная стоимость при покупке
int full_price(product& P) {
	int tmp = 0;
	for (int i = 0; i < P.number; i++)
		tmp += P.price;
	return tmp;
}

// Число, на которое снижается количество товара
void sell(product& P, int num) {
	std::cout << "Вы снизили количество товара на " << num << std::endl;
	std::cout << "Итоговое количество товара: " << P.number - num << std::endl;
	P.number -= num;
}