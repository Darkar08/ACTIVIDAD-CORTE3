#include<iostream>

using namespace std;
 
 float res[4];
 
int menu();
int preguntas();
float  resultados(int i);
main(){
	int opc;
	opc=menu();
	if(opc==1){
		preguntas();
		cout << "____________________________________________________" << endl;
		cout << "GRACIAS ESPERO LE AYUDE A MEJORAR EL RENDIMIENTO DE SU PC HASTA PRONTO" << endl;
	}else{
		cout<<"arigato (^.^)";
	}
	
}

int menu(){
	int opcion;
	cout << " estas son algunas  de las causas por la cual una computadora disminuye "<<endl<<"la velocidad o tiene un mal rendiento al momento de ejecutar algunas tareas  " << endl<<endl;
	cout << " LA CAPACIDAD DE  DISCO DURO DE SU PC ES INSUFIECIENTE" << endl<<endl;
	cout << " Las VECES QUE  ANALIZA  AL MES PARA IDENTIFICAR ALGUN VIRUS SON LOS SUFICIENTES" << endl<<endl;
	cout << "SI LA CAPACIDAD DE MEMORIA RAM  LA INSUFIENTE " << endl<<endl;
	cout << "LA VECES QUE  REALIZA EN  SU PC PARA ELIMINAR ARCHIVOS INNECESARIOS SON LOS SUFIENTES" << endl<<endl;
	cout << "_________________________________________________________________________" << endl<<endl;
	cout << " ¿DESEA CONSULTAR EL TEST PARA VERIFICAR SU PC Y ASI DARLE SUGERENCIA? (1)Si/(2)No " << endl<<endl;
	cin >> opcion;
	return opcion;
}
 int preguntas(){
 	
 	for(int i=0;i<4;i++){
 		switch(i){
 			case 0:
 				
 				cout << " ¿CUAL ES LA CAPACIDAD DE SUS DISCO DURO?" << endl;
 				cin>>res[i];
 				resultados(i);
 				break;
 			case 1:
 				cout << " ¿CUANTAS VECES AL MES HACE ANALISIS DE VIRUS?" << endl;
 				cin>>res[i];
 				resultados(i);
 				break;
 			case 2:
 				cout << " ¿CUAl  CAPACIDAD DE MEMORIA RAM TIENE SU PC?" << endl;
 				cin>>res [i];
 				resultados(i);
 				break;
 			case 3:
 				cout << " ¿CUANTAS VECES AL MES HACE LIMPIEZA DE ARCHIVOS INNECESARIOS?" << endl;
 				cin>>res[i];
 				resultados(i);
 				break;
		 }
	 }
 	
 }
 
 float resultados(int i){
 		switch (i) {
		case 0:
			if (res[i]>=128) {
				cout << "LA CAPACIDAD DE DISCO DURO QUE TIENE SU PC ES LA SUFICIENTE POR LO CUAL TENDRA UN BUEN FUNCIONAMIENTO." << endl<<endl;
			} else {
				cout << "LA CAPACIDAD DE DISCO DURO NO ES BUENA." << endl;
				cout << "UNA DE LAS RECOMENDACIONES NECESARIAS ES QUE PUEDA COMPRAR UN DISCO DURO DE 128 GB PARA TERNER BUEN FUNCIONAMIENTO" << endl<<endl;
			}
			break;
		case 1:			
			if (res[i]>=5) {
				cout << "SU PC NO TIENE PROBLEMAS DE VIRUS." << endl;
				cout << "ES DECIR QUE LAS REVISIONES QUE LE HACE A SU PC PARA IDENTIFICAR ALGUN VIRUS MALIGNO SON LAS SUFICIENTES" << endl<<endl;
			} else {
				cout << "SU PC TIENE PROBLEMAS DE VIRUS MALIGNOS." << endl;
				cout << "LAS RECOMENDACIONES PARA TENER UN PC LIBRE DE VIRUS ES REVISARLA ENTRE 5 Y MAS VECES AL MES PARA NO TENER PROBLEMAS" << endl<<endl;
			}
			break;
		case 2:						
			if (res[i]>=1) {
				cout << "LA CAPACIDAD DE MEMORIA RAM NO TIENE PROBLEMAS." << endl;
				cout << "POR LO REGULAR LA PERSONAS PREFIEREN UN MEMORIA RAM DE 2 HASTA 4 GB DE RAM PARA NO TENER PROBLEMAS EN EJECUTAR OTRAS APLICACIONES" << endl<<endl;
			} else {
				cout << "LA CAPACIDAD DE MEMORIA RAM CAUSA PROBLEMAS EN EJECUTAR APPS." << endl;
				cout << "UNA DE LAS RECOMENDACIONES ES TENER AL MENOS 1GB DE RAM PARA PUEDA TRABAJAR CON LAS APLICACIONES EN EL CUAL NO SE TRABEN AL SER EJECUTADAS" << endl<<endl;
			}
			break;
		case 3:			
			if (res[i]>=5) {
				cout << "LA LIMPIEZA DE ARCHIVOS INNECESARIOS CAUSA MAL FUNCIONAMIENTO EN SU PC." << endl;
				cout << "EXCELENTE USTED NO TIENE PROBLEMAS DE SUS ARCHIVOS POR HACE LO CORRECTO EN REVISAS MAS DE 5 VECES AL MES PARA NO TENER PROBLEMAS EN UN FUTURO" << endl<<endl;
			} else {
				cout << "LA LIMPIEZA DE ARCHIVOS INNECESARIOS NO CAUSA NINGUN ERROR EN SU PC." << endl;
				cout << "LAS RECOMENDACIONES ES QUE AL MENOS 5 VECES ALA SEMANA HAGA LIMPIEZA DE ARCHIVOS INNECESARIOS (BORRAR) LO QUE YA NO SIRVA" << endl<<endl;
			}
			break;
		}
 }
