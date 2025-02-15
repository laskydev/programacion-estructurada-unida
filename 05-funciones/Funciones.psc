Funcion Saludar
	Escribir "Hola Mundo!";
FinFuncion

Funcion res <- CalcularDoble(num)
	Definir res Como Entero;
	res <- num*2;
FinFuncion

Funcion Triplicar(num Por Referencia)
	num <- num *3;
FinFuncion

Proceso Funciones
	
	Definir x Como Entero;
	
	Escribir "LLamada a la funcion Saludar";
	Saludar;
	
	Escribir "Ingrese un valor numerico para x:";
	Leer x;
	
	Escribir "Llamada a la funcion CalcularDoble (pasaje por valor)";
	Escribir "El doble de ", x, " es ", CalcularDoble(x);
	Escribir "El valor original de x es: ", x;
	
	Escribir "Llamada a la funcion Triplicar(pasaje por referencia)";
	Triplicar(x);
	Escribir "El nuevo valor de x es: ", x;
	
FinProceso
