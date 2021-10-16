#include <stdio.h>

int main4(void) {
  int d1, m1, a1, d2, m2, a2, dias;
  scanf("%d/%d/%d", &d1, &m1, &a1);
  scanf("%d/%d/%d", &d2, &m2, &a2);

  dias=0;
    for(int year = a1; year<a2; year++){
      if(year%4 !=0 || (year%100 ==0 && year%400 !=0)){
          dias+=365;
      } else{
        if(year > a1 || m1<2){
          dias+=366;
        } else{
          dias+=365;
        }
      }
    }
    for(int month = m1; month<m2; month++){
      if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)){
          dias+=31;
      } else if((month == 4 || month == 6 || month == 9 || month == 11) ){
          dias+=30;
      } else if(month == 2){
        if(a2%4 !=0 || (a2%100 ==0 && a2%400 !=0)){            
          dias+=28;
        } else{
          dias+=29;
        }
      } 
    }
    for(int month = m2; month<m1; month++){
      if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)){
          dias-=31;
      } else if((month == 4 || month == 6 || month == 9 || month == 11) ){
          dias-=30;
      } else if(month == 2){
        if(a2%4 !=0 || (a2%100 ==0 && a2%400 !=0)){            
          dias-=28;
        } else{
          dias-=29;
        }
      } 
    }
    dias+=d2-d1;
  printf("%d\n", dias);

  return 0;
}