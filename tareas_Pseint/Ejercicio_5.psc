Algoritmo Ejercicio_5
	// Cálculo del promedio de N números
	Escribir 'Ingrese la cantidad de números a promediar: ';
	Leer N_numeros;
	i <- 0;
	Mientras i<N_numeros Hacer
		Escribir 'Ingrese un numero: ';
		Leer numero;
		total <- total+numero;
		i <- i+1;
	FinMientras
	promedio <- total/N_numeros;
	Escribir 'El promedio es: ', promedio;
FinAlgoritmo
