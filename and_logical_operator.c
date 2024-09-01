#include <stdio.h>

int main()
{
    int age;
    printf("the age of \n");
    scanf("%d", &age);
    if (age<=90 && age>=18||!(age=1)||(age=15))
    {
        printf("is above 18 and below 90,so you can drive\n");
    }
    else(age=100);
    {
        printf("you cannot drive.\n");
    }
    return 0;
}