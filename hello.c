#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   printf("Hello, World!");
   printf("hello from <dev_bilel> branch");
   char c;
   printf("Enter a character: ");
   scanf("%c", &c);  
   printf("ASCII value of %c = %d", c, c);    


    int a;
    long b;   // equivalent to long int b;
    long long c;  // equivalent to long long int c;
    double e;
    long double f;

    printf("Size of int = %zu bytes \n", sizeof(a));
    printf("Size of long int = %zu bytes\n", sizeof(b));
    printf("Size of long long int = %zu bytes\n", sizeof(c));
    printf("Size of double = %zu bytes\n", sizeof(e));
    printf("Size of long double = %zu bytes\n", sizeof(f))
   return 0;
}
  
