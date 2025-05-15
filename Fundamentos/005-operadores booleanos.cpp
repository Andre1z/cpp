#include <iostream>

int main() {
	 bool comparacion;
	 comparacion = 8 == 8 && 7 == 7 && 6 == 6;
    std::cout << comparacion << std::endl;
    comparacion = 8 == 8 && 7 == 7 && 6 == 5;
    std::cout << comparacion << std::endl;
    
    comparacion = 8 == 8 || 7 == 7 || 6 == 6;
    std::cout << comparacion << std::endl;
    comparacion = 8 == 8 || 7 == 7 || 6 == 5;
    std::cout << comparacion << std::endl;
    comparacion = 8 == 8 || 7 == 6 || 6 == 5;
    std::cout << comparacion << std::endl;
    comparacion = 8 == 7 || 7 == 6 || 6 == 5;
    std::cout << comparacion << std::endl;
    return 0;
}
