//INTERFACE

typedef char Chave[30];
typedef char Valor[30];
typedef struct map* Map;

struct map{
	Chave chave;
	Valor valor;
	Map prox;
};

Map no_map(Chave c, Valor v, Map p);
void inserir(Chave c, Valor v, Map *M);
void exibe(Map M);
char remover(Chave c, Map *M);
char pertence(Chave c, Valor v, Map M);
void destroi(Map *M);

