#include <stdio.h>

int main()
{
    char name[20];
    int age;
    char hobby[20];
    scanf("%c",&name);
    scanf("%d",&age);
    scanf("%s",&hobby);
    printf("Name: %c\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}