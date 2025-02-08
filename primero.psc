algoritmo primero
	Definir Coste, Depreciacion, Valor_Recuperacion, Valor_Actual, Acumulado, Valor_Anual Como Real;
	Definir Año, Vida_Util Como Entero;
	escribir "introduzca coste";
	leer Coste;
	escribir "introduzca depreciacion";
	leer Valor_Recuperacion;
	escribir "introduzca vida util";
	leer Vida_Util;
	escribir "Introduzca año actual";
	leer Año;
	Valor_Actual <- Coste;
	Depreciacion <- (Coste-Valor_Recuperacion)/Vida_Util;
	Acumulado <- 0;
	escribir "Año Depreciación Dep. Acumulada Valor Anual";
	mientras Año <= Vida_Util Hacer
		Acumulado <- Acumulado+Depreciacion;
		Valor_Actual <- Valor_Actual-Depreciacion;
		escribir Año," ",Depreciacion," ",Acumulado," ",Valor_Actual;
		Año <- Año+1;
	fin mientras
FinAlgoritmo

