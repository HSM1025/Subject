#include <stdio.h>

int main(void)
{
  int score1,score2,score3; //score
  char name[50]; //name
  
  //file readㅇㅇㅇㅇ
  FILE* fp = fopen("sj.txt", "r");
  fscanf(fp,"%[^\n]", name);
  fscanf(fp, "%d %d %d", &score1,&score2,&score3);
  fclose(fp);
  
  //print
  printf("%s\n", name);
  printf("%d %d %d", score1, score2, score3);
  
  //file write
  fp = fopen("sj1.txt", "w");
  fprintf(fp, "%d", (score1+score2+score3)/3);
  fclose(fp);
  return 0;
}