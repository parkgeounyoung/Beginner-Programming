#include<stdio.h>

main(){
   FILE* f_2;
   FILE* f_3;
   char c_2 = 'a';
   char c_3 = 'a';
   fopen_s(&f_2, "AAA.txt", "r"); 
   fopen_s(&f_3, "CCC.txt", "r"); 
   fseek(f_2, 0, 0);  
   fseek(f_3, 0, 0);  
   int n=0; //Comparison variables, equal to 0
   
   while (!feof(f_2) && !feof(f_3)) 
    {
        c_2 = getc(f_2);
        c_3 = getc(f_3);
        
        if (c_2 != c_3)
        {
            n=1; 
            break;
        }
    }
    
    if(n==1) printf("Different");
    else printf("Same");
    fclose(f_2);
    fclose(f_3);
}
