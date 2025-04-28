#include <stdio.h>
#include "justmenu.h"

int main(){

    char *str[] = {
        "a1",
        "a2",
        "a3"
    };

	add_list(3, str);
    create_menu(16);
    print_menu(0);

    return 0;
}
