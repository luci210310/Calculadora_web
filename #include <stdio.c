#include <stdio.h>
#include <time.h> // NecessÃ¡rio para obter a data/hora atual

int main() {
    // VariÃ¡veis para Nome e Ano de Nascimento
    char nome[50];
    int ano_nascimento;

    // --- Obter o Ano atual ---
    time_t t = time(NULL); // Obtém o tempo atual
    // Converte o tempo para a estrutura tm local
    struct tm *agora = localtime(&t);
    // Extrai o ano atual (agora->tm_year é anos
    // desde 1900, então somamos 1900)
    int ano_atual = agora->tm_year + 1900;
    int idade;

    // --- Captura de Dados ---

    // 1. Solicita e lê o nome
    printf("Digite seu nome:");
    scanf("%49s", nome);

    // 2. Solicita e lê o ano de nascimento
    printf("Digite o ano do seu nascimento (ex: 1900): ");
    scanf("%d", &ano_nascimento);

    // --- CÃ¡lculo da Idade ---
    // A idade Ã© calculada subtraindo o ano de nascimento do ano atual
    idade = ano_atual - ano_nascimento;
}