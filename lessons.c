#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "ffile.h"

void lessons(FILE* fp)
{
    int i;
    int k;
    int b;
    int errcount=0;
    int totchar=0;
    int linelength;
    float error;
    char ch;
    char line[100] = "";
//---------------------------------------------
    time_t start_t, end_t;
    double diff_t;
//--------------------------------------------->>>>End of variables
    time(&start_t);
//--------------------------------------------->>>>Lesson reading...
    while(line[0] != '~')
    {
        for(i=0; (ch=getc(fp)) != '\n'; i++)
        {
            line[i] = ch;
        }
        line[i] = '\0';
        if(line[0] == '~')
        {
            break;
        }
        header();
        printf(" \n\n\n\n\n\t\t\t %s\n\n\t\t\t:", line);
        linelength = strlen(line);//------------------------------>>>>> length of the generated string
        totchar += linelength;

        for(k=0; k < linelength; k++)
        {
            while(1)
            if((b=kbhit())) //------------>>>> returns 1 if key is pressed
                break;                                          //this part reads characters without pressing enter
            if(b)
                printf("%c", ch=getch());
            if(ch != line[k]) //--------->>>> compares character by character a measures error count
                errcount++;
        }
        system("cls");
    }
//----------------------------------------------->>>>End of lesson...
    time(&end_t);
    diff_t = difftime(end_t, start_t);
    printf("\n\n\t_________________________________________________________________________________________________________");
      printf("\n\n\t\t\t\t                        Result             \n ");
      printf("\t\t               +++++++++++++++++++++++++++++++++++++++++++++++++++++++++         \n\n");
    printf("\n\n\t\t\t\t       Execution time = %lf s\n", diff_t);

//------------------------------------------------
    error = (float)errcount*100/totchar;    //------------------->>>> Calculates percentage error
    printf("\n\n\t\t\t\t       Accuracy = %.2f%% \n", 100-error);
//-----------------------------------------------------------------------------------------
    printf("\n\n\t\t\t\t       Keystrokes per minute (kpm) = %.2lf\n", totchar/diff_t*60);
    if((100-error)<=95)
        printf("\n\n\t\tADVISORY: It is Advised to maintain an accuracy of at least 95%% before proceeding to the next lesson\n");
    else
        printf("\n\n\t\t\tADVISORY: Now you can proceed to the next lesson if you are comfortable with the speed\n");

}
