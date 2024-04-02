#include <stdio.h>

int main(void)
{
  int a,b,c;
  char name[50];
  FILE* fp = fopen("sj.txt", "r");
  fscanf(fp,"%[^\n]", name);
  fscanf(fp, "%d %d %d", &a,&b,&c);
  fclose(fp);
  
  printf("%s\n", name);
  printf("%d %d %d", a, b, c);
  
  fp = fopen("sj1.txt", "w");
  fprintf(fp, "%d", (a+b+c)/3);
  fclose(fp);
  return 0;
}