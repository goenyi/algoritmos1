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
    int carnet;
    string nombre;
    int algebralineal, algoritmos, contabilidad, precalculo , matematicadiscreta; 
    int promedio;
    
    system("cls");
    pre(30,8); printf("carnet");
    pre(20,11); printf("nombre..........");
    pre(20,12); printf("algebra lineal..........");
    pre(20,13); printf("algoritmos...........");
    pre(20,14); printf("contabilidad........");
    pre(20,15); printf("precalculo...");
    pre(20,16); printf("matematica discreta...");
    pre(20,17); printf("promedio...");
    system("pause");
    pre(40,8); cin>>carnet;
    pre(40,11); cin>>nombre;
	pre(40,12); cin>>algebralineal;    
    pre(40,13); cin>>algoritmos;
    pre(40,14); cin>>contabilidad;
    pre(40,15); cin>>precalculo;
    pre(40,16); cin>>matematicadiscreta;
	 
	//Calculos de valores
	promedio=algebralineal+algoritmos+contabilidad+precalculo+matematicadiscreta/5;
	
pre(40,18); cout<<promedio;
	 
 
    system("pause");    

}
