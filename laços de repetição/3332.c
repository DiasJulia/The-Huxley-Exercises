#include <stdio.h>
#define P(x) primos[x]
#define Zeca(x) ((P(x-1)+P(x+1))/2==P(x))? 1 : 0

int main2(void) {
  int i, f, zecas;
  int primos[1000];
  scanf("%i %i", &i, &f);

  //Pega o maior número primo menor que o número inicial
  for( int j = i-1; j>2; j--){
    int isprimo=1;
    for(int n=2;n<j;n++){
      if(j%n==0){
        isprimo = 0;
      }
    }
    if(isprimo){
      primos[0]=j;
      j=1;
    }
  }

  //Lista todos os primos dentro do range e o menor número primo maior que o número final
  int x = i;
  int primo = i;
  int indice = 0;
  do{
    int isprimo = 1;
    for(int y = 2; y < x; y++){
      if(x%y==0){
        isprimo = 0;
      }
    }
    indice+=isprimo;
    if(isprimo){
      primos[indice] = x;
      primo = x;
    }
    x++;
  }while(primo <= f);

  zecas = 0;
  for(int v=0; v<=indice; v++){
    if(Zeca(v)){
      zecas+=1;
    }
  }

  printf("%i\n", zecas);
  return 0;
}