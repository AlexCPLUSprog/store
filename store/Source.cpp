
#include "products.h"

int main() {
	setlocale(0, "ru");

	product �hoco{ "chocolate", 10, 35 };	
	
	print_prod(�hoco);
	std::cout << std::endl;

	std::cout << "������ ���������: " << full_price(�hoco) << std::endl;
	std::cout << std::endl;

	sell(�hoco, 6);
	std::cout << std::endl;

	std::cout << "������ ���������: " << full_price(�hoco) << std::endl;

	return 0;
}





