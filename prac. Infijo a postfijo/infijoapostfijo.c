#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Pilacadena.c"
char * agregar_caracter (char * cad,char c, int posicion, int tam);
char * concatenacion (char* cad);	
void infijoaposfijo( char * cad);
int finparentesis (char* cad);
char * agregarnulo (char * cad);
int ncerraduras( char * cad);

pila s;	
	
void main()
{
	int i,n;
	char * ER;
	elemento e;
	
		printf("Ingresa tu expresion regular:\t");

		ER=(char *)malloc(sizeof(char));
		n=1;

		while((ER[n-1]=getchar())!='\n')
		{
			ER=(char *)realloc(ER,(n+1)*sizeof(char));
			n++;
		}
		ER[n-1]='\0';

	ER=concatenacion(ER);
	ER=agregarnulo (ER);
	puts(ER);

	Initialize(&s);

	infijoaposfijo(ER);
	
	e=Pop(&s);
	ER=e.c;
	
	puts(ER);
	printf("%d\n",strlen(ER));


}

void  infijoaposfijo ( char * cad )
{
	pila pcaux,poaux;
	elemento e, eaux;
	int i,j,taux,naux;
	
	Initialize(&pcaux);
	Initialize(&poaux);
	
	for(i=0;cad[i]!='\0';i++)
	{
		if (cad[i]<='z'&& cad[i]>='a')
		{
			if (Empty(&pcaux)==1 )
			{
				naux=ncerraduras(&cad[i]);
				e.c=(char *)malloc((2+naux)*sizeof(char));
				e.c[0]=cad[i];
				for(j=0;j<naux;j++)
				{
					i++;
					e.c[j+1]=cad[i];
				}
				e.c[1+naux]='\0';
				Push(&s,e);
			}
			else
			{
				naux=ncerraduras(&cad[i]);
				e.c=(char *)malloc((2+naux)*sizeof(char));
				e.c[0]=cad[i];
				for(j=0;j<naux;j++)
				{
					i++;
					e.c[j+1]=cad[i];
				}
				e.c[1+naux]='\0';
				
				e=Pop(&s);
				e.c=(char *)realloc(e.c,(strlen(e.c)+2+strlen(eaux.c))*sizeof(char));
				e.c=strcat(e.c,eaux.c);
				e.c=strcat(e.c,".");
				Pop(&pcaux);
				Push(&s,e);
			}
		}	
		else if (cad[i]=='(')
			{
				infijoaposfijo(&cad[i+1]);
				i+=finparentesis(&cad[i]);
				
				eaux=Pop(&s);
				naux=ncerraduras(&cad[i]);
				taux=strlen(eaux.c);
				eaux.c=(char *)realloc(eaux.c,(taux+1+naux)*sizeof(char));
				for(j=0;j<naux;j++)
				{
					i++;
					eaux.c[taux+j]=cad[i];
				}
				eaux.c[taux+naux];
				Push(&s,eaux);
				
				if (Empty(&pcaux)==0 )
				{
					eaux=Pop(&s);
					e=Pop(&s);
					e.c=(char *)realloc(e.c,(strlen(e.c)+2+strlen(eaux.c))*sizeof(char));
					e.c=strcat(e.c,eaux.c);
					e.c=strcat(e.c,".");
					Pop(&pcaux);
					Push(&s,e);
				}
				
			}

		else if (cad[i]=='.')
			{
				e.c=".";
				Push(&pcaux,e);
			}
			else
			{
				if(Empty(&poaux)==1)
				{
					e.c="|";
					Push(&poaux,e);
				}
				else
				{
					eaux=Pop(&s);
					e=Pop(&s);
					e.c=(char *)realloc(e.c,(strlen(e.c)+2+strlen(eaux.c))*sizeof(char));
					e.c=strcat(e.c,eaux.c);
					e.c=strcat(e.c,"|");
					Push(&s,e);
				}
			}
	}
	if(Empty(&poaux)==0)
	{
		eaux=Pop(&s);
		e=Pop(&s);
		e.c=(char *)realloc(e.c,(strlen(e.c)+2+strlen(eaux.c))*sizeof(char));
		e.c=strcat(e.c,eaux.c);
		e.c=strcat(e.c,"|");
		Push(&s,e);
	}
	Destroy(&pcaux);
	Destroy(&poaux);
	return;
}

char * concatenacion (char * cad)
{
    int i;
    for (i=0;cad[i]!='\0';i++)
    {
    	if (((cad[i]<='z'&& cad[i]>='a') || cad[i]==')' || cad[i]=='+' || cad[i]=='*' ) &&
		((cad[i+1]<='z'&& cad[i+1]>='a') || cad[i+1]=='('))
    	{
    		agregar_caracter(cad,'.',i+1,strlen(cad));
		}
	}
	return cad;
}

char * agregar_caracter (char * cad,char c, int posicion, int tam)
{
	char anterior,nuevo;
	int i;

	cad=(char *)realloc(cad,(strlen(cad)+2)*sizeof(char));
	
	nuevo=c;
	
	for (i=posicion;i<tam;i++)
	{
		anterior=cad[i];
		cad[i]=nuevo;
		nuevo=anterior;	
	}
	cad[i]=nuevo;
	cad[i+1]='\0';
	return cad;
}

int finparentesis (char* cad)
{
	int i,n;
	for (i=1,n=1;n!=0;i++)
	{
		if (cad[i]=='(')
		{
			n++;
		}else if (cad[i]==')')
		{
			n--;
		}
	}
	return i-1;
}

char * agregarnulo (char * cad)
{
	int i;
	for(i=0;cad[i]!='\0';i++)
	{
		if (cad[i]==')')
		{
			agregar_caracter (cad,'\0',i,strlen(cad));
		}
	}
	return cad;
}

int ncerraduras( char * cad)
{
	int n,i;
	for(i=1,n=0;cad[i]=='+' || cad[i]=='*';i++)
	{
		n++;
	}
	return n;
}
