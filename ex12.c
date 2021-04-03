#include<stdio.h>
int main(){
FILE*f;
f=fopen("studenti.txt","w");
int n,i,j;
printf("cate nume doriti sa introduceti: ");
scanf("%d",&n);
char *arr=malloc(sizeof(char)*100);
for(i=0;i<n;i++){
        scanf("%s",arr);
        fprintf(f,"%s\n",arr);
}
fclose(f);
}
