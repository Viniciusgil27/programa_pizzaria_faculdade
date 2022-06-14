#include <stdio.h>
#include<conio.h>
#define SIZE 100
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

typedef struct{
char nome[SIZE];
char tipo[SIZE];
char quantidade[SIZE];
char preco[SIZE];
} bebida;

typedef struct{
char nome[SIZE];
char telefone[SIZE];
char endereco[SIZE];
} cliente;


pizzaiolo p[SIZE];
pizza pp[SIZE];
bebida b[SIZE];
cliente c[SIZE];


//void
    char nome[SIZE];
char cpf[SIZE];
char telefone[SIZE];

int i;
int op;
static int linha;
FILE *arquivo;

void menu();
void cadastroGeral();
void cadastro_Pizzaiolo();
void pesquisa_Pizzaiolo();
void cadastro_Pizza();
void pesquisaGeral();
void cadastro_Bebida();
void cadastro_Cliente();
void cadastro_Pedido();


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
        static int linha=0;


    do{
       fflush(stdin);
       system("cls");
       printf("   CADASTRO DE PIZZAIOLO!\n");
       printf("___________________________________\n");
       printf("\nDigite o Nome: ");
       gets(p[linha].nome);
       printf("Digite o CPF: ");
       gets(p[linha].cpf);
       printf("Digite o Telefone: ");
       gets(p[linha].telefone);
       printf("\nCadastro efetuado :)!\n");
       printf("Digite 1 para cadastrar outro, ou 0 para voltar ao menu: ");
       scanf("%d", &op);
       linha++;

    }while(op==1);

    arquivo=fopen("pizzaiolo.txt", "a");

    if(arquivo==NULL){
        arquivo=fopen("pizzaiolo.txt", "w");
    }

    for(i=0;i<=linha;i++){

        fwrite(&p, sizeof(p),1, arquivo);
    }
    fclose(arquivo);
}
// FIM DO CADASTRO PIZZAIOLO

void cadastro_Pizza(){
static int linha;
char sabor [50];
int pedacos [10];

    do{
      fflush(stdin);
       system("cls");
       printf("   CADASTRO DE PIZZA!\n");
       printf("___________________________________\n");
       printf("\nDigite o Nome: ");
       gets(pp[linha].nome);
       printf("\nDigite o Ingredientes: ");
       gets(pp[linha].sabor);
       printf("\nDigite quantos pedacos: ");
       gets(pp[linha].pedaco);
       printf("\nCadastro efetuado :)!\n");
       printf("Digite 1 para cadastrar outro, ou 0 para voltar ao menu: ");
       scanf("%d", &op);
       linha++;

    }while(op==1);

    arquivo=fopen("pizza.txt", "a");

    if(arquivo==NULL){
        arquivo=fopen("pizza.txt", "w");
    }

    for(i=0;i<=linha;i++){

        fwrite(&p, sizeof(p),1, arquivo);
    }
    fclose(arquivo);
}
//FIM CADASTRO DE PIZZAS

void cadastro_Bebida(){
char tipo [50];
int quantidade[50];
int preco[50];
    do{
        fflush(stdin);
        system("cls");
        printf("   CADASTRO DE BEBIDAS\n");
        printf("___________________________________\n");
        printf("Tipo da bebida: ");
        gets(b[linha].tipo);
        printf("Nome da Bebida: ");
        gets(b[linha].nome);
        printf("Quantidade da Bebida: ");
         gets(b[linha].quantidade);
        printf("Preco da bebida: ");
        gets(b[linha].preco);
        printf("\nCadastro efetuado! :)");
        printf("\nDigite 1 para cadastrar outro, ou 0 para voltar ao menu: ");
        scanf("%d", &op);
        linha++;


    }while(op==1);

     arquivo=fopen("bebida.txt", "a");

    if(arquivo==NULL){
        arquivo=fopen("bebida.txt", "w");
    }

    for(i=0;i<=linha;i++){

        fwrite(&p, sizeof(p),1, arquivo);
    }
    fclose(arquivo);
}
//FIM CADASTRO DE BEBIDAS

void cadastro_Cliente(){
char endereco [50];

    do{
        fflush(stdin);
        system("cls");
        printf("   CADASTRO DE CLIENTE\n");
        printf("___________________________________\n");
        printf("Nome do Cliente: ");
        gets(c[linha].nome);
        printf("\nTelefone do Cliente: ");
        gets(c[linha].telefone);
        printf("\nEndereco do Cliente: ");
        gets(c[linha].endereco);
        printf("______________________________________________________________\n");
        printf("\n\nCadastro efetuado! :)");
        printf("\nDigite 1 para cadastrar outro, ou 0 para voltar ao menu: ");
        scanf("%d", &op);

    }while(op==1);

     arquivo=fopen("cliente.txt", "a");

    if(arquivo==NULL){
        arquivo=fopen("cliente.txt", "w");
    }

    for(i=0;i<=linha;i++){

        fwrite(&p, sizeof(p),1, arquivo);
    }
    fclose(arquivo);
}
//FIM DO CADASTRO DO CLIENTE

void cadastro_Pedido(){
char pizzasolicitada[50];
char bebida[50];
char local[20];
char pagamento[20];
    do{
        system("cls");
        printf("   CADASTRO DE PEDIDO\n");
        printf("___________________________________\n");
        printf("Nome do Cliente: ");
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
                    if(strcmp(p[i].nome, nomePesquisa)==0){
                        arquivo=fopen("pizzaiolo.txt", "r");
                        printf("\nNome: %s\nCPF: %s\nTelefone: %s", p[i].nome, p[i].cpf, p[i].telefone);
                    }

                }
                    fclose(arquivo);
                break;
            case 2:
                printf("   PESQUISA DE PIZZAIOLO\n");
                printf("___________________________________\n");
                printf("\nDigite o CPF:");
                scanf("%d", &cpfPesquisa);
                for(i=0;i<SIZE;i++){
                    if(cpf[i]==cpfPesquisa){
                        printf("\nNome: %s\nCPF: %s\nTelefone: %s", p[i].nome, p[i].cpf, p[i].telefone);
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

//*/

