#include<iostream>

float cambio(float valor_euros){
     float respuesta;
     respuesta=valor_euros*1.14;
     return(respuesta);
}

int main(){
    float valor_euros;
    char salir;
    
    std::cout<<"Dame un valor de euros: ";
    std::cin>>valor_euros;
    
   	std::cout<<"El resultado del cambio a dolares es: "<<cambio(valor_euros);
	std::cout<<"\nToca cualquier tecla para salir";
	std::cin>>salir;
	return 0;
	
 }
