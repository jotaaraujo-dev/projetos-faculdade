int main() {
    // Aqui eu crio um tabuleiro 10x10 e inicializo todas as posições com 0.
    // O valor 0 significa vazio e mais tarde vou usar o número 1 para marcar partes dos navios.
    int tabuleiro[10][10] = {0};

    // Agora eu defino o navio vertical.
    // Ele vai começar na posição (x=2, y=3) e terá tamanho 4.
    int x_vertical = 2, y_vertical = 3;
    int tamanho_vertical = 4;

    // Em seguida, eu defino o navio horizontal.
    // Ele vai começar na posição (x=5, y=6) e terá tamanho 3.
    int x_horizontal = 5, y_horizontal = 6;
    int tamanho_horizontal = 3;

    // Aqui eu mostro no console as coordenadas de cada parte do navio vertical.
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanho_vertical; i++) {
        int x = x_vertical;     // Mantenho o X fixo
        int y = y_vertical + i; // Faço o Y variar para criar o navio na vertical
        tabuleiro[y][x] = 1;    // Registro no tabuleiro que ali existe parte do navio
        printf("(%d, %d)\n", x, y);
    }

    // Agora eu mostro no console as coordenadas de cada parte do navio horizontal.
    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < tamanho_horizontal; i++) {
        int x = x_horizontal + i; // Faço o X variar para criar o navio na horizontal
        int y = y_horizontal;     // Mantenho o Y fixo
        tabuleiro[y][x] = 1;      // Registro no tabuleiro que ali existe parte do navio
        printf("(%d, %d)\n", x, y);
    }

    // Finalizo o programa informando que tudo ocorreu bem.
    return 0;
}
