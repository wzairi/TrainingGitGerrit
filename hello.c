#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   printf("Hello, World!");
   char c;
   printf("Enter a character: ");
   scanf("%c", &c);  
   printf("ASCII value of %c = %d", c, c);    
   return 0;
}
  