
#include "products.h"

int main() {
	setlocale(0, "ru");

	product ñhoco{ "chocolate", 10, 35 };	
	
	print_prod(ñhoco);
	std::cout << std::endl;

	std::cout << "Ïîëíàÿ ñòîèìîñòü: " << full_price(ñhoco) << std::endl;
	std::cout << std::endl;

	sell(ñhoco, 6);
	std::cout << std::endl;

	std::cout << "Ïîëíàÿ ñòîèìîñòü: " << full_price(ñhoco) << std::endl;

	return 0;
}





