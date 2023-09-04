typedef struct{
    int id;
    int quantidade;
    char nome[50];
} Produto;

void adicionar_produto(Produto *produto, int qtdProdutos);
void listar_produto(Produto *produto, int qtdProdutos);
void editar_produto(Produto *produto, int qtdProdutos);