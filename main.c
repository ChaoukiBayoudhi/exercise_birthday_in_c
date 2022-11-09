#include <stdio.h>

int main() {
    int day,month,year,A,B,M;
    int num_day_of_birth;
    printf("Your birthDate = ? ");
    scanf("%2i/%2i/%4i",&day,&month,&year);
    //last two digits of birthday's year
    if(day==29 && month==2)
        printf("Sorry !! I can't know your birthday.");
    else {
        A = year % 100;
        B = A / 4;
        switch (month) {
            case 1:
            case 10:
                M = 0;
                break;
            case 5:
                M = 1;
                break;
            case 8:
                M = 2;
                break;
            case 2:
            case 3:
            case 11:
                M = 3;
                break;
            case 6:
                M = 4;
                break;
            case 9:
            case 12:
                M = 5;
                break;
            case 4:
            case 7:
                M = 6;
                break;
        }
        num_day_of_birth = (A + B + M + day) % 7;
        switch (num_day_of_birth) {
            case 0:
                printf("born on Sunday");
                break;
            case 1:
                printf("born on Monday");
                break;
            case 2:
                printf("born on Tuesday");
                break;
            case 3:
                printf("born on Wednesday");
                break;
            case 4:
                printf("born on Thursday");
                break;
            case 5:
                printf("born on Friday");
                break;
            case 6:
                printf("born on Saturday");
                break;

        }
    }
    return 0;
}
