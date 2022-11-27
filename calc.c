#include <stdio.h>

int main () {

    int num1 , num2 ;
    char operator;
    printf("WHICH OPERATIO DO YOU WANT TO PERFORM (+) (-) (*) (/) \n");
    scanf("%c" , &operator);
    printf(" PLEASE ENTER NUMBER 1 \n");
    scanf("%d", &num1);
    printf ("PLEASE ENTER NUMBER 2 \n  ");
    scanf("%d" , &num2);
    

    switch ( operator ) {

        case '+':

            printf("%d ADDITION IS " , num1 + num2);
            break ;

        case '-':

            printf("%d SUBSTRACTION IS " , num1 - num2);
            break ;

        case '*' : 
            printf("%d MULTIPLICATION IS " , num1 * num2);
            break;

        case '/'  :

            printf("%d DIVISION IS " , num1 / num2);
            break;


    } 
    return 0;



}