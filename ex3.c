#include<stdio.h>

int main(){
   FILE * s;
   int i,k[10],read[10],sum=0;
   s= fopen ("ex3.txt","w");
   printf("introdu 10 numere:\n");
   for(i=0;i<10;i++){
    scanf("%d",&k[i]);
   }
   for(i = 0; i < 10;i++){
       fprintf (s, "%d\n",k[i]);
   }
   fclose (s);
   s= fopen ("ex3.txt","r");
   for(i = 0; i < 10;i++){
   fscanf(s, "%d\n", &read[i]);
   }
   for(i = 0; i < 10;i++){
       sum+=read[i];
   }
   printf("\nsuma este =%d",sum);
   FILE *n;
   n=fopen("x3.txt","w");
   fprintf(n,"suma este=%d",sum);
   fclose(n);
   return 0;
}
