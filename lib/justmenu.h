#ifndef JUSTMENU_H
#define JUSTMENU_H

typedef unsigned char BOOL;

void add_item(char *item);
BOOL add_list(unsigned char menu_id,unsigned char array_size, char **list);
void name_del_item(char *item);
void num_del_item(unsigned char item);
void create_menu(char menu_id, unsigned char width);
char * print_menu(unsigned char i);


#endif