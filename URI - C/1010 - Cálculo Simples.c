#include <stdio.h>
 
int main() {
 
  int cod1, n1, cod2, n2;
  float vu1, vu2, total;
  
  scanf("%i %i %f", &cod1, &n1, &vu1);
  scanf("%i %i %f", &cod2, &n2, &vu2);
  
  total = (n1 * vu1) + (n2 * vu2);
  
  printf("VALOR A PAGAR: R$ %.2f\n",total);
 
    return 0;
}