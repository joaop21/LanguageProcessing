#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H
#endif

typedef struct Autor* Autor;

typedef struct TodasCitacoes* TodasCitacoes;


Autor createAutor(char* novo_nome);



Autor createTodasCitacoes();

void insereCitacao(TodasCitacoes tc, char* nome, char* citacao);
