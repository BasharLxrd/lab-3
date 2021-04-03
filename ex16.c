#include<stdio.h>
#include<ctype.h>

int main(){
FILE*f1 , *f2;
f1=fopen("studenti.txt","r");
char std;
std=fgetc(f1);
f2=fopen("ex16.txt","w");
while (std != EOF)
    {
        fputc(toupper(std),f2);
        std = fgetc(f1);
    }
fclose(f1);
fclose(f2);
}
