Algoritmo Ejercicio_2
	// Calcular el cociente y residuo de la división de dos números A y B
	Escribir 'Ingrese el primer número: ';
	Leer A;
	Escribir 'Ingrese el seguno número: ';
	Leer b;
	Mientras b=0 Hacer
		Escribir 'Ingreser el segundo valor nuevamente(distinto de 0): ';
		Leer b;
	FinMientras
	cociente <- trunc(A/b);
	residuo <- A MOD b;
	Escribir 'El cociente de la división de ', A, ' / ', b, ' = ', cociente;
	Escribir 'El residuo de la división de ', A, ' / ', b, ' = ', residuo;
FinAlgoritmo
