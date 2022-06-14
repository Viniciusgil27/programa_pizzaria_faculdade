#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define SIZE 200
typedef struct{
char nome[SIZE];
char cpf[SIZE];
char telefone[SIZE];
} pizzaiolo;

typedef struct{
char nome[SIZE];
char sabor[SIZE];
char pedaco[SIZE];
} pizza;


pizzaiolo p[SIZE];
pizza pp[SIZE];


char nome[100];
char nomePizza[SIZE][100];
int cpf[SIZE];
int telefone[SIZE];


int op;

char pizzasolicitada[50];
char bebida[50];
char local[20];
char pagamento[20];
char sabor [50];
int pedacos [1];
char tipo [50];
int quantidade[50];
int preco[50];
char endereco [50];
int f;
int numero_Pizza[3];
static int linha;


void menu();
void cadastroGeral();
void cadastro_Pizzaiolo();
void pesquisa_Pizzaiolo();
void cadastro_Pizza();
void pesquisaGeral();
void cadastro_Bebida();
void cadastro_Cliente();
void cadastro_Pedido();

void pequisa_Pizza();
/*void pesquisa_Bebida();
void pesquisa_Cliente();
void pesquisa_Pedido();*/


int main(void) {
   menu();


    return(0);
}

void menu(){

    do{
        printf("              Menu\n");
        printf("--------------------------------------\n");
        printf("1- cadastrar\n");
        printf("2- pesquisar\n");
        printf("3- Sair\n");
        printf("--------------------------------------\n");
        printf("Escolha a opcao desejada: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                system("cls");
                cadastroGeral();
                system("cls");
                menu();

            case 2:
                system("cls");
                pesquisaGeral();
                system("cls");
                menu();

            case 3:
                exit(0);

            default:
                system("cls");
                printf("\n\nopcao invalida!\n\n");

        }
    }while(op !=3);
}
// FIM DO MENU

