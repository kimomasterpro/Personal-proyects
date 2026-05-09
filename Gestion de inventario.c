#include <stdio.h>
#include <stdlib.h>


struct producto{

    int id;
    char nombre[50];
    float precio;
    int stock;
};

struct producto productos[100];

int totalproductos=0;

void agregarproducto(){


    printf("\nIngresa los datos del producto a continuacion...\n");

    printf("ID:");
    scanf("%i", &productos[totalproductos].id);

    printf("Nombre:");
    scanf("%s",&productos[totalproductos].nombre );

    printf("PRECIO:");
    scanf("%f", &productos[totalproductos].precio);

    printf("STOCK:");
    scanf("%d", &productos[totalproductos].stock);



    totalproductos++;
}
void mostrarproducto (){

    int i;

    for(i=0;i<totalproductos;i++){


        printf("\nPRODUCTO %d\n", i+1);
        printf("ID: %d\n", productos[i].id);
        printf("NOMBRE: %s\n", productos[i].nombre);
        printf("PRECIO: %f\n", productos[i].precio);
        printf("STOCK: %d\n", productos[i].stock);


    }
}

void buscarproductoid(){

    int chid;


    printf("Introduce el ID del producto:");
    scanf("%d", &chid);



    int i;

    int encontrado=0;



    for (i=0;i<totalproductos;i++){

            if(chid == productos[i].id){

            encontrado ++;

            printf ("\nID: %d\n", productos[i].id);
            printf("NOMBRE: %s\n", productos[i].nombre);
            printf("PRECIO: %f\n", productos[i].precio);
            printf("STOCK: %d\n", productos[i].stock);


            } else if (encontrado==0){

                printf("El ID del producto no coincide con ningun otro intentalo de nuevo.");

            }
    }
}




void menu (){

    int opcion;

    do {

        printf("\n-------MENU-------\n");
        printf("1.Mostrar producto\n");
        printf("2.Agregar producto\n");
        printf("3.Buscar producto por ID\n");
        printf("Total de productos: %d\n", totalproductos);
        printf("4.Salir           \n");
        printf("------------------\n");

        printf("OPCION: ");
        scanf("%i", &opcion);


        switch(opcion){


        case 1:
            mostrarproducto();
            break;

        case 2:
            agregarproducto();
            break;

        case 3:
            buscarproductoid();
            break;

        case 4:
            printf("HASTA LUEGO!");
            break;


        default:
            printf("OPCION INVALIDA");

        }

    } while(opcion !=4);



}




int main()
{

    menu();


    return 0;
}
