#include <stdio.h>
#include "justmenu.h"

int main(){

    char *str[] = {
        "a112345678910",
        "a2",
        "a3",
        "a112345678910",
        "a2",
        "a3",
        "a112345678910",
        "a2",
        "a3",
        "a112345678910",
        "a2",
        "a3"
    };

	add_list(1,12,str);
    create_menu(1,20);
    print_menu(1);

    return 0;
}
