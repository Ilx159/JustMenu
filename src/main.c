#include <stdio.h>
#include "justmenu.h"

int main(){

    char *str[] = {
        "a112345678910",
        "a2truj",
        "a3",
        "a112345678910",
        "a2",
        "a3ghg",
        "a112345678910tuyjgfb",
        "a2",
        "a3",
        "a112345678910",
        "a2",
        "a3"
    };

	  add_list(1,12,str);
    create_menu(1,15);
    print_menu(1);

    return 0;
}
