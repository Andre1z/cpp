#include <iostream>

class Persona{
	private:
    	int edad;  // Propiedad pública
   public:
		void setEdad(int nuevaedad){
			edad = nuevaedad;
		}
		int getEdad(){
			return edad;
		}
};

int main() {
	Persona Andrei;
	Andrei.setEdad(19);
	std::cout << "La edad es de " << Andrei.getEdad() << " años" << std::endl;
    return 0;
}
