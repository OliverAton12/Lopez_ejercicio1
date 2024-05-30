Algoritmo Ecuacion_cuadratica
	Escribir "Ingresa los valores a,b,c. Pulse ENTER despues de cada ingreso"
	Leer a,b,c
	
	si a=0 Entonces
		Escribir "Error en ecuacion. No se puede dividir para 0"
	SiNo
		d=(b*b)- 4*a*c
		si d<0 Entonces
			Escribir "Error en ecuacion. El discriminamiento no puede seer negativo"
		SiNo
			x1= (-b + RC(d))/(2*a)
			x2= (-b - RC (d))/(2*a) 
			Escribir "El valor de x1 es" x1
			Escribir "El valor de x2 es" x2
		FinSi
	FinSi
	
	
FinAlgoritmo
