#include <iostream>
using namespace std;

/* DISE�E UNA FUNCI�N QUE ELEVE UN N�MERO A UNA POTENCIA INDICADA, SIN USAR LA LIBRER�A MATH.H */

double pot (double b, double e){
	int x;
	double acum=1;
	for (x=1;x<=e;x++){
		acum=acum*b;
	}
	return acum;
}

/* FUNCI�N QUE CALCULE EL FACTORIAL DE UN N�MERO */

double fac (double n){
	int x;
	double acum=1;
	for (x=1;x<=n;x++){
		acum=acum*x;
	}
	return acum;
}

/* CALCULAR FUNCI�N DE LA ORDEN */

double funcion(double x){
	double operacion=(x-((pot(x,3))/fac(3))+((pot(x,5))/fac(5))-((pot(x,7))/fac(7)));
	return operacion;
}

/* FUNCI�N QUE RECIBE COMO PAR�METRO EL NOMBRE DE UNA PERSONA Y SU EDAD,
Y DEVUELVE UN SALUDO, INDICANDO ADEM�S SI ES O NO MAYOR DE EDAD */

string saludos (string nombre, int edad){
	
	string mensaje="Bienvenido " + nombre;
	
	if(edad>=18){
		mensaje= mensaje + ", eres mayor de edad";
	} else {
		mensaje= mensaje + ", a�n no eres mayor de edad";
	}
	
	return mensaje;
}

/* FUNCI�N QUE RECIBE COMO PAR�METROS EL NOMBRE DE UNA PERSONA,
EL D�A Y MES DE NACIMIENTO. LA FUNCI�N DEBE DEVOLVER EL NOMBRE 
DE LA PERSONA, INDICANDO EL SIGNO DEL ZODIACO AL QUE PERTENECE 
EJEMPLO: "HOLA JUAN, TU SIGNO DEL ZODIACO ES ACUARIO" 
--Acuario (21 de enero-18 de febrero)
--Piscis (19 de febrero-20 de marzo)
--Aries (21 de marzo - 20 de abril)
--Tauro (21 de abril - 21 de mayo)
--G�minis (22 de mayo - 21 de junio)
--C�ncer (22 de junio-22 de julio)
--Leo (23 de julio-23 de agosto)
--Virgo (24 de agosto-23 de septiembre)
--Libra (24 de septiembre-23 de octubre)
--Escorpio (24 de octubre-22 de noviembre) 
--Sagitario (23 de noviembre-21 de diciembre)
--Capricornio (22 de diciembre-20 de enero) */

	string signo_z(string nombre, int mes, int dia){
		string men = "Hola " + nombre;
		
		/* ACUARIO */
		if(mes == 1 && dia >= 21 || mes == 2 && dia >= 18){
				men+= ", tu signo zodiacal es Acuario";		
		} /* PISCIS */
		else if(mes == 2 && dia >= 19 || mes == 3 && dia >= 20){
				men+= ", tu signo zodiacal es Piscis";		
		} /* ARIES */
		else if(mes == 3 && dia >= 21 || mes == 4 && dia >= 20){
				men+= ", tu signo zodiacal es Aries";		
		} /* TAURO */
		else if(mes == 4 && dia >= 21 || mes == 5 && dia >= 21){
				men+= ", tu signo zodiacal es Tauro";		
		} /* G�MINIS */
		else if(mes == 5 && dia >= 22 || mes == 6 && dia <= 21){
				men+= ", tu signo zodiacal es G�minis";		
		} /* C�NCER */
		else if(mes == 6 && dia >= 22 || mes == 7 && dia <= 22){
				men+= ", tu signo zodiacal es C�ncer";		
		} /* LEO */
		else if(mes == 7 && dia >= 23 || mes == 8 && dia <= 23){
				men+= ", tu signo zodiacal es Leo";		
		} /* VIRGO */
		else if(mes == 8 && dia >= 24 || mes == 9 && dia <= 23){
				men+= ", tu signo zodiacal es Virgo";		
		} /* LIBRA */
		else if(mes == 9 && dia >= 24 || mes == 10 && dia <= 23){
				men+= ", tu signo zodiacal es Libra";		
		} /* ESCORPIO */
		else if(mes == 10 && dia >= 24 || mes == 11 && dia <= 22){
				men+= ", tu signo zodiacal es Libra";		
		} /* SAGITARIO */
		else if(mes == 11 && dia >= 23 || mes == 12 && dia <= 21){
				men+= ", tu signo zodiacal es Libra";		
		} /* CAPRICORNIO */
		else if(mes == 12 && dia >= 22 || mes == 1 && dia <= 22){
				men+= ", tu signo zodiacal es Libra";		
		} else {
			men+= ", ingrese correctamente sus datos";
		}
			
		return men;
	}

main(){
	setlocale(LC_ALL, ""); /*FUNCI�N PARA QUE APAREZCAN LAS TILDES EN LA CONSOLA*/
	int op;
	char r;

	do{
	cout << "\n--MENU DE OPCIONES--" << endl;
	cout << "1. ELEVAR N�MERO A POTENCIA INDICADA" << endl;
	cout << "2. FACTORIAL DE UN N�MERO" << endl;
	cout << "3. CALCULAR FUNCI�N" << endl;
	cout << "4. SALUDO CON CONFIRMACI�N DE EDAD" << endl;
	cout << "5. SALUDO CON SIGNO ZODIACAL" << endl;
	cout << "Elija una opci�n: ";
	cin >> op;
	
	switch (op){
	
	case 1:
		
		double base, exponente;
		
		cout << "\n";
		cout << "(ELEVAR N�MERO A POTENCIA INDICADA)";
		cout << "\n Ingrese la base: ";
		cin >>  base;
		cout << "\n Ingrese el exponente: ";
		cin >>  exponente;
			cout << "\n El resultado es: " << pot (base, exponente) << endl;
			
	break;
	
	case 2:
		
		double numero;
		
		cout << "\n";		
		cout << "(FACTORIAL DE UN N�MERO)";
		cout << "\n Ingrese el n�mero que desea calcular el factorial: ";
		cin >> numero;
		cout << "\n El factorial de " << numero << " es: " << fac(numero) << endl;
		
	break;
	
	case 3:
		
		double x;
		
		cout << "\n";		
		cout << "(FUNCI�N)";
		cout << "\n Ingrese el valor x: ";
		cin >> x;
		cout << "\n El resultado de la funci�n es: " << funcion(x) << endl;
		
	break;

	
	
	case 4: {

		string nom;
		int edad;
		cout << "Ingrese su nombre: ";
		cin.ignore();
		getline (cin, nom);
		cout << "Ingrese su edad: ";
		cin >> edad;
		cout << saludos(nom, edad);
		
	break; }
	
	case 5: {

		string n;
		int dia, mes;	
		cout << "Ingrese su nombre: ";
		cin.ignore();
		getline (cin, n);
		cout << "Ingrese su n�mero del mes de nacimiento: ";
		cin >> mes;
		cout << "Ingrese su d�a de nacimiento: ";
		cin >> dia;
		cout << signo_z(n, mes, dia);
		
	break; }
} 	
	cout << "\n\n -- �Desea volver al MEN� DE OPCIONES? -- Digite: s/n --" << endl;
	cin >> r;
	}while(r=='s','S');
	cout << "\n";
}


