// Arquivo: cadastro_pessoa.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadastro_pessoa.h"


void cadastro_pessoa(void) {
    Pessoa pessoa;  

    printf("=== Cadastro de Pessoa ===\n");

    // Coleta dos dados do usuário
    printf("Digite o nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';  // Remove o '\n' do final da string

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    getchar();  // Consumir o '\n' deixado pelo scanf

    printf("Digite o CPF (somente números): ");
    fgets(pessoa.cpf, sizeof(pessoa.cpf), stdin);
    pessoa.cpf[strcspn(pessoa.cpf, "\n")] = '\0';  // Remove o '\n' do final da string

    // Exibe os dados cadastrados
    printf("\nPessoa cadastrada:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("CPF: %s\n", pessoa.cpf);
}
