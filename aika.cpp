#include <stdio.h>
#include <math.h>

int readFile(double xx[], double yy[], char *fileName){
  double x,y;
  int i = 0;
  FILE *fp;
  if((fp = fopen(fileName, "r")) == NULL){
    printf("入力ファイルをオープンできません。¥n");
    return 1;
  }
  while(fscanf(fp, "%lg %lg", &x, &y) != EOF){
    xx[i] = x;
    yy[i] = y;
    i++;
  }
  fclose(fp);
  return i;
}

int writeFile(double xx[], int n, char *fileName){
  int i;
  FILE *fp;
  if((fp = fopen(fileName, "w")) == NULL){
    printf("出力ファイルをオープンできません。¥n");
    return 1;
  }
  for(i = 0; i < n; i++){
    fprintf(fp, "%lf¥n", xx[i]);
  }
  fclose(fp);
  return 0;
}

int main(){
  char fn0[] = "kadai2.txt";
  char fn1[] = "kadai2a.txt";
  char fn2[] = "kadai2b.txt";
  double xx[100], yy[100];
  int n,i;
  n = readFile(xx, yy, fn0);
  for(i = 0; i < n; i++){
    xx[i] = 2 * xx[i];
    yy[i] = pow(yy[i], 2.5);
  }
  writeFile(xx,n,fn1);
  writeFile(yy,n,fn2);
  return 0;
}

