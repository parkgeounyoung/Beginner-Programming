#include <stdio.h>
int main(void)
{
   FILE* f_1;
   FILE* f_3;
   char c = 'a';
   fopen_s(&f_1, "AAA.txt", "r"); 
   fopen_s(&f_3, "BBB.txt", "w");
   fseek(f_1, 0, 0);             
   
   while(!feof(f_1))     
   {
      c = getc(f_1);             
      putc(c, f_3);              
   }
   
   fclose(f_3);                   
   fclose(f_1);                  
}
