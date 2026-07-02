#include <stdio.h>

int main () {

    /*Variaveis*/
    int age = 0;
    char name[30] = "";
    char initial = '\0';

    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("Enter your name: \n");
    scanf("%s", &name);
    
    printf("Enter your initial: \n");
    scanf(" %c", &initial);

    printf("\n---INFORMATION PERSONAGEN---\n");

    /*resultado final*/
    printf("\nYour old you?%d\n", age);
    printf("Your name is %s\n", name);
    printf("Your initial is %c\n", initial);
    
    return 0;
}