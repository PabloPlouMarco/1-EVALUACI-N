#include<iostream>
#include<string>
using namespace std;

int main(){
    int num1;
    int i,j;
    int n_semana;
    char dias_semana[7][10];
    char nombre_dia[10];
    int respuesta;
    char salir;
    cout<<"\nVamos a introducir los dias de la semana";
    for(i=0;i<=6;i++){
          cout<<"\ndia "<<i+1<<": ";
          cin>>nombre_dia;     
          for(j=0;j<strlen(nombre_dia)+1;j++){
               dias_semana[i][j]=nombre_dia[j];
          }                 
    }
    //Mostramos la matriz
    cout<<"\n";
    for(i=0;i<=6;i++){
      for(j=0;dias_semana[i][j]!='\0';j++){
        cout<<dias_semana[i][j];
      }
      cout<<"\n";
    }
    cout<<"\n Introduce un numero: ";
    cin>>n_semana;
    for(j=0;dias_semana[n_semana-1][j]!='\0';j++){
        cout<<dias_semana[n_semana-1][j];
      }
    
    //cout<<semana( num1);
    //cout<< " introduzca cualquier año bisiesto para elecciones generales en benezuela2 ";
    cin>> salir;
    return 0;
}
