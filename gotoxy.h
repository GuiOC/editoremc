#include <windows.h>
#include <conio.h>
int lin = 0, col = 0;
int tecla;

void gotoxy(int lin, int col)
{
    COORD coord = {col, lin};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int capturaTecla()
{
    do
    {
        tecla = getch();

        if (tecla == 224)
            tecla = getch();
    } while (tecla != 27 && tecla != 32 && tecla != 72 &&
             tecla != 80 && tecla != 77 && tecla != 75 &&
             tecla != 8);

    if (tecla == 27)
        exit(0);

    return tecla;
}
void manipulateWindow()
{
    switch(capturaTecla())
    {
        case 72:           // Cima
            gotoxy(lin--, col);
            if (lin <= 0)
            {
                lin = 0;
                gotoxy(0, col);
            }
        break;
        case 80:        // baixo
            gotoxy(lin++, col);
            if (lin >= 24)
            {
                lin = 24;
                gotoxy(24, col);
            }
        break;
        case 77:
            gotoxy(lin, col++);
            if (col >= 79)
            {
                col = 79;
                gotoxy(lin, 79);
            }

        break;
        case 75:
            gotoxy(lin, col--);
            if (col <= 0)
            {
                col = 0;
                gotoxy(lin, 0);
            }
        break;
        case 32:
            if (col <= 80 && lin <=25)
            {
                printf("*");
                if (col == 0)
                    gotoxy(lin, 0);
                else
                    gotoxy(lin, col);
            }
        break;
        case 8: // apagar

            printf(" ");
            if (col == 0)
                gotoxy(lin, 0);
            else
                gotoxy(lin, col);
        break;
        default:
            tecla = 0;
        break;
    }
}

