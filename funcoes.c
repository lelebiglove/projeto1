
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"  

void cadastro_Pessoa(void) {
    int escolha;
    char id[20];  
    char nome[50];
    char cpf[15];
    char data_nascimento[11]; 

    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///           = = = = = = = Cadastro Pessoal = = = = = = =           ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");

    printf("#### Selecione uma das opções: \n");
    printf("1. Cadastrar Pessoa\n");
    printf("2. Sair\n");
    scanf("%d", &escolha);
    getchar();  

    switch (escolha) {
        case 1:
            printf("Digite o ID: ");
            fgets(id, 20, stdin);
            id[strcspn(id, "\n")] = '\0';  

            printf("Digite o Nome completo: ");
            fgets(nome, 50, stdin);
            nome[strcspn(nome, "\n")] = '\0';  

            printf("Digite o CPF: ");
            fgets(cpf, 15, stdin);
            cpf[strcspn(cpf, "\n")] = '\0';  

            printf("Digite a Data de Nascimento (dd/mm/aaaa): ");
            fgets(data_nascimento, 11, stdin);
            data_nascimento[strcspn(data_nascimento, "\n")] = '\0';  

            printf("\nCadastro realizado com sucesso!\n");
            printf("ID: %s\n", id);
            printf("Nome: %s\n", nome);
            printf("CPF: %s\n", cpf);
            printf("Data de Nascimento: %s\n", data_nascimento);
            break;

        case 2:
            printf("Saindo do cadastro.\n");
            break;

        default:
            printf("Opção inválida! Por favor, tente novamente.\n");
            break;
    }
}
