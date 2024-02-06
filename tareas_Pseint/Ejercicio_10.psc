Algoritmo Ejercicio_10
	// La versión personal de la calculadora vista en clase.
	Escribir '¿Qué operación desea realizar?';
	Escribir '1. Sumar';
	Escribir '2. Restar';
	Escribir '3. Multiplicar';
	Escribir '4. Dividir';
	Leer opcion;
	Escribir 'Ingrese un primer valor: ';
	Leer primero;
	Escribir 'Ingrese un segundo valor: ';
	Leer segundo;
	Según opcion Hacer
		1:
			resultado <- primero+segundo;
			Escribir 'El resultado de la suma de: ', primero, ' + ', segundo, ' = ', resultado;
		2:
			resultado <- primero-segundo;
			Escribir 'El resultado de la resta de: ', primero, ' - ', segundo, ' = ', resultado;
		3:
			resultado <- primero*segundo;
			Escribir 'El resultado de la multiplicación de: ', primero, ' * ', segundo, ' = ', resultado;
		4:
			Mientras segundo=0 Hacer
				Escribir 'Ingreser el segundo valor nuevamente(distinto de 0): ';
				Leer segundo;
			FinMientras
			resultado <- primero/segundo;
			Escribir 'El resultado de la división de: ', primero, ' / ', segundo, ' = ', resultado;
		De Otro Modo:
			Escribir 'El numero de operación es incorrecto!!';
	FinSegún
FinAlgoritmo
