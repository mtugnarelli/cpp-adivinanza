
#include <iostream>


bool adivino(int secreto, int arriesgado){

	return (secreto == arriesgado);
}

/*
 * Programa que le ofrece jugar al usuario
 * a adivinar un valor entero comprendido entre
 * 1 y 100.
 */
int main() {

	/* Número que tiene que adivinar */
	const int numeroSecreto = 47;
	unsigned int intentosRestantes = 3;

	std::cout << "Adivinanza !!" << std::endl;
	std::cout << "En qué número estoy pensando [1-100] ?" << std::endl;

	int numeroArriesgado;
	bool adivinoElNumero;

	do {

		std::cin >> numeroArriesgado;

		adivinoElNumero = adivino(numeroSecreto, numeroArriesgado);

		if (adivinoElNumero) {

			std::cout << "Ganaste :) " << std::endl;

		} else {

			std::cout << "No :| - Volvelo a intentar" << std::endl;
			intentosRestantes--;
		}

	} while (!adivinoElNumero && (intentosRestantes > 0));


	if (!adivinoElNumero) {

		std::cout << "Perdiste :("
				  << std::endl
				  << "El número secreto era "
				  << numeroSecreto
				  << std::endl;
	}

	return 0;
}



