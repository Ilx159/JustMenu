
#include <cstddef>
#include <stdio.h>
#include "justmenu.h"

#define  MAX_MENUS 16

typedef struct{

    char**items;
    unsigned int item_count;
    char* formatted;
    
} menu;

menu* menus[MAX_MENUS];
unsigned int menu_count = 0;



void add_item(char *item);
void add_list(unsigned char menu_id,unsigned char array_size, char **item);
void name_del_item(char *item);
void num_del_item(unsigned char item);
void create_menu(unsigned char width);
char * print_menu(unsigned char i);


void add_list(unsigned char menu_id,unsigned char size, char **item){
    if(menu_id < 0 || menu_id >= MAX_MENUS)
        printf("ERRO: menu nao existe!\n");
    
}

void create_menu(unsigned char width){


    sprintf(menus[0] ,"+");

    for(unsigned char i = 0; i < width; sprintf(menus[0],"-"), i++);
    
    sprintf(menus[0],"+\n");

    for(char i = 0; i < array_size; i++){
        sprintf(menus[0],"| %u. %-10s|\n", i + 1, items[i][0]);
    }

    sprintf(menus[0],"+");

    for(unsigned char i = 0; i < width; sprintf(menus[0],"-"), i++);

    sprintf(menus[0],"+\n");


}




char * print_menu(unsigned char i){

    printf("%s", menus[i]);

    return menus[0];
}
