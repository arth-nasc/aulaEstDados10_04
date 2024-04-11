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
	
	// Inser��o intermediaria em LSE
	
	//contar quantos n�s a lista tem
	
	
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
		
		// Usuario informa posi��o do n� a ser incluido
		printf("Posicao a ser inserida: ");
		scanf("%d",&pos);
		
		if(pos > cont+1){
			printf("posicao invalida\n");
		}
		else{
			if(pos==cont+1){
				//inser��0 a direita
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
					//inser��o � esquerda
					p = malloc(sizeof(struct no)); 
					scanf("%d",&p->dado);
					p->prox = lista;
					lista->P;
				}
				else{
					//inser��o intermedi�ria
					p = malloc(sizeof(struct no)); //alocando um espa�o na mem�ria para um struct no
					scanf("%d",&p->dado); // recebendo "dado" do struct no atraves de entrada do usu�rio
					q=lista; // colocando q na primeira pos.
					for(i=0;i<pos-2;i++){ //pegando o ponteiro "prox" do n� posterior a pos. que o usu�rio escolheu.
						q=q->prox;
					}
					p->prox=q->prox; // encadeando n� novo com o n� anterior.
					q->prox=p; 
					// Atividade de casa: remover n� em uma determinada pos. 
					// para remover n� ponteiro apontado para n� desejado e manda apagar com o comando free, e depois consertar
					// os ponteiros, ou seja o n� anterior deve apontar para o n� posterior.
					// Lembre-se de estudar para prova.
					// Prova, 20 min, uma quest�o, metade da turma faz, outra metade faz.
					// Mas baseado em l�gica de programa��o
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
