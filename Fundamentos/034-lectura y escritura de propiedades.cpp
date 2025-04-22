#include <iostream>

class Persona{
	public:
    	int edad;  // Propiedad pública
};

int main() {
	Persona Josevicente;
	Josevicente.edad = 46;
	std::cout << "La edad es de " << Josevicente.edad << " años" << std::endl;
    return 0;
}
