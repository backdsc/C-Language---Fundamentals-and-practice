#include <stdio.h>
#include <stdbool.h>

int main () {

    int age = 21;
    int year = 2026;

    printf("You are %d years old!\n", age);
    printf("The year is %d\n", year);
    
    float height = 1.80;
    float weight = 83.45;

    printf("\nThe your height is %f\n", height);
    printf("\nThe is your are weight is %f\n", weight);

    double pi = 3.141592655756595851235;
    double money = 9.9999999999999;

    printf("The value of pi is %.10f\n", pi);
    printf("The value is your money is %.9f\n", money);

    char initial = 'D';
    char symmbol = '$';
    
    printf("\nYour initial is %c\n", initial);
    printf("Your favorite symbol is %c\n", symmbol);

    char name[] = "Daniel S.C";
    char food [] = "Hamburger";
    char email[] = "danielburguer.12@hotmail.com";

    printf("\nHello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);

    bool isOn = true;
    bool isstudent = true;
    if (isOn){
        printf("\nYou are Online\n");
    }
    else{
        printf("You are Offline\n");
    }

    if (isstudent){
        printf("You are student!\n");
    }
    else{
        printf("You aren't student!\n");
    }
    
    
    return 0;
}