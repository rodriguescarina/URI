#include <stdio.h>
#include <math.h>

int main(void) {
  
  double x1, x2, y1, y2, total, distancia;
  
  scanf ("%lf %lf", &x1, &y1);
  scanf ("%lf %lf", &x2, &y2);
  
  total = pow(x2-x1,2) + pow(y2-y1,2);
  distancia = sqrt(total);
  
  printf ("%.4lf\n", distancia);
  	

	
 return 0;	
}