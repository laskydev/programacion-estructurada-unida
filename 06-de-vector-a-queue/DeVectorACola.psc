Funcion Encolar(dato, primero Por Referencia, ultimo Por Referencia, u, queue)
	si((no(colaLlena(ultimo, n)))) Entonces
		si (ultimo = 0) Entonces
			
			ultimo <- 1;
			primero <- 1;
		SiNo
			ultimo = ultimo + 1;
		FinSi
		queue(ultimo) <- dato;
		
	SiNo
		Escribir "La cola esta llena";
	FinSi
FinFuncion

Funcion ret <- Desencolar(primero Por Referencia, ultimo Por Referencia, queue)
	si(no(colaVacia(ultimo))) Entonces
		ret <- queue[primero];
		si (primero = ultimo) Entonces
			primero <- 0;
		SiNo si (primero = n) Entonces
				primero <- 0;
			SiNo
				primero = primero + 1;
			FinSi
		FinSi
		
	SiNo
		Escribir "La cola esta vacia";
		ret <- 0;
	FinSi
FinFuncion

Funcion recorrerCola(primero, ultimo, queue)
	Mientras (No(colaVacia(ultimo))) Hacer
		Escribir Desencolar(primero, ultimo, queue);
	FinMientras
FinFuncion

Funcion tp <- colaVacia(ultimo)
	tp <- (ultimo = 0);
FinFuncion

Funcion tp <- colaLLena(ultimo,n)
	tp <- (ultimo = n);
FinFuncion

Proceso DeVectorACola

	
	n <- 3;
	primero <- 0;
	ultimo <- 0;
	Dimension queue[n];
	Dimension  vec[3];
	vec[1] <- 3;
	vec[2] <- 5;
	vec[3] <- 66;
	
	Encolar(vec[1], primero, ultimo, n, queue);
	Encolar(vec[2], primero, ultimo, n, queue);
	Encolar(vec[3], primero, ultimo, n, queue);
	
	Escribir "Datos encolados de vector a cola";
	
	Para i <- 1 Hasta n Con Paso 1 Hacer
		Escribir queue[i];
	FinPara
	
FinProceso
