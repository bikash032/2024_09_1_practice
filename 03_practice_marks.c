#include <stdio.h>

int main()
{
    int rating;
    printf("enter the value of rating(60-100)\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("your rating is A\n");
        break;
    case 2:
        printf("your rating is B\n");
        break;
    case 3:
        printf("your rating is C\n");
        break;
    case 4:
        printf("your rating is D\n");
        break;
    default:
        printf("YOU ARE FAIL F");
        break;
    }
        return 0;
    }