Algoritmo recorrer_vector
	Definir PUNTOS Como Entero;
	Definir num Como Entero;
	Definir i Como Entero; // Declaraci�n de i
	Dimension PUNTOS[20];
	Definir suma Como Entero;
	Definir media Como Entero;
	
	
	Escribir "numero de datos";
	Leer num;
	
	suma <- 0; // Correcci�n de la asignaci�n
	Escribir "datos del vector";
	
	Para i <- 1 Hasta num Hacer // Correcci�n del bucle Para
		Leer PUNTOS[i];
		suma <- suma + PUNTOS[i];
	FinPara
	
	media <- suma / num;
	Escribir "la media es ", media;
	
FinAlgoritmo