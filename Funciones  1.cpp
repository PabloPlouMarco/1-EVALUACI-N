#include<iostream>

int multiplica(int num1, int num2, int num3, int num4){
    int respuesta;
    respuesta=num1*num2*num3*num4;
    return(respuesta);
}

int main(){
    int multiplicacion;
	int num1,num2,num3,num4;
	char salir;
	
	std::cout<<"Introduce un numero: ";
	std::cin>>num1;
	std::cout<<"Introduce otro numero: ";
	std::cin>>num2;
	std::cout<<"Introduce otro numero: ";
	std::cin>>num3;
	std::cout<<"Introduce otro numero: ";
	std::cin>>num4;

	std::cout<<"El resultado de la multiplicacion es: "<<multiplica(num1,num2,num3,num4);
	std::cout<<"\nToca cualquier tecla para salir";
	std::cin>>salir;
	return 0;
}
