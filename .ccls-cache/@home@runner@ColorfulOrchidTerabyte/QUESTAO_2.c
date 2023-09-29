#include <stdio.h>

int main() {
  int Numero, Algarismo, Soma = 0;

  scanf("%d", &Numero);

  if (Numero % 2 == 0) {
    printf("%d eh par\n", Numero);
  } else {
    printf("%d eh impar\n", Numero);
  }

  int original = Numero;

  while (Numero != 0) {
    Algarismo = Numero % 10;
    Soma += Algarismo;
    Numero /= 10;
  }

  printf("A soma dos algarismos de %d eh %d\n", original, Soma); 
  return 0;
}

