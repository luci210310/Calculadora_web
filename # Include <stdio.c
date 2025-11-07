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
            printf("Você pediu %d Cachorro(s) Quente: R$ %.2f\n", quantidade parcial)
            total += parcial;
            break
           case 2:
            parcial = quantidade * 8.0;
            printf("Você pediu %d X-Salada(s): r$ %.2f\n", quantidade, parcial)
            total += parcial;
            break
           case 3:
            parcial = quantidade * 4.0;
            printf("Você pediu %d Refrigerante(s): r$ %.2f\n", quantidade, parcial)
            total += parcial;
            break
           case 4:
            parcial = quantidade * 6.0;
            printf("Você pediu %d suco(s) Natural: R$ %.2f\n, quantidade parcial")
            total += parcial;
            break 
           default:
            printf("Opção inválida! Tente Novamente.\n");
        }

    } while (opcao != 0);

    printf("\n === TOTAL A PAGAR: R$ %.21 ===\n", total):
    printf( )