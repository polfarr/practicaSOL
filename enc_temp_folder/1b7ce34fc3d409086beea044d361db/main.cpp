#include <iostream>
#include <string>

void main() {
# pragma region exercici 6
	std::string num1;
	std::string num2;
	std::cout << "Quin sera el primer numero de la suma?" << std::endl;
	std::cin >> num1;
	std::cout << "Quin sera el segon numero de la suma?" << std::endl;
	std::cin >> num2;
	std::cout << "El resultat es"; std::cout << num1 + num2;

# pragma endregion

}