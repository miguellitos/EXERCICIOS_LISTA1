#include <stdio.h>

int AnoOlimpiadas[] = {
    1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936,
    1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984,
    1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016, 2020
};

int AnoCopasDoMundo[] = {
    1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974,
    1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018
};

int lista(int ano, int lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (ano == lista[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int verify;
    printf("Digite um ano: ");
    scanf("%d", &verify);

    int olimpiadas = lista(verify, AnoOlimpiadas, sizeof(AnoOlimpiadas) / sizeof(AnoOlimpiadas[0]));
    int copasdomundo = lista(verify, AnoCopasDoMundo, sizeof(AnoCopasDoMundo) / sizeof(AnoCopasDoMundo[0]));

    if (olimpiadas) {
        printf("Os Jogos Olímpicos de Verão ocorreram no ano de %d.\n", verify);
    } else if (copasdomundo) {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", verify);
    } else {
        printf("Nao houve Jogos Olímpicos de Verao ou Copa do Mundo no ano de %d.\n", verify);
    }

    return 0;
}
