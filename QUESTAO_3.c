#include <stdio.h>

 
int main(){
int senha, tentativasenha = 0;
scanf("%d", &senha);
printf("senha cadastrada: %d\n", senha);
scanf("%d", &tentativasenha);
if(senha == tentativasenha){
    printf("senha valida!\n");
    return 0;
}else{
    while(senha != tentativasenha){
    printf("senha invalida!\n");
    scanf("%d", &tentativasenha);
    if(senha == tentativasenha){
        printf("senha valida!\n");
        return 0;
    }
    }
}
}