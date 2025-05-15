#include <iostream>

int main() {
	int mes;
	mes = 21;
	do{
		std::cout << "Hoy es el mes " << mes << " del año" << std::endl;
	 	mes++;
	}while(mes < 12);
    return 0;
}
