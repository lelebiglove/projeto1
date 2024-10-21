///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///             Projeto Sistema de Gestão Para Despensa Domestica           ///
///                Developed by @cailucas_lm & @lelebiglove                 ///
///////////////////////////////////////////////////////////////////////////////
///                                Semana 5                               ///
///////////////////////////////////////////////////////////////////////////////

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h" 


void inicio_login(void);
void exibir_menu(void);
void cadastro_Pessoa(void);
void produtos(void);
void controle_estoque(void);
void relatorio (void);
void menu_orcamento(void);
void cadastrar_orcamento(void);
void editar_orcamento(void);  
void excluir_orcamento(void); 
void visu_resumo(void);       

void equipe(void);


int main(void) {
    setlocale(LC_ALL, "Portuguese");
    printf("Bem vindo ao seu controle de despesas\n");


    cadastro_Pessoa();

    return 0;
}





void inicio_login(void) {
    int escolha; 
    printf("=========================================\n");
    printf("|               BEM VINDO!              |\n");
    printf("=========================================\n");
    printf("|---------------------------------------|\n");
    printf("|                  LOGIN                |\n");
    printf("|---------------------------------------|\n");
    printf("#### 1 - Login                          |\n");
    printf("#### 2 - Não Possuo Cadastro            |\n");
    printf("----------------------------------------|\n");
    printf("#### Selecione uma das opções: \n");
    scanf("%d", &escolha);
    getchar();  // Para consumir o '\n' deixado pelo scanf
    switch (escolha) {
        case 1:
            printf("Login selecionado.\n");
            break;
        case 2:
            printf("Opção de cadastro selecionada.\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    printf("");
}

void exibir_menu(void) {
    int escolha;
    do {
        printf("/////////////////////////////////////////////////////////////////////\n");
        printf("///   Escolha um módulo:                                             ///\n");
        printf("///   1. Cadastro Pessoal                                            ///\n");
        printf("///   2. Produtos                                                    ///\n");
        printf("///   3. Orçamento                                                   ///\n");
        printf("///   4. Controle de Estoque                                         ///\n");
        printf("///   5. Equipe                                                      ///\n");
        printf("///   6. Relatorio                                                   ///\n");
        printf("///   0. Sair                                                        ///\n");
        printf("/////////////////////////////////////////////////////////////////////\n");
        printf("#### Selecione uma das opções: \n");
        scanf("%d", &escolha);
        getchar();  
        
        switch (escolha) {
            case 1:
                cadastro_Pessoa();
                break;
            case 2:
                produtos();
                break;
            case 3:
                menu_orcamento();
                break;
            case 4:
                controle_estoque();
                break;
            case 5:
                equipe();
                break;
             case 6 : 
             relatorio();
                 break;     
            case 0:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (escolha != 0);
}

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
            id[strcspn(id, "\n")] = '\0';  // Remover o '\n'

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

void produtos(void) {
    int escolha;
    char id_codigo[20];      
    char nome[100];           
    char marca[50];           
    int quant_estoque;        
    char data_validade[11];   
    char id_compra[20]; 

    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///           = = = = = = = =   Produtos   = = = = = = =             ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");

    printf("#### Selecione uma das opções: \n");
    scanf("%d", &escolha);
    getchar();  

    switch (escolha) {
        case 1:
            printf("Digite o ID-código-de-barra: ");
            fgets(id_codigo, 20, stdin);
            id_codigo[strcspn(id_codigo, "\n")] = '\0';  

            printf("Digite o Nome: ");
            fgets(nome, 100, stdin);
            nome[strcspn(nome, "\n")] = '\0';  

            printf("Digite a Marca: ");
            fgets(marca, 50, stdin);
            marca[strcspn(marca, "\n")] = '\0';  

            printf("Digite a Quantidade em estoque: ");
            scanf("%d", &quant_estoque);
            getchar();  

            printf("Digite a Data de validade (dd/mm/aaaa): ");
            fgets(data_validade, 11, stdin);
            data_validade[strcspn(data_validade, "\n")] = '\0';  

            printf("Digite o ID da compra: ");
            fgets(id_compra, 20, stdin);
            id_compra[strcspn(id_compra, "\n")] = '\0';  

            printf("\nCadastro de produto realizado com sucesso!\n");
            printf("ID-código-de-barra: %s\n", id_codigo);
            printf("Nome: %s\n", nome);
            printf("Marca: %s\n", marca);
            printf("Quantidade em estoque: %d\n", quant_estoque);
            printf("Data de validade: %s\n", data_validade);
            printf("ID da compra: %s\n", id_compra);
            break;

        case 2:
            printf("Saindo do cadastro.\n");
            break;

        default:
            printf("Opção inválida! Por favor, tente novamente.\n");
            break;
    }
}

void controle_estoque(void) {
    int escolha;
    char id_codigo[20];      
    char id_compra[20];       
    char data[11];            
    char nome[100];           
    int quantidade;           
    float preco;              
  printf("/////////////////////////////////////////////////////////////////////"
         "//////////\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///          = = = = = = = = = = = = = = = = = = = = = = = = =       "
         "       ///\n");
  printf("///          = = = = = =       Controle_estoque    = = = = = =       "
         "       ///\n");
  printf("///          = = = = = = = = = = = = = = = = = = = = = = = = =       "
         "       ///\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///            ID-codigo-de-barra:                                   "
         "       ///\n");
  printf("///            ID-compra:                                            "
         "       ///\n"); /* sera relacionado ao id codigo de barra */
  printf("///            Data:                                                 "
         "       ///\n");
  printf("///            Nome:                                                 "
         "       ///\n");
  printf("///            Quantidade:                                           "
         "       ///\n");
  printf("///            preco:                                                "
         "       ///\n");
  printf("///                                                                  "
         "       ///\n");
  printf("/////////////////////////////////////////////////////////////////////"
         "//////////\n");
  printf("#### Selecione uma das opcoes: \n");
  scanf("%d", &escolha);
  printf("\n");
  getchar();  

        switch (escolha) {
            case 1:
                printf("Digite o ID-código-de-barra: ");
                fgets(id_codigo, 20, stdin);
                id_codigo[strcspn(id_codigo, "\n")] = '\0';  

                printf("Digite o ID da compra: ");
                fgets(id_compra, 20, stdin);
                id_compra[strcspn(id_compra, "\n")] = '\0';  

                printf("Digite a Data (dd/mm/aaaa): ");
                fgets(data, 11, stdin);
                data[strcspn(data, "\n")] = '\0';  

                printf("Digite o Nome: ");
                fgets(nome, 100, stdin);
                nome[strcspn(nome, "\n")] = '\0';  

                printf("Digite a Quantidade: ");
                scanf("%d", &quantidade);
                getchar();  

                printf("Digite o Preço: ");
                scanf("%f", &preco);
                getchar();  

                printf("\nCadastro de item no estoque realizado com sucesso!\n");
                printf("ID-código-de-barra: %s\n", id_codigo);
                printf("ID da compra: %s\n", id_compra);
                printf("Data: %s\n", data);
                printf("Nome: %s\n", nome);
                printf("Quantidade: %d\n", quantidade);
                printf("Preço: %.2f\n", preco);
                break;

            case 2:
                printf("Saindo do controle de estoque.\n");
                break;

            default:
                printf("Opção inválida! Por favor, tente novamente.\n");
                break;
        }
    }

void menu_orcamento(void) {
    int escolha;
    do{
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////"
            "//////////\n");
    printf("///                                                                  "
            "       ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =       "
            "       ///\n");
    printf("///            = = = = = = = =   Orçamento   = = = = = = = = =       "
            "       ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =       "
            "       ///\n");
    printf("///                                                                  "
            "       ///\n");
    printf("///            1.Cadastrar novo orçamento:                           "
            "       ///\n");
    printf("///            2.Editar orçamento existente:                         "
            "       ///\n");
    printf("///            3.Excluir orçamento:                                  "
            "       ///\n");
    printf("///            4.Visualizar resumo:                                  "
            "       ///\n");
    printf("///            0.Sair:                                               "
            "       ///\n");
    printf("///                                                                  "
            "       ///\n");
    printf("///                                                                  "
            "       ///\n");
    printf("/////////////////////////////////////////////////////////////////////"
            "//////////\n");
    printf("\n");
    printf("#### Selecione uma das opcoes: \n");
    scanf("%d", &escolha);
    getchar();
        switch (escolha) {
                case 1:
                    cadastrar_orcamento();
                    break;

                case 2:
                    editar_orcamento();
                    break;
                
                case 3:
                    excluir_orcamento();
                    break;
                
                case 4:
                    visu_resumo();
                    break;
                
                case 0:
                    
                
                default:
                    printf("\t\t\t>Opção inválida! Tente novamente.\n");           
                    printf("///////////////////////////////////////////////////////////////////////////////\n");
                    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                    break;
            }

        }while (escolha != 0);
}
void cadastrar_orcamento(){
    char id_codigo[20];       
    char data[11];            
    char hora[6];             
    int quantidade;           
    float valor_gasto;

    printf("Digite o ID-código-de-barra: ");
    fgets(id_codigo, 20, stdin);
    id_codigo[strcspn(id_codigo, "\n")] = '\0';  

    printf("Digite a Data (dd/mm/aaaa): ");
    fgets(data, 11, stdin);
    data[strcspn(data, "\n")] = '\0';  

    printf("Digite a Hora (hh:mm): ");
    fgets(hora, 6, stdin);
    hora[strcspn(hora, "\n")] = '\0'; 

    printf("Digite a Quantidade: ");
    scanf("%d", &quantidade);
    getchar();  

    printf("Digite o Valor gasto: ");
    scanf("%f", &valor_gasto);
    getchar();  

    printf("\nCadastro de orçamento realizado com sucesso!\n");
    printf("ID-código-de-barra: %s\n", id_codigo);
    printf("Data: %s\n", data);
    printf("Hora: %s\n", hora);
    printf("Quantidade: %d\n", quantidade);
    printf("Valor gasto: %.2f\n", valor_gasto);

}
void editar_orcamento(void) {
    char id_codigo[20];
   
    printf("Digite o ID do orçamento que deseja editar: ");
    fgets(id_codigo, 20, stdin);
    id_codigo[strcspn(id_codigo, "\n")] = '\0';  // Remover o '\n'

    
    printf("Editando orçamento com ID: %s\n", id_codigo);

    char data[11];
    printf("Digite a nova Data (dd/mm/aaaa): ");
    fgets(data, 11, stdin);
    data[strcspn(data, "\n")] = '\0';

    printf("Orçamento editado com sucesso!\n");
    printf("Novo ID: %s\n", id_codigo);
    printf("Nova Data: %s\n", data);
}

void excluir_orcamento(void) {
    char id_codigo[20];
    
    printf("Digite o ID do orçamento que deseja excluir: ");
    fgets(id_codigo, 20, stdin);
    id_codigo[strcspn(id_codigo, "\n")] = '\0';  // Remover o '\n'

    
    printf("Orçamento com ID: %s excluído com sucesso!\n", id_codigo);
}

void visu_resumo(void) {
    
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///                   = = = = = = = = Resumo = = = = = = = =       ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    
  
    printf("ID: 12345\n");
    printf("Data: 20/10/2024\n");
    printf("Hora: 14:30\n");
    printf("Quantidade: 2\n");
    printf("Valor gasto: R$ 50,00\n");

    printf("/////////////////////////////////////////////////////////////////////\n");
}





void equipe(void) {
    int escolha;

    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///             Universidade Federal do Rio Grande do Norte         ///\n");
    printf("///                 Centro de Ensino Superior do Seridó             ///\n");
    printf("///               Departamento de Computação e Tecnologia           ///\n");
    printf("///                  Disciplina DCT1106 -- Programação              ///\n");
    printf("///                  Projeto Sistema de Despensa Doméstica          ///\n");
    printf("///          Developed by @caiolucas_lm & @lelebiglove              ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("///            Caio Lucas Lopes Medeiros                            ///\n");
    printf("///            Leandro Isaac Correia de Brito                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("#### Selecione uma das opções: \n");
    printf("1. Voltar ao menu principal\n");
    printf("2. Sair\n");
    scanf("%d", &escolha);
    getchar();  

    switch (escolha) {
        case 1:
            printf("Voltando ao menu principal...\n");
            break;
        case 2:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida! Por favor, tente novamente.\n");
            break;
    }
}
 
 void relatorio(void) {
    int escolha;
    char id_codigo[20];       
    char data_inicio[11];     
    char data_fim[11];        
    float total_gasto;        
    int total_itens_consumidos;

    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////"
           "//////////\n");
    printf("///                                                                  "
           "       ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =       "
           "       ///\n");
    printf("///            = = = = = = = =   Relatório   = = = = = = = = =       "
           "       ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =       "
           "       ///\n");
    printf("///                                                                  "
           "       ///\n");
    printf("///            ID-código-de-barra do produto:                        "
           "       ///\n");
    printf("///            Data Início (dd/mm/aaaa):                             "
           "       ///\n");
    printf("///            Data Fim (dd/mm/aaaa):                                "
           "       ///\n");
    printf("///            Total gasto:                                          "
           "       ///\n");
    printf("///            Total de itens consumidos:                            "
           "       ///\n");
    printf("///                                                                  "
           "       ///\n");
    printf("/////////////////////////////////////////////////////////////////////"
           "//////////\n");
    printf("\n");
    printf("#### Selecione uma das opções: \n");
    scanf("%d", &escolha);
    getchar();

    switch (escolha) {
        case 1:
            printf("Digite o ID-código-de-barra do produto: ");
            fgets(id_codigo, 20, stdin);
            id_codigo[strcspn(id_codigo, "\n")] = '\0';  

            printf("Digite a Data Início (dd/mm/aaaa): ");
            fgets(data_inicio, 11, stdin);
            data_inicio[strcspn(data_inicio, "\n")] = '\0';  

            printf("Digite a Data Fim (dd/mm/aaaa): ");
            fgets(data_fim, 11, stdin);
            data_fim[strcspn(data_fim, "\n")] = '\0'; 

            printf("Digite o Total gasto no período: ");
            scanf("%f", &total_gasto);
            getchar();  

            printf("Digite o Total de itens consumidos: ");
            scanf("%d", &total_itens_consumidos);
            getchar();  

            printf("\nRelatório gerado com sucesso!\n");
            printf("ID-código-de-barra: %s\n", id_codigo);
            printf("Data Início: %s\n", data_inicio);
            printf("Data Fim: %s\n", data_fim);
            printf("Total gasto: %.2f\n", total_gasto);
            printf("Total de itens consumidos: %d\n", total_itens_consumidos);
            break;

        case 2:
            printf("Saindo do relatório.\n");
            break;

        default:
            printf("Opção inválida! Por favor, tente novamente.\n");
            break;
    }
}

