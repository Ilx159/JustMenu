#include <stdio.h>
#include "justmenu.h"

int main(){

    char *str[] = {
        "a1",
        "a2",
        "a3"
    };

	create_menu(str, 3, 24);

    return 0;
}
