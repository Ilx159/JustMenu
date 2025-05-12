#include <stdio.h>
#include <stdlib.h>
#include "justmenu.h"
#include <string.h>

#define MAX_MENUS 16
#define true 1
#define false 0

typedef struct{

    char**items;
    unsigned int item_count;
    char* formatted;
    
} menu;

menu* menus[MAX_MENUS];
unsigned int menu_count = 0;



void add_item(char *item);
BOOL add_list(unsigned char menu_id,unsigned char array_size, char **list);
void name_del_item(char *item);
void num_del_item(unsigned char item);
void create_menu(char menu_id, unsigned char width);
char * print_menu(unsigned char i);


BOOL add_list(unsigned char menu_id,unsigned char array_size, char **item){
    if(menu_id < 0 || menu_id >= MAX_MENUS){
        printf("ERRO: menu nao existe!\n");
    }
    else if (menus[menu_id] == NULL)
    {
        menus[menu_id] = malloc(sizeof(menu));

        if(menus[menu_id]==NULL){
            printf("Alocação de memoria falhou");
            return false;
        }

        menus[menu_id]->items = malloc(sizeof(char*)*array_size);
        if(menus[menu_id]->items==NULL){
            printf("Alocação de memoria falhou");
            free(menus[menu_id]->items);
            return false;
        }

        for(unsigned char i = 0; i < array_size; i++){
            
            menus[menu_id]->items[i] = malloc(strlen(item[i])+1);
            if(menus[menu_id]->items[i]==NULL){
                printf("Alocação de memoria falhou");
                for(unsigned char j = 0; j < i; j++, free(menus[menu_id]->items[i]));
                free(menus[menu_id]->items);
                free(menus[menu_id]);
            }
            strcpy(menus[menu_id]->items[i], item[i]);
        }

        menus[menu_id]->item_count = array_size;


        

        return true;
    }
    else
        printf("ERRO: menu já esta sendo utilizado!\n");
    return false;
}



void create_menu(char menu_id, unsigned char width){

    int memory_size = (width + 3)*2+(menus[menu_id]->item_count * (width+width/2)) + 1; //alocação de memória para o menu formatado
    menus[menu_id]->formatted = malloc(memory_size);

    char* buffer = menus[menu_id]->formatted;//criação de um buffer

    //inicio na tabela
    buffer+=sprintf(buffer ,"+");
    for(unsigned char i = 0; i < width-2; buffer+=sprintf(buffer,"-"), i++);
    buffer+=sprintf(buffer,"+\n");

    //itens
    for(char i = 0; i < menus[menu_id]->item_count; i++){
        buffer+=snprintf(buffer,width,"| %u. %-*.*s", i + 1,width - 10,width - 10, menus[menu_id]->items[i]);/*arrumar este número para que verifique o tamanho do indice*/
        //for(char j = 0; j < width-8; j++,buffer+=sprintf(buffer," "));
        buffer+=sprintf(buffer,"|\n");
    }
    buffer+=sprintf(buffer,"+");

    for(unsigned char i = 0; i < width-2; buffer+=sprintf(buffer,"-"), i++);

    buffer+=sprintf(buffer,"+\n");
}

char * print_menu(unsigned char i){

    printf("%s", menus[i]->formatted);

    return menus[i]->formatted;
}