void cadastroGeral(){

    do{
        printf("      CADASTRO\n");
        printf("_________________________\n");
        printf("1- Cadastrar pizzaiolo\n");
        printf("2- Cadastrar pizza\n");
        printf("3- Cadastrar bebidas\n");
        printf("4- Cadastrar cliente\n");
        printf("5- Cadastrar pedido\n");
        printf("6- Menu\n");
        printf("_________________________\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &op);

        switch(op){
            case 1:
                system("cls");
                cadastro_Pizzaiolo();
                system("cls");
                menu();

            case 2:
                system("cls");
                cadastro_Pizza();
                system("cls");
                menu();

            case 3:
                system("cls");
                cadastro_Bebida();
                system("cls");
                menu();

            case 4:
                system("cls");
                cadastro_Cliente();
                system("cls");
                menu();


            case 5:
                system("cls");
                cadastro_Pedido();
                system("cls");
                menu();

            case 6:
                system("cls");
                menu();

                default:
                    system("cls");
                    printf("\n\nopcao invalida!\n\n");

        }
    }while(op!=6);

}
//FIM DO CADASTRO GERAL



void cadastro_Pizzaiolo(){
    static int linha;
    do{
       system("cls");
       printf("   CADASTRO DE PIZZAIOLO!\n");
       printf("___________________________________\n");
       printf("\nDigite o Nome: ");
       scanf("%s", &nome[linha]);
       printf("Digite o CPF: ");
       scanf("%d", &cpf[linha]);
       printf("Digite o Telefone: ");
       scanf("%d", &telefone[linha]);
       printf("\nCadastro efetuado :)!\n");
       printf("Digite 1 para cadastrar outro, ou 0 para voltar ao menu: ");
       scanf("%d", &op);
       linha++;

    }while(op==1);
}
// FIM DO CADASTRO PIZZAIOLO

void cadastro_Pizza(){
    do{
       system("cls");
       printf("   CADASTRO DE PIZZA!\n");
       printf("___________________________________\n");
       printf("Digite o Nome: ");
       scanf("%s", nome);
       printf("Numero da pizza: ");
       scanf("%d", numero_Pizza);
       printf("Digite o Ingredientes: ");
       scanf("%s", sabor);
       printf("Digite quantos pedacos: ");
       scanf("%d", pedacos);
       printf("\nCadastro efetuado :)!\n");
       printf("Digite 1 para cadastrar outro, ou 0 para voltar ao menu: ");
       scanf("%d", &op);
       linha++;

    }while(op==1);
   // system("pause");
}
//FIM CADASTRO DE PIZZAS

void cadastro_Bebida(){
    do{
        system("cls");
        printf("   CADASTRO DE BEBIDAS\n");
        printf("___________________________________\n");
        printf("Tipo da bebida: ");
        scanf("%s", &tipo);
        printf("Nome da Bebida: ");
        scanf("%s", &nome);
        printf("Quantidade da Bebida: ");
        scanf("%d", &quantidade);
        printf("Preco da bebida: ");
        scanf("%d", &preco);
        printf("\nCadastro efetuado! :)");
        printf("\nDigite 1 para cadastrar outro, ou 0 para voltar ao menu: ");
        scanf("%d", &op);
        linha++;


    }while(op==1);
}
//FIM CADASTRO DE BEBIDAS

void cadastro_Cliente(){
    do{
        system("cls");
        printf("   CADASTRO DE CLIENTE\n");
        printf("___________________________________\n");
        printf("Nome do Cliente: ");
        scanf("%s", &nome);
        printf("\nTelefone do Cliente: ");
        scanf("%d", &telefone);
        printf("\nEndereco do Cliente: ");
        gets(endereco);
        fflush(stdin);
        printf("______________________________________________________________\n");
        printf("\n\nCadastro efetuado! :)");
        printf("\nDigite 1 para cadastrar outro, ou 0 para voltar ao menu: ");
        scanf("%d", &op);

    }while(op==1);
}
//FIM DO CADASTRO DO CLIENTE

void cadastro_Pedido(){
srand(time(NULL));

    for(f=1 ; f <= 1 ; f++){
        printf("%d", rand() % 10000);
    }

    do{
        system("cls");
        printf("   CADASTRO DE PEDIDO\n");
        printf("___________________________________\n");
        printf("Numero do pedido: %d", rand() % 10000);
        printf("\n\nNome do Cliente: ");
        scanf("%s", &nome);
        printf("\nPizza solicitada: ");
        scanf("%s", &pizzasolicitada);
        printf("\nBebidas: ");
        scanf("%s", &bebida);
        printf("\nEntega ou mesa?: ");
        scanf("%s", &local);
        printf("\nForma de pagamento: ");
        scanf("%s", &pagamento);
        printf("______________________________________________________________\n");
        printf("\n\nPedido Realizado! :)");
        printf("\nDigite 1 para cadastrar outro, ou 0 para voltar ao menu: ");
        scanf("%d", &op);

    }while(op==1);

}
//FIM CADASTRO DE PEDIDOS




void pesquisaGeral(){

    do{
        printf("   PESQUISAR\n");
        printf("___________________________________\n");
        printf("1- Pesquisar Pizzaiolo\n");
        printf("2- Pesquisar Pizzas\n");
        printf("3- Pesquisar Bebidas\n");
        printf("4- Pesquisar clientes\n");
        printf("5- Pesquisar pedidos\n");
        printf("6- Menu\n");
        printf("___________________________________\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &op);
        switch(op){

        case 1:
            system("cls");
            pesquisa_Pizzaiolo();
            system("cls");
            menu();

        case 2:
            system("cls");
            pesquisa_Pizza();
            system("cls");
            menu();


        default:
            system("cls");
            printf("\n\nopcao invalida!\n\n");
        }
    }while(op!=6);
}
//FIM DO PESQUISA GERAL

void pesquisa_Pizzaiolo(){
char nomePesquisa[50];
int cpfPesquisa;
int i;
    do{
        system("cls");
        printf("   PESQUISA DE PIZZAIOLO\n");
        printf("___________________________________\n");
        printf("\nDigite 1 para pesquisar por NOME ou 2 para pesquisar por CPF: ");
        scanf("%d", &op);

         switch(op){
            case 1:
                system("cls");
                printf("   PESQUISA DE PIZZAIOLO\n");
                printf("___________________________________\n");
                printf("\nDigite o Nome: ");
                scanf("%s", &nomePesquisa);
                for(i=0;i<SIZE;i++){
                    if(strcmp(nome[i], nomePesquisa)==0){
                        printf("\nNome: %s\nCPF: %d\nTelefone: %d", nome[i], cpf[i], telefone[i]);
                        printf("\n---------------------------------------------------------\n");
                    }
                }
                break;
            case 2:
                printf("   PESQUISA DE PIZZAIOLO\n");
                printf("___________________________________\n");
                printf("\nDigite o CPF:");
                scanf("%d", &cpfPesquisa);
                for(i=0;i<SIZE;i++){
                    if(cpf[i]==cpfPesquisa){
                        printf("\nNome: %s\nCPF: %d\nTelefone: %d", nome[i], cpf[i], telefone[i]);
                    }
                }
                break;

            default:
                system("cls");
                printf("\n\nopcao invalida!\n\n");


        }
        printf("\nDigite 1 para continuar pesquisando ou 0 para voltar ao menu: ");
                scanf("%d", &op);
    }while(op==1);
}
//FIM DA PESQUISA PIZZAIOLO

void pesquisa_Pizza(){
char nomePizzaPesquisa[50];
int i;

    do{
        printf("   PESQUISA DE PIZZA\n");
        printf("___________________________________\n");
        printf("\n Digite 1 para pesquisar por NOME ou 2 para pesquisar por numero: ");
        scanf("%d", &op);
        switch(op){
            case 1:
               printf("\nDigite o nome da pizza: ");
               scanf("%s", &nomePizzaPesquisa);
               for(i=0;i<SIZE;i++){
                if(strcmp(nome[i], nomePizzaPesquisa)==0){
                    printf("\nNome da pizza: %s\nNumero da pizza: %d\nIngredientes da pizza: %s\nPedacos da pizza: %d\n", nome[i], numero_Pizza[i], sabor[i], pedacos[i]);
                    printf("\n---------------------------------------------------------\n");
                }
               }

               break;

            case 2:

                break;

            default:

                break;
        }

    }while(op==1);

}
