#include <stdio.h>

int main()
{
    int marks;
    printf("enter marks obtained\n");
    scanf("%u", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("student obtain grade A");
    }
    if (marks >= 80 && marks <= 89)
    {
        printf("student obtain grade B");
    }
    if (marks >= 70 && marks <= 79)
    {
        printf("student obtain grade C");
    }
    if (marks >= 60 && marks <= 69)
    {
        printf("student obtain grade D");
    }
    if (marks>=0&&marks< 70)
    {
        printf("student is fail");
    }
    else
        printf("the number does not match on our catogory or student does not appear exam");
    return 0;
}