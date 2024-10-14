//////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///             Projeto Sistema de Gestão Para Despensa Domestica           ///
///                Developed by @cailucas_lm & @lelebiglove                 ///
///////////////////////////////////////////////////////////////////////////////
///                                Semana 4                               ///
///////////////////////////////////////////////////////////////////////////////

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  void InicioLogin();
  void exibirMenu();
  void cadastro_Pessoa();
  void produtos();
  void controle_estoque();
  void orcamento();
  void equipe();

  setlocale(LC_ALL, "Portuguese");
  printf("Bem vindo ao seu controle de despesas\n");
    InicioLogin();
    exibirMenu();

  return 0;
}

void  InicioLogin(void) {
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
  printf("#### Selecione uma das opcoes: \n");
    scanf("%d", &escolha);
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
}

void exibir_menu(void) {
  int escolha;
  printf("/////////////////////////////////////////////////////////////////////"
         "/////////\n");
  printf("///   Escolha um módulo:                                             "
         "      ///\n");
  printf("///   1. Cadastro Pessoal                                            "
         "      ///\n");
  printf("///   2. Produtos                                                    "
         "      ///\n");
  printf("///   3. Orçamento                                                   "
         "      ///\n");
  printf("///   4. controle_estoque                                            "
         "      ///\n");
  printf("///   5. Equipe                                                      "
         "      ///\n");
  printf("///   0. Sair                                                        "
         "      ///\n");
  printf("/////////////////////////////////////////////////////////////////////"
         "/////////\n");
  printf("#### Selecione uma das opcoes: \n");
  scanf("%d", &escolha);
  printf("\n");
  getchar();
    switch (escolha) {
      case 1:
        cadastro_Pessoa();
        break;
      case 2:
        produtos();
        break;
      case 3:
        orcamento();
        break;
      case 4:
        controle_estoque();
        break;
      case 5:
        equipe();
        break;
      case 0:
        printf("Saindo do sistema...\n");
        break;
      default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    }
     while (escolha != 0);
    }

void cadastro_pessoa(void) {
  int escolha;
  char id [20];  
  char nome [50];
  char cpf  [15];
  char data_nascimento [11]; 
  printf("/////////////////////////////////////////////////////////////////////"
         "//////////\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =      "
         "       ///\n");
  printf("///           = = = = = = = = Cadastro Pessoal  = = = = = = = =      "
         "       ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =      "
         "       ///\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///            ID:                                                   "
         "       ///\n");
  printf("///            Nome completo:                                        "
         "       ///\n");
  printf("///            CPF:                                                  "
         "       ///\n");
  printf("///            Data de Nascimento (dd/mm/aaaa):                      "
         "       ///\n");
  printf("///                                                                  "
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
                printf("Digite o ID: ");
                fgets(id, sizeof(id), stdin);
                id[strcspn(id, "\n")] = '\0';  //strcspn remove a nova linha sem usar uma função 

                printf("Digite o Nome completo: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0';  

                printf("Digite o CPF: ");
                fgets(cpf, sizeof(cpf), stdin);
                cpf[strcspn(cpf, "\n")] = '\0';  

                printf("Digite a Data de Nascimento (dd/mm/aaaa): ");
                fgets(data_nascimento, sizeof(data_nascimento), stdin);
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
  printf("/////////////////////////////////////////////////////////////////////"
         "//////////\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =      "
         "       ///\n");
  printf("///           = = = = = = = =      Produtos   = = = = = = = = =      "
         "       ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = =      "
         "       ///\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///            ID-codigo-de-barra:                                   "
         "       ///\n");
  printf("///            Nome:                                                 "
         "       ///\n");
  printf("///            Marca:                                                "
         "       ///\n");
  printf("///            Quant_estoque:                                        "
         "       ///\n");
  printf("///            Data_validade:                                        "
         "       ///\n");
  printf("///            ID-compra:                                            "
         "       ///\n");
  printf("///                                                                  "
         "       ///\n");
  printf("/////////////////////////////////////////////////////////////////////"
         "//////////\n");
  printf("#### Selecione uma das opcoes: \n");
  scanf("%d", &escolha);
  printf("\n");
  getchar();
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
void estoque(void) {
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


void orcamento(void) {
  int escolha;
    char id_codigo[20];       
    char data[11];            
    char hora[6];             
    int quantidade;           
    float valor_gasto;
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
  printf("///            ID-codigo-de-barra:                                   "
         "       ///\n");
  printf("///            Data:                                                 "
         "       ///\n");
  printf("///            Hora:                                                 "
         "       ///\n");
  printf("///            Quantidade:                                           "
         "       ///\n");
  printf("///            Valor gasto:                                          "
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
                break;

            case 2:
                printf("Saindo do orçamento.\n");
                break;

            default:
                printf("Opção inválida! Por favor, tente novamente.\n");
                break;
        }
    }


void equipe(void) {

  int escolha;
  printf("\n");
  printf("/////////////////////////////////////////////////////////////////////"
         "//////////\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///             Universidade Federal do Rio Grande do Norte          "
         "       ///\n");
  printf("///                 Centro de Ensino Superior do Seridó              "
         "       ///\n");
  printf("///               Departamento de Computação e Tecnologia            "
         "       ///\n");
  printf("///                  Disciplina DCT1106 -- Programação               "
         "       ///\n");
  printf("///                  Projeto Sistema de Despensa Domestica           "
         "       ///\n");
  printf("///          Developed by @caiolucas_lm   and @lelebiglove           "
         "       ///\n");
  printf("///                                                                  "
         "       ///\n");
  printf("/////////////////////////////////////////////////////////////////////"
         "//////////\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///            Este projeto  foi desenvolvido por:                   "
         "       ///\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///            Caio Lucas Lopes Medeiros                             "
         "       ///\n");
  printf("///            E-mail: caio.lopes.078@ufrn.edu.br                    "
         "       ///\n");
  printf("///            Redes sociais: @caiolucas_lm                          "
         "       ///\n");
  printf("///            Git: https://github.com/BiboDoceiro                   "
         "       ///\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///                                                                  "
         "       ///\n");
  printf("///            Leandro Isaac correia de Brito                        "
         "       ///\n");
  printf("///            E-mail:                                               "
         "       ///\n");
  printf("///            Redes sociais:                                        "
         "       ///\n");
  printf("///                                                                  "
         "       ///\n");
  printf("/////////////////////////////////////////////////////////////////////"
         "//////////\n");
  printf("\n");
  printf("#### Selecione uma das opcoes: \n");
  scanf("%d", &escolha);
  getchar();
}
