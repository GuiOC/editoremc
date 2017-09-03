#include <stdio.h>
#include <stdlib.h>
#include "gotoxy.h"
#include "mostraTela.h"
#include <string.h>

int main(void)
{
    setup(1);
    getchar();
    system("cls");
    setup(2);

    while(a == 0)
    {
        select_menu();
    }
    system(string_color);
    system("cls");
    while(1)
    {
        manipulateWindow();
    }
    return 0;
}
