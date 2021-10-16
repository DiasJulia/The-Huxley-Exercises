#include <stdio.h>

int main3(void) {
  int num, num2, x;
  scanf("%d", &num);
  int divisores[num];

  num2=num;
  x=2;

  int maxdiv = 1;
  int mindivisor = num;
  for(int x=num;x>1;x--){
    num2=num;
    int counter = 0;
    while(num2%x==0){
      num2=num2/x;
      counter+=1;
    }
    if(counter>=maxdiv){
      maxdiv=counter;
      mindivisor = x;
    }
  }

  printf("mostFrequent: %i, frequency: %i", mindivisor, maxdiv);

  return 0;
}