#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "biblioteca_comanda.h"

// O programa teve como referência o programa Lanchonete Da Quinta desevolvido pelo Professor Hilson e os seus alunos
// O programa teve como referência o programa o código da aula 5 do professor Evandro fez em sala
// O programa teve como referência tudo que foi abordado em sala de aula e estudado fora de aula
	
typedef struct {
	char *descricao; 
	int codprod, op, op2, qtd, qtdref;
	float valor, valortotal;
	struct Produto *proximo;
} Produto;


typedef struct {
	char descricao[100];
	int cod;
	float valor;
	Produto produtos [100];
	struct Comanda *proximo;
	char lista_de_produtos; 
	float tempo_de_inicio;
	float tempo_de_fim;
	} Comanda;
	
typedef struct {
int vt_produto; // Variáveis Da função Max implemntado com a API biblioteca_comanda
int vt_comanda; // Variáveis Da função Max implemntado com a API biblioteca_comanda
int cod_comandas_abr; //Variaveis para comandas em aberto e comandas fechadas
int cod_comandas_encd; //Variaveis para comandas em aberto e comandas fechadas
} Comanda1;


main () {
	
	
// Implementação da Função Time.H
	
time_t currentTime:
time(&currentTime);

printf("%s\n", ctime&currentTime);
 
 Menu();
 
 // Implementação da lista de produtos

Produto* criarListaProduto();

	
	Comanda *ini_fila, *fim_fila; //ponteiros para uma fila de comandas
	Produto *ini_produto, *fim_produto; //ponteiro para uma lista de produtos
	int adminOp;
	
	adminOp = Menu();
	
	if(adminOp == 1) {
		
		ini_produto = criarListaProduto();
		
		printf("\n\n");
		printf("Descricao do produto: %s;\n", ini_produto->descricao);
		printf("Codigo do produto: %d;\n", ini_produto->codprod);
		printf("Preco do produto: %f.\n", ini_produto->valor);
		if(ini_produto->proximo == NULL)
			printf("\n\nSuccessful Application:\n");
		else
			puts("\nA lista Foi Concluida!");
	
	}

// Implementação da lista de comandas

   adminOp = Menu();
	
	if(adminOp == 2) {
		
		ini_comanda = CriarFilaDeComandas();
		
		printf("\n\n");
		printf("Descricao da comanda: %s;\n", ini_produto->descricao);
		printf("Codigo do comanda: %d;\n", ini_produto->codprod);
		printf("Preco da comanda: %f.\n", ini_produto->valor);
		if(ini_produto->proximo == NULL)
			printf("\n\nSuccessful Application:\n");
		else
			puts("\nA lista tem mais produtos!");
			
	}
// Implementação do menu Do funcionário da lanchonete "Delivery e Cia"
// Atenção só pode ser acessado pelo funcionário da lanchonete para checar a situação da lanchonete
// Para corrigir erros, alertar qual produto está esgotado, para administrar as listas de produtos e as filas de comandas

 	MenuFuncionario() {
 		
	int opcao;
	printf("|==============================|\n");
	printf("|   Lanchonete Delivery e Cia  |\n");
	printf("|------------------------------|\n");
	printf("|            MENU              |\n");
	printf("|------------------------------|\n");
	printf("| 1 - Criar lista de produtos  |\n");
	printf("| 2 - Iniciar fila de comandas |\n");
	printf("|==============================|\n");
	printf("Opcao: ");
	scanf("%d", &opcao);
	
	return opcao;
}

// Criando lista de produtos

Produto* criarListaProduto() {
	
	Produto *novo = (Produto *)malloc(sizeof(Produto));
	
	printf("Digite a descricao do produto: ");
	scanf("%s", &novo->descricao);

	printf("\nDigite o codigo do produto: ");
	scanf("%d", &novo->codprod;
	
	printf("\nDigite o valor do produto: ");
	scanf("%f", &novo->valor);
	
	novo->proximo = NULL;
	
	return novo;
}

// Criando lista de comandas

Comanda* CriarFilaDeComandas() {
	
	Comanda *novo = (Comanda *)malloc(sizeof(Comanda));
	
	
	printf("Digite a descricao da comanda: ");
	scanf("%s", &novo->descricao);

	printf("\nDigite o codigo do comanda: ");
	scanf("%d", &novo->cod);
	
	printf("\nDigite o valor do comanda: ");
	scanf("%f", &novo->valor);
	
	novo->proximo = NULL;
	
	return novo;
	
	return novo;
}

// Implementação do menu do cliente da lanchonete "Delivery e Cia"
// Ele pode ser acessado pelo funcionário e o cliente da Lanchonete
// no caso o cliente pode fazer pedido online e presencialmente

void MenuCliente() {
	
	printf("|=======================================|\n");
	printf("|         Lanchonete Delivery e Cia     |\n");
	printf("|---------------------------------------|\n");
	printf("|  1- Fazer Pedido | 2 - Alterar Pedido |\n");
	printf("|---------------------------------------|\n");
	printf("|  3-Consultar     | 4 - Voltar         |\n");
	printf("|=======================================|\n");
	printf("Selecione a opção desejada ou 5 para sair \n");
	scanf("%d",&op2);
	system("cls");
}

// Implementação do menu cardapio da lanchonete "Delivery e Cia"

void Cardapio() {
	
	printf("|=======================================|\n");
	printf("|  ESCOLHA O LANCHE QUE VOCE DESEJA     |\n");
	printf("|---------------------------------------|\n");
	printf("|  Codigo   |   Descricao       | Valor |\n");
	printf("|---------------------------------------|\n");
	printf("|    100    | Sanduiche Natural | 7.00  |\n");
	printf("|---------------------------------------|\n");
	printf("|    200    |    Nachos         | 7.50  |\n");
	printf("|---------------------------------------|\n");
	printf("|    300    |   Mini Pizza      | 5.00  |\n");
	printf("|---------------------------------------|\n");
	printf("|    400    |    Coxinha        | 4.50  |\n");
	printf("|---------------------------------------|\n");
	printf("|    500    |  Coca-Cola lata   | 2.50  |\n");
	printf("|=======================================|\n");
	
// Procedimento para escolher o lanches e Bebidas do Seu Pedido

	printf("Informe o codigo do produto \n");
	scanf("%d",&codprod);	
	switch(codprod){
		case 100: {
			
			descricao="Nome Do Lanches ou Bebidas";
			valor = "Indique o Preco";
			printf("informe a quantidade \n");
			printf(" Efetuado o Pagamento \n");	
			printf(" Data e Hora do Encerramento Da Comanda \n");
			scanf("%d",&qtd); 
			break;
		}
		
		case 200: {
			descricao="Nome Do Lanches ou Bebidas";
			valor = "Indique o Preco";
			printf("informe a quantidade \n");
			printf(" Efetuado o Pagamento \n");	
			printf(" Data e Hora do Encerramento Da Comanda \n");
			scanf("%d",&qtd);
			break;
		}
		
		case 300: {
			
			descricao="Nome Do Lanches ou Bebidas";
			valor = "Indique o Preco";
			printf("informe a quantidade \n");
			printf(" Efetuado o Pagamento \n");	
			printf(" Data e Hora do Encerramento Da Comanda \n");
			scanf("%d",&qtd);
			break;
		}
		
		case 400: {
			
			descricao="Nome Do Lanches ou Bebidas";
			valor = "Indique o Preco";
			printf("informe a quantidade \n");
			printf(" Efetuado o Pagamento \n");	
			printf(" Data e Hora do Encerramento Da Comanda \n");
			scanf("%d",&qtd);
			break;
		}
		
		case 500: {
			
			descricao="Nome Do Lanches ou Bebidas";
			valor = "Indique o Preco";
			printf("informe a quantidade \n");
			printf(" Efetuado o Pagamento \n");	
			printf(" Data e Hora do Encerramento Da Comanda \n"); // Auxiliado pela função time.h
			scanf("%d",&qtd);
			break;
		}
		
}

}


	void () {
	
// Função Max implemntado com a API biblioteca_comanda Para Ser Exibida Na Tela	
	
	printf("Insira o Valor Total Da Soma De Produtos Consumidos/n");
	scanf ("%f %f", &vt_produto, &vt_comanda/n);
	
	maximo = max(vt_produto, vt_comanda);
	printf("O Valor Total Da Comanda e %d\n", maximo);
	
}

void () {
	
//Implementação do arquivo log contendo todas as comandas geradas e encerradas.
	
char entrada[80]
while(!(strcmp(entrada,"exit")==0)) {
printf("Digite a entrada:");
scanf("%s", entrada);

if(strcmp(entrada,"exit"==0){
exit(0);

}

else {
system(entrada);

}

}
return 0;

}


void () {

	
// Implementação da visualizacao de comandas abertas

	printf("Visualização De Comandas Em Aberto:");
	
	printf("Codigo Da Comanda:");
	scanf ("d", &comandas_abertas/n);	
	printf("Situação Da Comanda");
	printf("Hora e Data Da Abertura");
	printf("Posição a Ser Atendida");
	printf("Reportar Erro");
	printf("Consulta De Comanda Encerrada");
	printf("Lanchonete Delivery e Cia A Melhor De Teresina");
	
// Implementação da visualizacao de comandas fechadas	
	
	printf("Visualização De Comandas Fechadas:");
	
	printf("Codigo Da Comanda:");
	scanf ("d", &char comandas_encerradas;/n);	
	printf("Situação Da Comanda");
	printf("Hora e Data Do Fechamento");
	printf(" A Posição Da Comanda Quando Foi Atendida");
	printf("Reportar Erro");
	printf("Consulta De Comanda Encerrada");
	printf("Lanchonete Delivery e Cia A Melhor De Teresina");
	
}

}
