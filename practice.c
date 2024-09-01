// #include<stdio.h>

// int main(){
//     const float a=4.5;
//     const float b=5.6;
//     float sum;
//     sum=a+b;
//     printf("%.2f",sum);
// return 0;
// }
// #include<stdio.h>

// int main(){
//     const int intval = 10;
//     const float floatval = 4.14;
//     const char charval ='A';
//     const char stringval[10]="ABC";
//     printf("integer constant :%d\n",intval);
//     printf("floating point constant :%.2f\n",floatval);
//     printf("character constant :%c\n",charval);
//     printf("string constant :%s\n",stringval);
// return 0;
// }
// #include<stdio.h>

// int main(){
//     string
// return 0;
// }
#include <stdio.h>
#include<string.h>

int main()
{
  int a = 409;                               // ranges from -32,767 to 32,767
  unsigned int b = -7890;                    // ranges from 0 to 65,536
  signed int c = -1234567;                   // ranges from -32767 to 32,767
  short int d = 12345;                       // ranges from -32,767 to 32,767
  unsigned short int e = 65535;              // ranges 0 to 65535
  signed short int f = -32767;               // ranges -32,767 to 32,767
  long int g = -2147483647;                  // ranges -2147483647 to 2147483647
  long long int h = 12345678901234512;       // ranges -(2^63) to (2^63)-1
  signed long int i = -2147483647;           // ranges 2,147,483,647 -2,147,483,647
  unsigned long int j = 4294967295;          // ranges 0 to 4,294,967,295
  unsigned long long int k = 12345678912345; // ranges (2^63)-1
  char l[9]="BIKASH";		

  printf("the value of a is %d\n", a);
  printf("the value of b is %u\n", b);
  printf("the value of c is %i\n", c);
  printf("the value of d is %d\n", d);
  printf("the value of e is %hu\n", e);
  printf("the value of f is %hd\n", f);
  printf("the value of g is %ld\n", g);
  printf("the value of h is %lld\n", h);
  printf("the value of i is %ld\n", i);
  printf("the value of j is %lu\n", j);
  printf("the value of k is %llu\n", k);
  printf("the value of l is %s\n", l);
  return 0;
}
