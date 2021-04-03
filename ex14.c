#include<stdio.h>

int main(){
FILE*f1;
f1=fopen("studenti.txt","r");
char std;
    std=fgetc(f1);


FILE*f2;
f2=fopen("ex14.txt","w");
  while (std != EOF)
    {
        fputc(std,f2);

        std = fgetc(f1);
    }



fclose(f1);
fclose(f2);

}
