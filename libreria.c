#include <stdio.h>
#include <string.h>

#define TAM 100//Tamaño de la libreria.

typedef struct //Estructura del libro.
{
	char  nombre[50];
    char  tipo[50];
    int paginas;
} libro;

struct libreria //Libreria, un arreglo de libros.
{
	libro libros[TAM];
} libreria;

void imprime(libro libro)//Imprimir el libro que recibe por parametro.
{
	printf("Encontrado %s - %s (%u pag.)\n",libro.nombre,libro.tipo,libro.paginas );
}

void BuscarPorNombre(char *nombre)//Imprime todos los libros de nombre igual a nombre.
{
	for (int i = 0; i < TAM; ++i)
	{
		if(strcmp((libreria.libros[i]).nombre,nombre) == 0)
		{
			imprime(libreria.libros[i]);
		}
	}
}

void BuscarPorTipo(char *tipo) //Imprime toda los libros de tipo igual a tipo.
{
	for (int i = 0; i < TAM; ++i)
	{
		if(strcmp((libreria.libros[i]).tipo,tipo) == 0)
		{
			imprime(libreria.libros[i]);
		}
	}
}

void ImprimirTodo() //Imprime toda la libreria
{
	for (int i = 0; i < TAM; ++i)
	{
		imprime(libreria.libros[i]);
	}
}

void ImprimirPos(int x)//Imprime el libro en la posicion x
{
	imprime(libreria.libros[x]);
}

int main(int argc, char const *argv[])//Ejecuta una prueba
{
	libro aux;
	for (int i = 0; i < TAM; ++i)
	{
		char asd[4] = "asd";
		strcpy(aux.nombre, asd); 
		strcpy(aux.tipo, asd); 
		aux.paginas = 15; 
		libreria.libros[i] = aux;
	}

	ImprimirTodo();
	return 0;
}