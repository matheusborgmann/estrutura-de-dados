#include <stdio.h>
#include <stdlib.h>

struct Numero {
  int num;
  struct Numero *prox;
};

typedef struct Numero numero;

numero *primeiro = NULL;

void inserir(int valor);
void imprimir();
int organizar(int arr[], int total);

int main(void) {
  numero *n;
  n = malloc(sizeof(numero));

  if (n) {
    int a, x[10], cont = 0, total;

    printf("\nDigite a quantidade de numeros que ira inserir: ");
    scanf("%d", &total);
    
    do{

      printf("\nDigite algum numero: ");
      scanf("%d", &x[cont]);
      cont++;
      
    }while(cont != total);   

    organizar(x, total);

    for (int i = 0; i < total; i++) {
      a = x[i];
      inserir(a);
    }
  } else {
    printf("Sem memória disponivel");
  }

  imprimir();
  free(n);
  return 0;
}

void imprimir() {
  if (primeiro == NULL) {
    printf("A lista esta vazia!");
    return;
  }
  numero *no = primeiro;
  while (no != NULL) {
    printf("\nNumero: %d ", no->num);
    printf("\nEndereco de memoria do prox: %d\n", no->prox);
    no = no->prox;
  }
}

void inserir(int valor) {
  numero *no = (numero *)malloc(sizeof(numero));
  no->num = valor;
  no->prox = primeiro;
  primeiro = no;
}

int organizar(int arr[], int total) {
  int temp;

  for (int i = 0; i < total ; i++) {
    for (int j = 0; j < total; j++) {
      if (arr[i] > arr[j]) {

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for (int i = 0; i < 10; i++) {
    return arr[i];
  }
}
