// Practico2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "Operaciones_matematicas.h"

using namespace std;


int main()
{
	int op, n, m;
	cout<<"Elija la opcion deseada: \n"
		<<"1 \t El cuadrado de un numero. \n"
		<<"2 \t La suma de dos numeros. \n"
		<<"3 \t El area de un circulo. \n"
		<<"4 \t El máximo de dos numeros. \n"
		<<"5 \t Concatenacion de nombres de variables \n"
		<<"6 \t Imprima por pantalla un texto \n"
		<<"7 \t Comparacion de cadena \n"
		<<"8 \t Operaciones binarias \n"
		<<"9 \t Operaciones logicas \n";
	int a;
	do
	{
		a=0;
		cin>> op;
		switch (op)
		{
			case 1:
				cout<<"Ingresa el numero al que deseas aplicar la operacion";
				cin>> n;
				m = Cuadrado(n);
				cout<<"EL cuadrado de "<<n<<" es "<<m;
				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			case 5:

				break;
			case 6:

				break;
			case 7:

				break;
			case 8:

				break;
			case 9:

				break;
			default:
				a=1;
				break;
		}
	}
	while(a==1);
}
