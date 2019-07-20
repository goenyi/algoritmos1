#include<iostream>
#include <windows.h>


using namespace std;

//funcion para posición en pantalla
void pre(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
     SetConsoleCursorPosition(hcon,dwPos);  
 }

int main() {
    // Definición de variables
    int codigo;
    string nombre;
    float monto, impuesto, tpagar;
    
    system("cls");
    pre(30,8); printf("INGRESO DE DATOS");
    pre(20,11); printf("Codigo..........");
    pre(20,12); printf("Nombre..........");
    pre(20,13); printf("Monto...........");
    pre(20,14); printf("Impuesto........");
    pre(20,15); printf("Total a pagar...");
    system("pause");
    pre(40,11); cin>>codigo;
    pre(40,12); cin>>nombre;    
    pre(40,13); cin>>monto;
	 
	//Calculos de valores
	impuesto=monto*0.12;
	tpagar=monto+impuesto;
	
    pre(40,14); cout<<impuesto;    
    pre(40,15); cout<<tpagar;	
	pre(40,17);    
 
    system("pause");    

}
