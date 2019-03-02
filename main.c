#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "ffile.h"

void lessonmenu()
{
    int lesson,difficulty,ch;
    system("cls");
    header();
    printf("\t\t\t\t               +++++++++++++++++++++++++++++++++++++++++++++++++++++++++         ");
    printf("\n\n\t\t\t\t\t            Select Difficulty Level    \n\n");
    printf("\t\t\t\t\t\t         [1]  Beginner\n");
    printf("\t\t\t\t\t\t         [2]  Intermediate\n");
    printf("\t\t\t\t\t\t         [3]  Advanced\n\n\t\t\t\t\t\t     Enter your choice: ");
    scanf("%d",&difficulty);
    while( difficulty <= 0 || difficulty >= 4)
    {
        printf("t\t\t\t\t\t\tINVALID CHOICE! Please re-enter...\n\t\t\t\t\t\t     Enter your choice: ");
        scanf("%d",&difficulty);
    }

    printf("\n\t\t\t\t\t          Please select a lesson to start     \n\n");
    printf("\t\t\t\t\t\t         [1]  Lesson 1\n");
    printf("\t\t\t\t\t\t         [2]  Lesson 2\n");
    printf("\t\t\t\t\t\t         [3]  Lesson 3\n");
    printf("\t\t\t\t\t\t         [4]  Lesson 4\n");
    printf("\t\t\t\t\t\t         [5]  Lesson 5\n\n\t\t\t\t\t\t     Enter your choice: ");
    scanf("%d",&lesson);
    while( lesson <= 0 || lesson >= 6)
    {
        printf("t\t\t\t\t\t\tINVALID CHOICE! Please re-enter...\n\t\t\t\t\t\t     Enter your choice: ");
        scanf("%d",&lesson);
    }
    selection(difficulty,lesson);

    while(1)
    {
        printf("\n\t\t               +++++++++++++++++++++++++++++++++++++++++++++++++++++++++         \n\n");
        printf("\t\t\t\t\t        [1]  Redo The Lesson\n");
        printf("\t\t\t\t\t        [2]  Continue to Next lesson\n");
        printf("\t\t\t\t\t        [3]  Go Back To Main Menu\n");
        printf("\t\t\t\t\t        [4]  Exit\n\n\t\t\t\t\t\t     Enter your choice: ");
        scanf("%d",&ch);
        while(ch<=0 || ch>=5)
        {
        printf("t\t\t\t\t\t\tINVALID CHOICE! Please re-enter...\n\t\t\t\t\t\t     Enter your choice: ");
        scanf("%d",&ch);
        }

        switch(ch)
        {
            case 1:
                selection(difficulty,lesson);
                break;
            case 2:
                if(lesson==5&&difficulty==3)
                   {
                    printf("\n\n\t\t\t\t\tAll levels completed\n");
                    menu();
                   }
                else if(lesson==5)
                    selection(difficulty+1,1);
                else
                    selection(difficulty,lesson+1);
                break;
            case 3:
                system("cls");
                lessonmenu();
                break;
            case 4:
                exit(0);
                break;
        }
    }
}


void menu()
{
    int mchoice;
    char name[30];

    header();
    printf("\n\n\t\tEnter your name: ");
    scanf("%s",name);
    system("cls");
    header();
    printf("\n\n\t\t\t\t                        Welcome %s          \n ",name);
    printf("\t\t\t          +++++++++++++++++++++++++++++++++++++++++++++++++++++++++         ");
    printf("\n\n\t\t\t\t\t                  MENU    \n\n");
    printf("\t\t\t\t\t\t         [1]  Instructions\n");
    printf("\t\t\t\t\t\t         [2]  Lesson Menu\n");
    printf("\t\t\t\t\t\t         [3]  Exit\n\n\t\t\t\t\t\t     Enter your choice: ");
    scanf("%d",&mchoice);
    while( mchoice <= 0 || mchoice >= 4)
    {
        printf("t\t\t\t\t\t\tINVALID CHOICE! Please re-enter...\n\t\t\t\t\t\t     Enter your choice: ");
        scanf("%d",&mchoice);
    }
    switch(mchoice)
    {
        case 1:
            instructions();
            break;
        case 2:
            lessonmenu(name);
            break;
        case 3:
            exit(0);
    }

}


int main()
{
    menu();
    return 0;
}
