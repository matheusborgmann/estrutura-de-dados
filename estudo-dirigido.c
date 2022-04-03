#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct CursoEstatistica{
    char nome[10];
    int altura;
    int maiorAltura;    
    int menorAltura;    
    float mediaAlturas; 
    int totPesquisados;
};

typedef struct CursoEstatistica Curso;

void inicializaCursos(Curso curso[]){
    int i;

    strcpy(curso[0].nome,"ADS");
    strcpy(curso[1].nome,"CICO");
    strcpy(curso[2].nome,"SI");
    strcpy(curso[3].nome,"JOGOS");

    for(i=0;i<=5;i++){
        curso[i].maiorAltura = 0;
        curso[i].menorAltura = 0;
        curso[i].mediaAlturas = 0.0;
        curso[i].totPesquisados = 0;
        curso[i].altura = 0;
    }
}

void cursoSelecionado (Curso curso[]) {
  int a ;
  int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
  int sair = 0;
  int count1 = 0;
  int count2 = 0;
  int count3 = 0;
  int count4 = 0;
  printf("\n1 - ADS\n2 - CICO\n3 - SI\n4 - JOGOS\nDIGITE SEU CURSO: ");
  scanf("%d", &a);
  
  do {
      switch(a) {
      case 1:
        count1 += 1;
        
        printf("%s", curso[0].nome);
        printf("\nDigite sua altura: ");
        scanf("%d", &curso[0].altura);
        printf("A altura é: %d\n" , curso[0].altura);
  
        if (curso[0].altura > 0) {
          if (curso[0].altura > curso[0].maiorAltura) {
            curso[0].maiorAltura = curso[0].altura;
          } 
          if (curso[0].menorAltura == 0) {
            curso[0].menorAltura = curso[0].altura;
          } else if (curso[0].altura < curso[0].menorAltura) {
            curso[0].menorAltura = curso[0].altura;
          }
        }
        
        soma1 += curso[0].altura;
        curso[0].totPesquisados = count1;
        curso[0].mediaAlturas = soma1 / count1;
        printf("Maior altura: %d\n", curso[0].maiorAltura);
        printf("Menor altura: %d\n", curso[0].menorAltura);
        printf("Soma alturas: %d\n\n", soma1);
        printf("total pesquisados: %d\n", curso[0].totPesquisados);
        printf("Media alturas: %f\n\n", curso[0].mediaAlturas);
      break;
        
      case 2:
        count2 += 1;
        
        printf("%s", curso[1].nome);
        printf("\nDigite sua altura: ");
        scanf("%d", &curso[1].altura);
        printf("A altura é: %d\n" , curso[1].altura);
  
        if (curso[1].altura > 0) {
          if (curso[1].altura > curso[1].maiorAltura) {
            curso[1].maiorAltura = curso[1].altura;
          } 
          if (curso[1].menorAltura == 0) {
            curso[1].menorAltura = curso[1].altura;
          } else if (curso[1].altura < curso[1].menorAltura) {
            curso[1].menorAltura = curso[1].altura;
          }
        }
        
        soma2 += curso[1].altura;
        curso[1].totPesquisados = count2;
        curso[1].mediaAlturas = soma2 / count2;
        printf("Maior altura: %d\n", curso[1].maiorAltura);
        printf("Menor altura: %d\n", curso[1].menorAltura);
        printf("Soma alturas: %d\n\n", soma2);
        printf("total pesquisados: %d\n", curso[1].totPesquisados);
        printf("Media alturas: %f\n\n", curso[1].mediaAlturas);
      break;
        
      case 3:
        count3 += 1;
        
        printf("%s", curso[2].nome);
        printf("\nDigite sua altura: ");
        scanf("%d", &curso[2].altura);
        printf("A altura é: %d\n" , curso[2].altura);
  
        if (curso[2].altura > 0) {
          if (curso[2].altura > curso[2].maiorAltura) {
            curso[2].maiorAltura = curso[2].altura;
          } 
          if (curso[2].menorAltura == 0) {
            curso[2].menorAltura = curso[2].altura;
          } else if (curso[2].altura < curso[2].menorAltura) {
            curso[2].menorAltura = curso[2].altura;
          }
        }
        
        soma3 += curso[2].altura;
        curso[2].totPesquisados = count3;
        curso[2].mediaAlturas = soma3 / count3;
        printf("Maior altura: %d\n", curso[2].maiorAltura);
        printf("Menor altura: %d\n", curso[2].menorAltura);
        printf("Soma alturas: %d\n\n", soma3);
        printf("total pesquisados: %d\n", curso[2].totPesquisados);
        printf("Media alturas: %f\n\n", curso[2].mediaAlturas);
      break;
        
      case 4:
        count4 += 1;
        
        printf("%s", curso[3].nome);
        printf("\nDigite sua altura: ");
        scanf("%d", &curso[3].altura);
        printf("A altura é: %d\n" , curso[3].altura);
  
        if (curso[3].altura > 0) {
          if (curso[3].altura > curso[3].maiorAltura) {
            curso[3].maiorAltura = curso[3].altura;
          } 
          if (curso[3].menorAltura == 0) {
            curso[3].menorAltura = curso[3].altura;
          } else if (curso[3].altura < curso[3].menorAltura) {
            curso[3].menorAltura = curso[3].altura;
          }
        }
        
        soma4 += curso[3].altura;
        curso[3].totPesquisados = count4;
        curso[3].mediaAlturas = soma4 / count4;
        printf("Maior altura: %d\n", curso[3].maiorAltura);
        printf("Menor altura: %d\n", curso[3].menorAltura);
        printf("Soma alturas: %d\n\n", soma4);
        printf("total pesquisados: %d\n", curso[3].totPesquisados);
        printf("Media alturas: %f\n\n", curso[3].mediaAlturas);
      break;
    }
      printf("Gostaria de adicionar outra pessoa?\n 0-SIM / 1-NÃO\n");
      scanf("%d", &sair);
    
      if (sair == 0) {
        printf("\n1 - ADS\n2 - CICO\n3 - SI\n4 - JOGOS\nDIGITE SEU CURSO: ");
        scanf("%d", &a);

      } 
  } while (sair == 0);   
}

void exibeEstatisticas(Curso curso[]){
    int i;
    printf("\n \t\t");
    for (i=0;i<4;i++){
            printf("%s\t",curso[i].nome);
    }
    printf("\n");
    printf("\t\t");
    for (i=0;i<4;i++){
            printf("%d\t",curso[i].maiorAltura);
    }
     printf("\t-> Maior Altura\n");
    printf("\t\t");
    for (i=0;i<4;i++){
            printf("%d\t",curso[i].menorAltura);
    }
    printf("\t-> Menor Altura\n");
    printf("\t\t");
    for (i=0;i<4;i++){
            printf("%.2f\t",curso[i].mediaAlturas);
    }
    printf("\t-> Media das Alturas\n");
    printf("\t\t");
    for (i=0;i<4;i++){
            printf("%d\t",curso[i].totPesquisados);
    }
    printf("\t-> Total Pesquisado\n");
    printf("\t\t");
   
  
}
int main(){
    Curso curso[4];
    inicializaCursos(curso);
    cursoSelecionado(curso);
    exibeEstatisticas(curso);
    return 0;
}

