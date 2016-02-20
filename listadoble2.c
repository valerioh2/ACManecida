#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	struct Node *next;
	struct Node *prev;
	int valor;
}Node;

typedef struct lista{
	int cont;
	struct Node *first;
	struct Node *last;
	}List;
	
List *crear_lista()
{
	return calloc(1,sizeof(List));
}
void List_insertar(List *list,int valor)
	{
	Nodo *node=calloc(1,sizeof(Nodo));
	node->valor=valor;
	if(list->last==NULL){
		list->first=node;
		list->last=node;
	}else{
		list->last->next=node;
		node->prev=list->last;
		list->last=node;
		}
	list->cont++;
	return;
	}
void Print_list(List *list)
	{
	Node *p;
	p=list->first;
	while(p!=NULL)
		{
		printf("\n%d",p->valor);
		p=p->next;
		}
	return ;
	}

	
int main(int argc,char *argv[])
	{
	//leer lista A e imprimir valores
	printf("\nLEER lista A e imprimirlo\n");
	list *listA=NULL;
	listA=List_create();
	List_insertar(listA,5);
	List_insertar(listA,4);
	List_insertar(ListA,8);
	List_insertar(ListA,7);
	Print_list(listA);
	
	
	printf("\nLEER un array de lista array list e imprimirlo\n");
	List *arrayList[3];
	arrayList[0]=List_create();
	arrayList[1]=List_create();
	arrayList[2]=List_create();
	//Leer datos de primera lista arrayList[0]
	List_insertar(arrayList[0],6);
	List_insertar(arrayList[0],2);
	List_insertar(arrayList[0],7);
	
	//leer datos de segunda lista arrayList[1]
	
	List_insertar(arrayList[1],5);
	List_insertar(arrayList[1],9);
	
	//leer datos de tercera lista arrayList[2]
	List_insertar(arrayList[2],3); 
	List_insertar(arrayList[2],8);
	List_insertar(arrayList[2],4); 
	
	//imprimimos la lista
	
	Print_list(arrayList[0]);printf("\n");
	Print_list(arrayList[1]);printf("\n");
	Print_list(arrayList[2]);printf("\n"); 
	}
	
	List li[3];
	return 0;
	
	}
	
	
	
	
	
	
	
	
	
	
	
