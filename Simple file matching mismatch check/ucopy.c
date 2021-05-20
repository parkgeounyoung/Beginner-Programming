#include <stdio.h>
int main(void)
{
   FILE* f_1;
   FILE* f_3;
   char c = 'a';
   fopen_s(&f_1, "AAA.txt", "r"); 
   fopen_s(&f_3, "CCC.txt", "w"); 
   fseek(f_1, -1, 2);           
   
   do     
   {
      c = getc(f_1);           
      putc(c, f_3);             
   }while(!fseek(f_1, -2, 1));
   
   fclose(f_3);                  
   fclose(f_1);                  
}
