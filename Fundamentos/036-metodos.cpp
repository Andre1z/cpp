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
	Persona Josevicente;
	Josevicente.setEdad(46);
	std::cout << "La edad es de " << Josevicente.getEdad() << " años" << std::endl;
    return 0;
}
