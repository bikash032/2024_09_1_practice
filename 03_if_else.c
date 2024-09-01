#include <stdio.h>

int main()
{
    int age;
    printf("enter the value of age\n");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("the person above cannot drive\n");
    }
    else
    {
        printf("you can drive\n");
    }
    return 0;
}