Algoritmo recorrer_vector
	Definir PUNTOS Como Entero;
	Definir num Como Entero;
	Definir i Como Entero; // Declaración de i
	Dimension PUNTOS[20];
	Definir suma Como Entero;
	Definir media Como Entero;
	
	
	Escribir "numero de datos";
	Leer num;
	
	suma <- 0; // Corrección de la asignación
	Escribir "datos del vector";
	
	Para i <- 1 Hasta num Hacer // Corrección del bucle Para
		Leer PUNTOS[i];
		suma <- suma + PUNTOS[i];
	FinPara
	
	media <- suma / num;
	Escribir "la media es ", media;
	
FinAlgoritmo