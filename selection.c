#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "ffile.h"

selection(int difficulty, int lesson)
{
        FILE* fp;
        switch(difficulty)
      {
        case 1:
              switch(lesson)
                {
                    case 1:
                        fp = fopen("lessons/l1.txt", "r");
                        break;
                    case 2:
                        fp = fopen("l2.txt", "r");
                        break;
                    case 3:
                        fp = fopen("l3.txt", "r");
                        break;
                    case 4:
                        fp = fopen("l4.txt", "r");
                        break;
                    case 5:
                        fp = fopen("l5.txt", "r");
                        break;
                }
            break;
        case 2:
            switch(lesson)
              {
                    case 1:
                        fp = fopen("l6.txt", "r");
                        break;
                    case 2:
                        fp = fopen("l7.txt", "r");
                        break;
                    case 3:
                        fp = fopen("l8.txt", "r");
                        break;
                    case 4:
                        fp = fopen("l9.txt", "r");
                        break;
                    case 5:
                        fp = fopen("l10.txt", "r");
                        break;
                }
            break;
        case 3:
             switch(lesson)
                {
                    case 1:
                        fp = fopen("l11.txt", "r");
                        break;
                    case 2:
                        fp = fopen("l12.txt", "r");
                        break;
                    case 3:
                        fp = fopen("l13.txt", "r");
                        break;
                    case 4:
                        fp = fopen("l14.txt", "r");
                        break;
                    case 5:
                        fp = fopen("l15.txt", "r");
                        break;
                }
            break;
    }
    system("cls");
    lessons(fp);
    fclose(fp);
    return 0;
}
