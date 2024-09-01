// C program weather to check odd or even 
// i.e rules of IF and ELSE
#include<stdio.h>

int main(){
    int a,b;
    printf("enter the number\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is the even",a);
    }
    else{
        printf("%d is the odd",a);

    }
return 0;
}