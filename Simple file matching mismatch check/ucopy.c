#include <stdio.h>
int main(void)
{
   FILE* f_1;
   FILE* f_3;
   char c = 'a';
   fopen_s(&f_1, "AAA.txt", "r"); // f_1파일의 내용을 읽기 위해 파일 열기 실행
   fopen_s(&f_3, "CCC.txt", "w"); // f_1파일의 내용을 복사할 f_3파일을 만들고 열기 실행(내용을 입력받아야 하므로 writing mode)
   fseek(f_1, -1, 2);             // f_1파일의 내용 중 제일 뒷부분을 시작점으로 정함
   
   do      // f_1파일의 내용 중 제일 앞부분에 도달할 때까지 반복
   {
      c = getc(f_1);             // 역순으로 이루어진 f_1파일의 내용을 반복구문만큼 받아들임
      putc(c, f_3);              // 받아들인 내용을 f_3파일 내용에 입력함
   }while(!fseek(f_1, -2, 1));
   
   fclose(f_3);                   // f_3파일 종료
   fclose(f_1);                   // f_1파일 종료
}
