#include<stdio.h>

main(){
   FILE* f_2;
   FILE* f_3;
   char c_2 = 'a';
   char c_3 = 'a';
   fopen_s(&f_2, "AAA.txt", "r"); // f_1파일의 내용을 읽기 위해 파일 열기 실행
   fopen_s(&f_3, "CCC.txt", "r"); // f_1파일의 내용을 복사할 f_3파일을 만들고 열기 실행(내용을 입력받아야 하므로 writing mode)
   fseek(f_2, 0, 0);  
   fseek(f_3, 0, 0);  
   int n=0; //메모장 비교 변수, '같다'를 0으로 설 정  
   
   while (!feof(f_2) && !feof(f_3))     // f_1파일의 내용 중 제일 앞부분에 도달할 때까지 반복
    {
        c_2 = getc(f_2);
        c_3 = getc(f_3);
        
        if (c_2 != c_3)
        {
            n=1; //문자가 다를 경우 
            break;
        }
    }
    
    if(n==1) printf("Different");
    else printf("Same");
    fclose(f_2);
    fclose(f_3);
}
