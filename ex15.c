#include<stdio.h>

int main(){
FILE*f;
f=fopen("ex15.txt","r");
int num[130];
int count=0,n;
printf("alege un numar de la 1 la 9: ");
scanf("%d",&n);
for(int i=0;!feof(f);i++){
        fscanf(f,"%*[^0-9]%d",&num[i]);
        if(num[i]==n){
            count++;
        }
}
printf("\nnumarul %d apare de %d ori",n,count);
fclose(f);
}
