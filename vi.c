#include <stdio.h>

int main(){ 

    char user[50];

    printf("Enter name: ");
    gets(user);
    
    printf("Hello World %s\n", user);
    printf("This is Vi's Project");

    return 0; 
}