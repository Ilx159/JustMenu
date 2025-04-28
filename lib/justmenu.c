
#include <stdio.h>
#include "justmenu.h"

char*** items;
char** menus;
unsigned char array_size;

void add_item(char *item);
void add_list(unsigned char array_size, char **item);
void name_del_item(char *item);
void num_del_item(unsigned char item);
void create_menu(unsigned char width);
char * print_menu(unsigned char i);


void add_list(unsigned char size, char **item){
    array_size = size;
    for(int i = 0; array_size > i; i++){
        sprintf(items[0][i],  item[i]);
    }
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
