#include<stdio.h>

int main(){
    FILE*f;
    f=fopen("ex17.txt","w");
    float mate,fizica,media;
    int n;
    char std[100];
    printf("cati studenti: ");
    scanf("%d",&n);
    fprintf(f,"%s","numele studentului\tnota mate\tnota fizica\tmedia media:\n");
    for(int i=0;i<n;i++){
        printf("\nnumele studentului: ");
        scanf("%s",&std);
        printf("\nnota la mate: ");
        scanf("%f",&mate);
           printf("\nnota la fizica: ");
        scanf("%f",&fizica);
        media=(mate+fizica)/2;
        fprintf(f,"\n%s\t%.1f\t%.1f\t%.2f",std,mate,fizica,media );
    }

    fclose(f);
}


