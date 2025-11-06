# Include <stdio.h>

int main() {
    int opcao, quantidade;
    float total= 0, parcial;

    printf("===Lanchonte da escola ===\n");

    do {
        printf("\nCárdapio:\n");
        printf("1-Cachorro Quente (R$5,00)\n");
        printf("2-X-Salada  (r$8,00)\n");
        printf("3-Refrigerante (r$4,00\n");
        print("4-Suco Natural (r$6,00)\n");
        printf("0-Finaliar pedido\n");

        printf("\nEscolha o item: ");
        scanf("%d", &opcao);

        if (opcao ==0) break;

        printf("informe a quantidade: ");
        scanf("%d", &quantidade);
        switch(opcao) {
            case 1:
            pacial= quantidade * 5.0;
            printf("Você pediu %d Cachorro(s) Quente: R$ %.2F\n", quantidade, parcial);

        }
}