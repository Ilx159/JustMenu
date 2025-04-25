
#include <stdio.h>
#include "justmenu.h"

char*** items;
char*** menus;

void add_item(char *item);
void add_list(char **item);
void name_del_item(char *item);
void num_del_item(unsigned char item);
void create_menu();
char * print_menu();



void create_menu(){


    sprintf( ,"+");

    for(unsigned char i = 0; i < width; sprintf(menu,"-"), i++);
        sprintf(menu,"+\n");

    for(char i = 0; i < array_size; i++){
        sprintf(menu,"| %u. %-10s|\n", i + 1, items[i]);
    }

    sprintf(menu,"+");

    for(unsigned char i = 0; i < width; sprintf(menu,"-"), i++);

    sprintf(menu,"+\n");


}




char * print_menu(char *items[], unsigned char array_size, unsigned char width){

    char * menu;
    width -= 2;

    sprintf(menu,"+");

    for(unsigned char i = 0; i < width; sprintf(menu,"-"), i++);
        sprintf(menu,"+\n");

    for(char i = 0; i < array_size; i++){
        sprintf(menu,"| %u. %-10s|\n", i + 1, items[i]);
    }

    sprintf(menu,"+");

    for(unsigned char i = 0; i < width; sprintf(menu,"-"), i++);

    sprintf(menu,"+\n");


    printf("%s", menu);
    return menu;
}
