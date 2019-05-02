#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int vocales(char auxpalabra[]){
    int l=0;
    int nvocales=0;
    //printf("\nCuento vocales de %s", auxpalabra);

    while(auxpalabra[l]!='\0'){
       if(auxpalabra[l]=='a' || auxpalabra[l]=='e' ||  auxpalabra[l]=='i' ||  auxpalabra[l]=='o' ||  auxpalabra[l]=='u'){
          nvocales++;
       }
       l++;    
    }
    return nvocales;
}

int main(){
     char *lista[3];
     char *p_inter;
     int salir;
     int nveces;
     int longitudes[3];
     char auxpalabra[30];
     int cont;
     int l;
     char *pauxiliar;
     for(cont=0;cont<3;cont++){
         printf("\nDime una palabra %i: ",cont);
         scanf("%s",auxpalabra);  
         l=vocales(auxpalabra);
         lista[cont]=(char *) malloc(l*sizeof(char)); 
         strcpy(lista[cont],auxpalabra);
     }
     for(cont=0;cont<3;cont++){
         printf("\n%s\n",lista[cont]);
     }
     //Ordenamiento
     for(nveces=1;nveces<3;nveces++){
       for(cont=0;cont<2;cont++){
          if(vocales(lista[cont]) > vocales(lista[cont+1])){
            printf("\nComparo %s por %s",lista[cont],lista[cont+1]);
            p_inter= lista[cont];
            lista[cont]=lista[cont+1];
            lista[cont+1]=p_inter; 
            printf("\ncambiado %s por %s",lista[cont],lista[cont+1]);
          }
       }
     }
     //Mostrar la lista ordenada
     printf("\n\nLISTA ORDENADA:\n");
     for(cont=0;cont<3;cont++){
         printf("\n%s",lista[cont]);
     }
     //printf("\nYa he cambiado y ordenado las palabras\n ");
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
     
}
