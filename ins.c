#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "ffile.h"

void instructions()
{   char ch;
    FILE* ins;
    system("cls");
    ins= fopen("ins.txt","r");
    header();
    printf("\n");
    printf("\n\n\t\t\t\t\t            Instructions    \n");
    printf("\t\t               +++++++++++++++++++++++++++++++++++++++++++++++++++++++++         \n\n");
    while((ch=getc(ins))!=EOF)
    {
        printf("%c",ch);
    }
    printf("\n\nGo To The Lessons\n");
    system("pause");
    lessonmenu();
}
