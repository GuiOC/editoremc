
void mostraTela(int opcTela, int qtLinha, char texto[77])
{
    int i,j,qtLetras, posicao;

    switch(opcTela)
    {
    case 1:
        printf("%c", 201);
        for(i = 0; i < 77; i++)
            printf("%c", 205);
        printf("%c", 187);
        break;
    case 2:
        for(i = 0; i < qtLinha; i++)
        {
            printf("\n%c", 186);
            for(j = 0; j < 77; j++)
                printf("%c", 32);
            printf("%c", 186);
        }
        break;
    case 3:
        qtLetras = strlen(texto);
        posicao = (77 - qtLetras)/2;
        printf("\n%c", 186);
        for (i = 0; i < posicao; i++)
            printf("%c", 32);
        printf("%s", texto);
        if((posicao * 2 + qtLetras) != 77)
            posicao++;
        for (i = 0; i < posicao; i++)
            printf("%c", 32);
        printf("%c", 186);
        break;
    case 4:
        printf("\n%c", 200);
        for(i = 0; i < 77; i++)
            printf("%c", 205);
        printf("%c\n", 188);
        break;
    }
}
void setup(int opc)
{
    if (opc == 1)
    {
       system("cls");
       system("color 78");
       printf("\n");
       mostraTela(1,0,0);
       mostraTela(2,7,0);
       mostraTela(3,0,"MaxxPropagandas - Software gerador de outdoors V1.0");
       mostraTela(2,2,0);
       mostraTela(3,0,"Desenvolvido por Guilherme Freitas");
       mostraTela(2,7,0);
       mostraTela(3,0,"Tecle <enter> Para configurar.");
       mostraTela(2,2,0);
       mostraTela(4,0,0);
    }
    if (opc == 2)
    {
       system("cls");
       printf("\n");
       mostraTela(1,0,0);
       mostraTela(2,2,0);
       mostraTela(3,0,"Selecione a Cor de fundo e texto <Espaco>");
       mostraTela(2,4,0);
       mostraTela(3,0,"[   ] Black  ");
       mostraTela(3,0,"[   ] Blue   ");
       mostraTela(3,0,"[   ] Green  ");
       mostraTela(3,0,"[   ] Aqua   ");
       mostraTela(3,0,"[   ] Red    ");
       mostraTela(3,0,"[   ] Purple ");
       mostraTela(3,0,"[   ] Yellow ");
       mostraTela(3,0,"[   ] White  ");
       mostraTela(2,2,0);
       mostraTela(4,0,0);
    }
    if (opc == 3)
    {
       printf("\n");
       mostraTela(1,0,0);
       mostraTela(2,2,0);
       mostraTela(3,0,"Selecione a Cor do texto <Espaco>");
       mostraTela(2,4,0);
       mostraTela(3,0,"[    ] Gray    ");
       mostraTela(3,0,"[    ] L.Blue  ");
       mostraTela(3,0,"[    ] L.Green ");
       mostraTela(3,0,"[    ] L.Aqua  ");
       mostraTela(3,0,"[    ] L.Red   ");
       mostraTela(3,0,"[    ] L.Purple");
       mostraTela(3,0,"[    ] L.Yellow");
       mostraTela(3,0,"[    ] B.White ");
       mostraTela(2,2,0);
       mostraTela(4,0,0);
    }
}
int counter = 0;
char string_color[50];
int i = 0;
int a  = 0;
void select_menu()
{
    if (capturaTecla() == 80)
    {
        if (counter < 9)
          counter++;
        else
           counter = 8;

        switch(counter)
        {
            case 1:
                gotoxy(9,35);
                printf("X");
            break;
            case 2:
                gotoxy(9,35);
                printf(" ");
                gotoxy(10,35);
                printf("X");
            break;
            case 3:
                gotoxy(10,35);
                printf(" ");
                gotoxy(11,35);
                printf("X");
            break;
            case 4:
                gotoxy(11,35);
                printf(" ");
                gotoxy(12,35);
                printf("X");
            break;
            case 5:
                gotoxy(12,35);
                printf(" ");
                gotoxy(13,35);
                printf("X");
            break;
            case 6:
                gotoxy(13,35);
                printf(" ");
                gotoxy(14,35);
                printf("X");
            break;
            case 7:
                gotoxy(14,35);
                printf(" ");
                gotoxy(15,35);
                printf("X");
            break;
            case 8:
                gotoxy(15,35);
                printf(" ");
                gotoxy(16,35);
                printf("X");
            break;
        }
    }

    if (capturaTecla() == 72)
    {
        i++;
        if (counter > 0)
            counter--;
        else
            counter = 0;

        switch(counter)
        {
            case 7:
                gotoxy(16,35);
                printf(" ");
                gotoxy(15,35);
                printf("X");
            break;
            case 6:
                gotoxy(15,35);
                printf(" ");
                gotoxy(14,35);
                printf("X");
            break;
            case 5:
                gotoxy(14,35);
                printf(" ");
                gotoxy(13,35);
                printf("X");
            break;
            case 4:
                gotoxy(13,35);
                printf(" ");
                gotoxy(12,35);
                printf("X");
            break;
            case 3:
                gotoxy(12,35);
                printf(" ");
                gotoxy(11,35);
                printf("X");
            break;
            case 2:
                gotoxy(11,35);
                printf(" ");
                gotoxy(10,35);
                printf("X");
            break;
            case 1:
                gotoxy(10,35);
                printf(" ");
                gotoxy(9,35);
                printf("X");
            break;
        }
    }
    if (capturaTecla() == 32)
    {
        i++;

        if (i == 1)
        {

            switch (counter)
            {
                case 1:
                    strcpy(string_color, "color 0");
                    break;

                case 2:
                    strcpy(string_color, "color 1");
                    break;
                case 3:
                    strcpy(string_color, "color 2");
                    break;
                case 4:
                    strcpy(string_color, "color 3");
                    break;
                case 5:
                    strcpy(string_color, "color 4");
                    break;
                case 6:
                    strcpy(string_color, "color 5");
                    break;
                case 7:
                    strcpy(string_color, "color 6");
                    break;
                case 8:
                    strcpy(string_color, "color 7");
                    break;
            }
            counter = 0;
            gotoxy(9,35);
            system("cls");
            setup(3);
            select_menu();
        }
        else
        {
            switch(counter)
            {
                case 1:
                    strcat(string_color, "8");
                    break;
                case 2:
                    strcat(string_color, "9");
                    break;
                case 3:
                    strcat(string_color, "A");
                    break;
                case 4:
                    strcat(string_color, "B");
                    break;
                case 5:
                    strcat(string_color, "C");
                    break;
                case 6:
                    strcat(string_color, "D");
                    break;
                case 7:
                    strcat(string_color, "E");
                    break;
                case 8:
                    strcat(string_color, "F");
                    break;
            }
            a = 1;
        }
    }
}

