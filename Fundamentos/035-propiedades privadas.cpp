#include <iostream>

class Persona{
	private:
    	int edad;  // Propiedad pública
};

int main() {
	Persona Andrei;
	Andrei.edad = 19;
	std::cout << "La edad es de " << Andrei.edad << " años" << std::endl;
    return 0;
}
