#include <stdio.h>

int main() {


 int tempoGV, velocidadeM;
 double litros;
 
  scanf("%d %d", &tempoGV, &velocidadeM);
  
   litros = tempoGV * velocidadeM;
 
   litros = litros / 12;
 
  printf("%.3lf\n", litros);
  
 return 0;
} 
  