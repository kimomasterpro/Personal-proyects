#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int chid;


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

    printf("NOMBRE:");
    scanf("%s", productos[totalproductos].nombre );

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


            }

    }     if(encontrado==0){

                printf("El ID del producto no coincide con ningun otro intentalo de nuevo.");

            }
}

void posicion_matricial(){

    int chid;


    printf("Introduce el ID del producto:");
    scanf("%d", &chid);


    int i;
    int encontrado=0;


    for (i=0;i<totalproductos;i++){

            if(chid == productos[i].id){

            encontrado ++;

            printf("\n\nPosicion del producto: %d\n", i);
            printf ("ID: %d\n", productos[i].id);
            printf("NOMBRE: %s\n", productos[i].nombre);
            printf("PRECIO: %f\n", productos[i].precio);
            printf("STOCK: %d\n", productos[i].stock);

                break;

            }

    }   if (encontrado==0){

                printf("El ID del producto no coincide con ningun otro intentalo de nuevo.");

            }
}

void venderproducto (){

    int venta;
    int i;
    int chid;
    int encontrado=0;


    printf("Intropduce el id del producto:");
    scanf("%i", &chid);

    for (i=0;i<totalproductos;i++){

            if(chid == productos[i].id){

                    encontrado ++;

                    printf("¿Cuantos %s quieres vender?:", productos[i].nombre);
                    scanf("%i",&venta);

                        if(venta<=productos[i].stock){

                            productos[i].stock = productos[i].stock - venta;

                            printf("%s restantes: %d", productos[i]. nombre, productos[i].stock);

                    } else if  (venta>productos[i].stock) {

                        printf("STOCK INSUFICIENTE, solo tenemos %d", productos[i].stock);

                    }

            }
        }   if (encontrado==0){

                printf("El ID del producto no coincide con ningun otro intentalo de nuevo.");


        }

    }

void editid(){


    int newid;
    char sino;
    int i;

     printf("\nEDITAR ID\n");
                    printf("\nEl id actual es %d\n", productos[i].id);
                    printf("Introduce el nuevo ID:");
                    scanf("%i", &newid);
                    printf("\n¿Estas seguro de que quieres cambiar el antiguo ID(%d) por %d?, ", productos[i].id, newid);
                    printf("\nescribe si o no para continuar...");
                    scanf(" %c", &sino);
                        if(sino== 's'||sino== 'S'){

                            productos[i].id = newid;
                            printf("¡Cambio realizado con exito!");

                        }
}

void editname(){

    char sino;
    char newname[50];
    int i;

                       printf("\nEDITAR NOMBRE\n");
                    printf("El nombre actual es %s\n", productos[i].nombre);
                    printf("Introduce el nuevo nombre:");
                    scanf("%s", newname);
                    printf("¿Estas seguro de querer cambiar el nombre(%s) por %s?, ", productos[i].nombre, newname);
                    printf("\nescribe si o no para continuar...");
                    scanf(" %c", &sino);
                        if(sino== 's'||sino== 'S'){

                            strcpy(productos[i].nombre , newname);
                            printf("¡Cambio realizado con exito!");

                        }
}

void editprice(){

    char sino;
    float newprice;
    int i;


     printf("\nEDITAR PRECIO\n");
                    printf("El precio actual es %f\n", productos[i].precio);
                    printf("Introduce el nuevo precio:");
                    scanf("%f", &newprice);
                    printf("¿Estas seguro de querer cambiar el precio(%f) por %f?, ", productos[i].precio, newprice);
                    printf("\nescribe si o no para continuar...");
                    scanf(" %c", &sino);
                        if(sino== 's'||sino== 'S'){

                            productos[i].precio = newprice;
                            printf("¡Cambio realizado con exito!");

                        }
}
void editstock(){

    char sino;
    int newstock;
    int i;

     printf("\nEDITAR STOCK\n");
                    printf("El stock actual es %d\n", productos[i].stock);
                    printf("Introduce el nuevo stock:");
                    scanf("%i", &newstock);
                    printf("¿Estas seguro de querer cambiar el stock(%i) por %i?, ", productos[i].stock, newstock);
                    printf("\nescribe si o no para continuar...");
                    scanf(" %c", &sino);
                        if(sino== 's'||sino== 'S'){

                            productos[i].stock = newstock;
                            printf("¡Cambio realizado con exito!");

                        }
}

void eliminarproducto(){



}

void editarproducto (){


    int edit;
    int chid;
    int i;
    int encontrado=0;


    printf("Introduce el ID del producto que deseas editar:");
    scanf("%i", &chid);



     for (i=0;i<totalproductos;i++){

            if(chid == productos[i].id){


                     encontrado ++;

                     if(encontrado==0){

                        printf("¡EL id del producto no fue encontrado intenta de nuevo!");
                     }

                     break;


            printf("\n\nDatos del producto:\n");

            printf("\n\nPosicion del producto: %d\n", i);
            printf ("ID: %d\n", productos[i].id);
            printf("NOMBRE: %s\n", productos[i].nombre);
            printf("PRECIO: %f\n", productos[i].precio);
            printf("STOCK: %d\n", productos[i].stock);


            printf("\n\n---¿Que deseas editar?:\n\n----");
            printf("    1.ID\n");
            printf("    2.NOMBRE\n");
            printf("    3.PRECIO\n");
            printf("    4.STOCK\n");
            printf("    5.SALIR\n");
            printf("--------------------------------\n\n");

            printf("OPCION:");
            scanf("%i", &edit);


            switch(edit){


                case 1:

                    editid(i);
                    break;

                case 2:

                    editname(i);
                    break;

                case 3:

                    editprice(i);
                    break;

                case 4:

                    editstock(i);
                    break;

                case 5:

                    printf("HASTA LUEGO!");
                    break;

                default:
                    printf("OPCION INVALIDA");

                        }

            }
        }
     }

void archivodeinventario(){

    FILE *archivo;

    archivo = fopen("inventario.txt", "w");

    fprintf(archivo, "hola aldo\n");
    fprintf(archivo, "tu archivo funciona\n");

    fclose(archivo);

    printf("archivo creado correctamente");


}


void menu (){

    int opcion;

    do {

        printf("\n---------MENU---------\n");
        printf("1.Mostrar producto\n");
        printf("2.Agregar producto\n");
        printf("3.Buscar producto por ID\n");
        printf("4.Buscar posicion matricial\n");
        printf("5.Vender producto\n");
        printf("6.Editar producto\n");
        printf("7.Salir..\n");
        printf("8.Archivo de inventario\n");
        printf("----------------------\n");
        printf("Total de productos: %d\n", totalproductos);
        printf("----------------------\n");

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
            posicion_matricial();
            break;

        case 5:
            venderproducto();
            break;

        case 6:
            editarproducto();
            break;

        case 7:
            printf("HASTA LUEGO!");
            break;

        case 8:
            archivodeinventario();
            break;

        default:
            printf("OPCION INVALIDA");

        }

    } while(opcion !=8);

}

int main()
{

    menu();


    return 0;
}
