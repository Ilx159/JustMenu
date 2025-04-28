#ifndef JUSTMENU_H
#define JUSTMENU_H


void add_item(char *item);
void add_list(unsigned char array_size, char **item);
void name_del_item(char *item);
void num_del_item(unsigned char item);
void create_menu(unsigned char width);
char * print_menu(unsigned char i);



#endif