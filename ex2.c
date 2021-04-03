#include<stdio.h>

int main(){
   FILE * s;
   int i,k[5];
   s= fopen ("NUMBERS.txt","w");
   printf("introdu 5 numere:\n");
   for(i=0;i<5;i++){
    scanf("%d",&k[i]);
   }
   for(i = 0; i < 5;i++){
       fprintf (s, "%d\n",k[i]);
   }
   fclose (s);

   return 0;
}

