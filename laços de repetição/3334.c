#include <stdio.h>

int main1(void) {
  int saldo, x0, x1, y0, y1, z0, z1, cont;
  scanf("%i", &saldo);
  scanf("%i %i %i %i %i %i", &x0, &x1, &y0, &y1, &z0, &z1);

  cont = 0;
  for(int x=x0; x<=x1; x++){
    for(int z=z0; z<=z1; z++){
      for(int y=y0; y<=y1; y++){
        if((z+x+y)==saldo){
          printf("S\n%i %i %i\n", x, y, z);
          cont=1;
          x1 = 0;
          y1 = 0;
          z1 = 0;
        }
      }
    }
  }
  if(!cont){
    printf("N\n");
  }
  return 0;
}