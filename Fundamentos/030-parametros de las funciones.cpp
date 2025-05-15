#include <iostream>

int suma(int a,int b){
	int operando1 = a;
	int operando2 = b;
	int suma = operando1 + operando2;
	return suma;
}

int main() {
	 std::cout << suma(8,7) << std::endl;
	 std::cout << suma(7,134) << std::endl;
    return 0;
}
