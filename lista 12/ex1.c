#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

void lerPessoa(struct Pessoa *p) {
    printf("Digite o nome: ");
    gets(p->nome); 
    printf("Digite a idade: ");
    scanf("%d", &(p->idade));
    printf("Digite o endereco: ");
    fflush(stdin);
    gets(p->endereco);
}

void imprimirPessoa(struct Pessoa p) {
    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereco: %s\n", p.endereco);
}

void main(){
    struct Pessoa pessoa;
    lerPessoa(&pessoa);
    imprimirPessoa(pessoa);

}