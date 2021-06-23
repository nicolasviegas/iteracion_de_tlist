#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>
#include <commons/string.h>
#include <commons/collections/list.h>



t_list tripulantes_ready;

typedef struct t_tripulante {
    uint32_t id_tripulante;
}t_tripulante;






// PROBAR HACER UN LIST GET Y ASIGNARSELO A UN TRIP AUX PARA PASARLE LA FUNCION DE ABAJO Y VER SI ANDA

int encontrar_index_en_lista(t_list *lista,uint32_t id_tripulante_buscado){
    //printf("%s\n", "primer linea de la func");
    int i = 0;
    int index;
//    index = malloc(sizeof(int));
    printf("%s\n", "entro a la func");
    t_tripulante* unTripAux;
    unTripAux = malloc(sizeof(t_tripulante));
    //unTripAux = lista->head;//->data;
    while(lista != NULL){
        printf("%s\n", "estoy en el while pa");
       unTripAux = lista->head->data;
        if(unTripAux -> id_tripulante == id_tripulante_buscado){
         printf("%s\n", "entre al if");
         index = i;
         break;
        }
        lista ->head = lista->head->next;
       // unTripAux = lista->head->next;
        i++;
   }
    return index;
  }



int main()
{
    printf("%s\n", "algo hace");
    t_list* tripulantes_ready = list_create();
    tripulantes_ready = malloc(sizeof(t_list));
    t_tripulante *unTrip1;
    unTrip1 = malloc(sizeof(t_tripulante));
    unTrip1->id_tripulante = 1;
    t_tripulante *unTrip2;
    unTrip2 = malloc(sizeof(t_tripulante));
    unTrip2->id_tripulante = 786;
    t_tripulante *unTrip3;
    unTrip3 = malloc(sizeof(t_tripulante));
    unTrip3->id_tripulante = 3;
    t_tripulante *unTrip4;
    unTrip4 = malloc(sizeof(t_tripulante));
    unTrip4->id_tripulante = 69;
    list_add(tripulantes_ready,unTrip1);
    list_add(tripulantes_ready,unTrip2);
    list_add(tripulantes_ready,unTrip3);
    list_add(tripulantes_ready,unTrip4);
   // list_remove(tripulantes_ready,0);
    //t_tripulante *tripAux;
    //tripAux = malloc(sizeof(t_tripulante));
    //tripAux = list_get(tripulantes_ready,1);
    //printf("%d\n", tripAux->id_tripulante);
    printf("%s\n", "voy buscae el index");
    int index = encontrar_index_en_lista(tripulantes_ready,9);
    printf("%d\n", index);
//    //t_tripulante *tripAux = list_get(tripulantes_ready,encontrar_index_en_lista(tripulantes_ready,2));
    //t_tripulante *tripAux = list_get(tripulantes_ready,index);
    //printf("%d", tripAux->id_tripulante);

    return 0 ;
}
