#include <stdio.h>
int main(){
    float qtd,duzia;
    printf("adicione as maças");
    scanf("%f",&qtd);
    if (qtd<2){
        printf("menos de uma duzia, o valor é 1.30");
    }
    else if (qtd==12){
        printf("valor da duzia é 13.20");
    }
    return 0;
}