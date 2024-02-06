Algoritmo Ejercicio_9
	// Programa que indique si la suma de dos valores es positiva, negativa o cero
	Escribir 'Ingrese primer valor: ';
	Leer primero;
	Escribir 'Ingrese segundo valor: ';
	Leer segundo;
	suma <- primero+segundo;
	Si suma<0 Entonces
		Escribir 'La suma de los dos valores es negativa';
	SiNo
		Si suma>0 Entonces
			Escribir 'La suma de los dos valores es positiva';
		SiNo
			Escribir 'La suma de los dos valores es igual a 0';
		FinSi
	FinSi
FinAlgoritmo
