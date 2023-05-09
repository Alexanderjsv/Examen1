#include <stdio.h>
#include <string.h>
char login(char usuario[20],int contrase){
    int i,i2,i3,cont,contraU,contra1,contra2;
    contraU=1234;
    contra1=567;
    contra2=890;
    char usu1[20]="Alex";
    char usu2[20]="Luis";
    char usu3[20]="Sarah";
    i=strcmp(usu1,usuario);
    i2=strcmp(usu2,usuario);
    i3=strcmp(usu3,usuario);
    if(i==0&&contraU==contrase){
        return 1;
    }else
    {if(i2==0&&contra1==contrase){
        return 1;
    }else
    {
    if(i3==0&&contra2==contrase){
        return 1;
    }else
    {
        return 0;
    }
    }    
    }
    
}

int menu(int opcion){
    do{
    switch(opcion){
        case 1:
        printf("Ha saleccionado operacion transporte\n");
        return 1;
        break;
        case 2:
        printf("Ha saleccionado Interactuar con la red social\n");
        return 2;
        break;
        case 3:
        printf("Ha saleccionado salir\n");
        return 3;
        break;   
    }
        if (opcion<1&&opcion>3){
            printf("Hubo un error al elegir\nVuelva a intentar");
        }
    }while(opcion<1&&opcion>3);
   
}
void operaciontransporte(float ruta,float distancia){
    printf("Escoga el tipo de ruta a tomar\n1.Urbana\n2.Interurbana\n3.Internacional\n");
    scanf("%d",&ruta);
    printf("Seleccionar distancia en km enteros\n");
    scanf("%d",&distancia);
    
    
}
void calcularprecioruta(float ruta,float distancia){
    float precioruta;
    precioruta=ruta*distancia;

}

int main(){
    int i,contra,lim,op,usua,rutaA,distanciaA;
    char nomU[20];
    lim=0;
    do{
        printf("Ingrese nombre\n");
        scanf("%s",&nomU);
        printf("Ingrese su contraseña\n");
        scanf("%d",&contra);
    if(login(nomU,contra)==0){
        printf("Hubo un error en el usuario o contraseña\n");
        lim=lim+1;
        printf("Va %d intentos de 3\n",lim);
    }
    }while((login(nomU,contra)!=1)||(lim==3));
   
    
    if(lim==3){
        printf("Demasiados intententos se cerro el programa\n");
    }else{
        printf("Seleccione una opcion\n1. Operacion de transporte\n2.Interactuar en la red social\n3.salir\n");
        scanf("%d",&op);
        menu(op);
        switch(op){
            case 1:
            operaciontransporte(rutaA,distanciaA);

            case 2:
            case 3:
        }


    }


    
    return 0;
}