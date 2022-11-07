#include<stdio.h>
main() {
   char *str = "HellHelloHelloHelloHelloHelloHelloo";
   int num= sizeof(str);
   
   char array[10] = "abcd"; 
   char *p = array; 
   p++;
   printf("%s",p);

   char *pointer = 'x'; 
   char pdizi[5];
   pdizi[1]=pointer;
   printf("%c", pdizi[1]);
   
   return 0;
}
