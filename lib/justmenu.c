
#include <stdio.h>
#include "justmenu.h"

char*** items;
char*** menus;

void add_item();
void add_list();
void num_del_item(char item[]);
void name_del_item(unsigned char item);


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
