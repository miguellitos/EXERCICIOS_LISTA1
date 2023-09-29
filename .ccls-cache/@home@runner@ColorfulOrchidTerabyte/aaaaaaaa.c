#include <stdio.h>

int main() {
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);

    if (A == B) {
        printf("Os valores lidos são iguais\n");
    } else if (A > B) {
        if (B == 0) {
            printf("%d é maior que %d\n", A, B);
            printf("%d não é um múltiplo de %d\n", A, B);
        } else if (A % B == 0) {
            printf("%d é maior que %d\n", A, B);
            printf("%d é um múltiplo de %d\n", A, B);
        } else {
            printf("%d é maior que %d\n", A, B);
            printf("%d nao eh um multiplo de %d\n", A, B);
        }
    } else { // B > A
        if (A == 0) {
            printf("%d eh maior que %d\n", B, A);
            printf("%d não eh um multiplo de %d\n", B, A);
        } else if (B % A == 0) {
            printf("%d eh maior que %d\n", B, A);
            printf("%d eh um multiplo de %d\n", B, A);
        } else {
            printf("%d eh maior que %d\n", B, A);
            printf("%d não eh um multiplo de %d\n", B, A);
        }
    }

    return 0;
}
