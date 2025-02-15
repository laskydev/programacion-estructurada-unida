Algoritmo arreglo_multi
    Definir arreglo, fila, columna Como Entero;
	Dimension arreglo(3,3);
	
	Para fila <- 0 Hasta 2 Con Paso 1 Hacer
        Para columna <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir "Escribe un valor para la fila ", fila, " y la columna ", columna;
            Leer arreglo(fila,columna);
        Fin Para
    Fin Para
	
	Para fila <- 0 Hasta 2 Con Paso 1 Hacer
        Para columna <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir arreglo(fila,columna)," ", Sin Saltar;
        Fin Para
        Escribir "";
    Fin Para
FinAlgoritmo