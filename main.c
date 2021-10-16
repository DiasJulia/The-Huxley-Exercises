#include <stdio.h>

int main(void) {
  int n, k, p, q, primeiro = 0;
  scanf("%i %i %i", &n, &k, &p);
  q=0;
  if(p==0 && n ==0){
      q-=1;
  }
  for(int num=n; num<k; num++){
    int primos = 0;
    for(int x = 3; x<= num; x++){
      if(num%x==0 && x%2!=0){
        int isprimo=1;
        for(int y = 2; y < x; y++){
          if(x%y==0){
            isprimo = 0;
          } else if(num%(x*x)==0){
            isprimo=0;
            if(p==0){
              primos+=1;
            }
            x=num;
            y=x;
          }
        }
        primos+=isprimo;
      }
    }
    
    if(primos==p){
      if(primeiro == 0 && (p!=0 || n!=0)){
        primeiro = num;
      } else{
        q+=1;
      }
    }
  }

  if(primeiro ==0 && (p!=0 || k==0)){
    printf("Poxa dudinha, me desculpa, nao achei os numeros mas vou te mandar uma foto de um gatinho fofo.");
  }else{
    printf("%i %i", primeiro, q);
  }
  
}