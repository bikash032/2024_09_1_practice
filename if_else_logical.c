#include<stdio.h>

int main(){
    int age;
    printf("the age you have entered is\n");
    scanf("%d",&age);
    if(age<=90 && age>=18)
    {
        printf("you are above 18 and below 90 so you can drive\n");

    }
    else
    {
        printf(" cannot drive\n");
    }
return 0;
}
