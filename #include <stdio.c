#include <stdio.h>
#include <time.h> // NecessÃƒÂ¡rio para obter a data/hora atual

int main() {
    // VariÃƒÂ¡veis para Nome e Ano de Nascimento
    char nome[50];
    int ano_nascimento;

    // --- Obter o Ano atual ---
    time_t t = time(NULL); // ObtÃ©m o tempo atual
    // Converte o tempo para a estrutura tm local
    struct tm *agora = localtime(&t);
    // Extrai o ano atual (agora->tm_year Ã© anos
    // desde 1900, entÃ£o somamos 1900)
    int ano_atual = agora->tm_year + 1900;
    int idade;

    // --- Captura de Dados ---

    // 1. Solicita e lÃª o nome
    printf("Digite seu nome:");
    scanf("%49s", nome);

    // 2. Solicita e lÃª o ano de nascimento
    printf("Digite o ano do seu nascimento (ex: 1900): ");
    scanf("%d", &ano_nascimento);

    // --- CÃƒÂ¡lculo da Idade ---

    // A idade ÃƒÂ© calculada subtraindo o ano de nascimento 
    //do ano atual
    idade = ano_atual - ano_nascimento;

    //--- Impressão da mensagem ---

    //Imprime a saudação com a idade calculada 
    // Importante: Este calculo é aproximado. A idade rea 
    // só é alcançada 
    // na data de aniversário dentro do ano atual.
    printf("\nBom dia %s, você tem %d anos.\n", nome, idade)
}