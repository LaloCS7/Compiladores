#include <stdio.h>
#include <stdlib.h>
#include "Pilacadena.h"


void Initialize(pila *s)
{
	s->tope=NULL;
	return;
}

void Push(pila *s, elemento e)
{
	nodo *aux;
	aux=malloc(sizeof(nodo));
	
	if(aux==NULL)
	{
		printf("\nERROR-Push(&s,e): Desbordamiento de la pila, no hay más memoria disponible");
		exit(1);
	}

	(*aux).e=e; 
	aux->abajo=s->tope;
	s->tope=aux;
	return;
}


elemento Pop (pila *s)
{
	elemento r;
	nodo *aux;
	
	if(s->tope==NULL)
	{
		printf("\nERROR-e=Pop(&s): Subdesbordamiento de la pila, no hay elementos en la pila");
		exit(1);
	}
	
	r=s->tope->e;
	aux=s->tope;
	s->tope=s->tope->abajo;
	free(aux);
	return r;	
}


boolean Empty(pila *s)
{
	boolean r;
	if(s->tope==NULL)
	{
		r=TRUE;
	}	
	else
	{
		r=FALSE;
	}
	return r;	
}


elemento Top(pila *s)
{

	if(s->tope==NULL)
	{
		printf("\nERROR-e=Top(&s): Subdesbordamiento de la pila, no hay elementos en la pila");
		exit(1);
	}
	
	return s->tope->e;
}


int Size(pila *s)
{
	nodo *aux;
	int tam_pila=0;
	aux=s->tope;
	if(aux!=NULL)
	{
		tam_pila++;
		while(aux->abajo!=NULL)
		{
			tam_pila++;
			aux=aux->abajo;
		}
	}	
	return tam_pila;
}


void Destroy(pila *s)
{
	nodo *aux;
	if(s->tope!=NULL)
	{
		while(s->tope!=NULL)
		{				
			aux=s->tope->abajo;
			free(s->tope);
			s->tope=aux;
		}		
	}
	return;
}
