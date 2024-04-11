#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	struct no{
		int dado;
		struct no *prox;
	};
	struct no *lista, *p,*q;
	int sn, cont, pos;
	lista = NULL;
	cont = 0;
	
	// Inserção intermediaria em LSE
	
	//contar quantos nós a lista tem
	
	
	do{
		
		// contar a lista
		if(lista==NULL){
			cont = 0;
		}
		else{
			q = lista;
			cont=1;
			while(q->prox != NULL){
				q = q->prox;
				cont++;
			}
			
		}
		
		// Usuario informa posição do nó a ser incluido
		printf("Posicao a ser inserida: ");
		scanf("%d",&pos);
		
		if(pos > cont+1){
			printf("posicao invalida\n");
		}
		else{
			if(pos==cont+1){
				//inserçã0 a direita
				p = malloc(sizeof(struct no));
				scanf("%d",&p->dado);
				p->prox = NULL;
				q = lista;
				while(q->prox != NULL){
					q = q->prox;
				}
				q->prox = p;
			}
			else{
				if(pos==1){
					//inserção à esquerda
					p = malloc(sizeof(struct no)); 
					scanf("%d",&p->dado);
					p->prox = lista;
					lista->P;
				}
				else{
					//inserção intermediária
					p = malloc(sizeof(struct no)); //alocando um espaço na memória para um struct no
					scanf("%d",&p->dado); // recebendo "dado" do struct no atraves de entrada do usuário
					q=lista; // colocando q na primeira pos.
					for(i=0;i<pos-2;i++){ //pegando o ponteiro "prox" do nó posterior a pos. que o usuário escolheu.
						q=q->prox;
					}
					p->prox=q->prox; // encadeando nó novo com o nó anterior.
					q->prox=p; 
					// Atividade de casa: remover nó em uma determinada pos. 
					// para remover nó ponteiro apontado para nó desejado e manda apagar com o comando free, e depois consertar
					// os ponteiros, ou seja o nó anterior deve apontar para o nó posterior.
					// Lembre-se de estudar para prova.
					// Prova, 20 min, uma questão, metade da turma faz, outra metade faz.
					// Mas baseado em lógica de programação
				}
				
			}
		}
		
		
	
		printf("Deseja inserir outro no a direita? 0-nao  1-sim ");
		scanf("%d",&sn);
	}while(sn==1);
	
	printf("\n\n\n");	
	p=lista;	
	while(p!=NULL){
		printf("%d  ",p->dado);
		p = p->prox;
	}
	return 0;
}
