Algoritmo coches
	Definir palabra Como Caracter;
	Dimension palabra[16];
	Definir autos Como Caracter;
	Definir i Como Entero;
	Dimension autos[10];
	
	Escribir "Universidad Internacional de Am�rica";
	Escribir "Ingenier�a en Sistemas Computacionales";
	Escribir "Segundo Cuatrimestre";
	Escribir "Alumno: Javier Eduardo Fortuna Gonzalez";
	Escribir "Ingresa los nombres de los autos";
	
	Para i=1 Hasta 9 Hacer
		Leer autos[i];
	FinPara
	
	Escribir "Los autos que introduciste al arreglo son:";
	
	Para i=1 Hasta 9 Con Paso 1 Hacer
		Escribir autos[i];
	FinPara
FinAlgoritmo