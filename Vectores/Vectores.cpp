#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{   //para poder usar caracteres del español 
	setlocale(LC_ALL, "es_ES.UTF-8");

	// Un array dinámico de integers
	std::vector<int> intArray;

	// mostramos el tamaño original del vector intArray
	std::cout << "tamaño vector = " << intArray.size() << std::endl;

	// Insertar integers de ejemplo en el array
	intArray.push_back(62);	
	intArray.push_back(-31);
	intArray.push_back(4678);
	intArray.push_back(10214);

	// mostramos el tamaño del vector intArray tras poblarlo con push_back()
	std::cout << "tamaño vector = " << intArray.size() << std::endl;
	std::cout << "Los contenidos del vector son : " << std::endl;

	// Moverse por el vector y leer los valores usando un iterador
	std::vector<int>::iterator arrIterator = intArray.begin();

	while (arrIterator != intArray.end())
	{
		// Escribe el valor en la pantalla
		std::cout << *arrIterator << std:: endl;

		// Incrementa el iterador para acceder al siguiente elemento
		++arrIterator;
	}

	// Encontrar un elemento (por ejemplo 4678) usando el algoritmo ’find’ 
	std::vector<int>::iterator elFound = find(intArray.begin(),	intArray.end(), 4678);

	// Comprobar si el valor fue encontrado
	if (elFound != intArray.end())
	{
		// Determinar la posición del elemento usando std::distance
		int elPos = std::distance(intArray.begin(), elFound);
		std::cout << "Valor " << *elFound;
		std::cout << " encontrado en el vector en la posición : " << elPos << std::endl;
	}

	return 0;
}






















/*// construyendo vectores
#include <iostream>
#include <vector>

int main()
{
	// constructors :
	std::vector<int> primero;                                // vector vacío de ints
	std::vector<int> segundo(4, 100);                       // cuatro ints con valor 100
	std::vector<int> tercero(segundo.begin(), segundo.end());  // iterándose a través segundo
	std::vector<int> cuarto(tercero);                       // una copia de tercer

	// el constructor iterador puede ser usado también para construir desde arrays:
	int misints[] = { 16,2,77,29 };
	std::vector<int> quinto(misints, misints + sizeof(misints) / sizeof(int));

	std::cout << "Los contenidos de quinto son:";
	for (std::vector<int>::iterator it = quinto.begin(); it != quinto.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	return 0;
}*/

















/*#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "es_ES.UTF-8");

	// crea un vector para almacenar int
	vector<int> vec;
	int i;

	// mostramos el tamaño original de vec
	cout << "tamaño vector = " << vec.size() << endl;

	// ponemos 5 valores dentro del vector
	for (i = 0; i < 5; i++) {
		vec.push_back(i);
	}

	// mostramos el tamaño extendido del vectordisplay extended size of vec
	cout << "tamaño del vector extendido = " << vec.size() << endl;

	// acceder a 5 valores desde el vector
	for (i = 0; i < 5; i++) {
		cout << "valor del vec [" << i << "] = " << vec[i] << endl;
	}

	// usar iterador para acceder a los valores
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "valor de v = " << *v << endl;
		v++;
	}

	return 0;
}*/
