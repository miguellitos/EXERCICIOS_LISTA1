#include <stdio.h>

int main(){
    float salario = 0;
    char nivel;
    scanf("%c", &nivel);
    scanf("%f", &salario);
    if(nivel == 'a'){
        salario = (salario * 0.05) + salario;
        printf("R$ %.2f", salario);
        return 0;
    } else if(nivel == 'b'){
        salario = (salario * 0.07) + salario;
        printf("R$ %.2f", salario);
        return 0;
    }else if(nivel == 'c')
        salario = (salario * 0.08) + salario;
        printf("R$ %.2f", salario);
        return 0;
}