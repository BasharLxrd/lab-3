#include <stdio.h>

int main()
{
    FILE* f = fopen("ex9.txt", "r");
    int i,num[7],sum=0,large=0;
    for(i=0;i<7;i++){

    fscanf (f, "%*[^0-9]%d", &num[i]);
}
 for (i = 0; i < 7; i++){
sum+=num[i];
}
 for (i = 0; i < 7; i++){
if(large<num[i]){
    large=num[i];
}
}
printf("suma cheltuita in cele 7 zile:%d\niar cea mai mare suma cheltuita este :%d",sum,large);
    fclose(f);
    return 0;
}
