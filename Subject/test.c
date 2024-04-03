#include <stdio.h>

int main(void)
{
  int score1,score2,score3; //점수
  char name[50]; //이름
  
  // 파일 읽기 후 이름 및 점수 스캔
  FILE* fp = fopen("sj.txt", "r");
  // 띄어쓰기를 포함한 문자열을 name 변수에 저장
  fscanf(fp,"%[^\n]", name); 
  fscanf(fp, "%d %d %d", &score1,&score2,&score3);
  fclose(fp);
  
  // 내용 출력
  printf("%s\n", name);
  printf("%d %d %d", score1, score2, score3);
  
  // 점수 3개의 평균값 계산 후 sj1.txt에 쓰기
  fp = fopen("sj1.txt", "w");
  fprintf(fp, "%d", (score1+score2+score3)/3);
  fclose(fp);
  return 0;
}