#include <stdio.h>

int main (void){
	
    int distanciaKm, minutos;
		
	scanf ("%d", &distanciaKm);
	
    minutos = (60 * distanciaKm) / 30;
     
     printf("%d minutos\n", minutos);
  
  
  return 0;
}