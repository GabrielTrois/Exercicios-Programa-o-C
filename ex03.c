#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0, cont[4];
    cont[1] = 0;
    cont[2] = 0;
    cont[3] = 0;
    cont[4] = 0;

    while (n >= 0){
        printf("digite um numero:\n");
        scanf("%d", &n);
        if (n <= 25)
            cont[1]++;
        else if (n <= 50)
            cont[2]++; 
        else if (n <= 75)
            cont[3]++;
        else if (n <= 100)
            cont[4]++;
        
    }
    printf("%d\n %d\n %d\n %d\n",cont[1],cont[2],cont[3],cont[4]);

    system("PAUSE");
    return 0;
}