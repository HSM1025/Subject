#include <stdio.h>

int main(void)
{
  int score[3]; //점수
  int sum = 0; // 총점
  char name[50]; //이름
  
  // 파일 읽기 후 이름 및 점수 스캔
  FILE* fp = fopen("sj.txt", "r");
  if(fp == NULL){ // 파일이 존재하지 않는 경우 에러메시지 출력	
  	printf("Not Found 404");
  	return 1;
  }
  fscanf(fp,"%[^\n]", name); // 띄어쓰기를 포함한 문자열을 name 변수에 저장
  for(int i = 0; i < 3; i++){
  	fscanf(fp, "%d", &score[i]);
  }
  fclose(fp);
  
  // 내용 출력
  printf("%s\n", name);
  for(int i = 0; i < 3; i++){
  	printf("%d ", score[i]);
  	sum += score[i];
  }
  
  // 점수 3개의 평균값 계산 후 sj1.txt에 쓰기
  fp = fopen("sj1.txt", "w");
  fprintf(fp, "%d", sum/3);
  fclose(fp);
  return 0;
}