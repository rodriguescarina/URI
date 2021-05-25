#include <stdio.h>

int main() {
	
	int R;
	double pi, volume;
	
	scanf("%d", &R);
	
	pi = 3.14159;
	
	volume = (4/3.0) * pi * R * R *R;
	
	printf("VOLUME = %.3lf\n", volume); 
	
	
  return 0;	
}