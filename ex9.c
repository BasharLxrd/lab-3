#include <stdio.h>

int main()
{
    FILE* f = fopen("ex9.txt", "r");
    char code[256];
    while (fgets(code, sizeof(code), f)) {
        printf("%s", code);
    }
    fclose(f);
    return 0;
}
