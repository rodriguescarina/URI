#include <stdio.h>
#include <stdio.h>

int main() {
	
   int  A, B, C, maiorAB; 
   
   scanf("%d" "%d" "%d", &A, &B, &C);
   
   maiorAB = (A+B+abs(A-B)) / 2;
   maiorAB = (maiorAB+C+abs(maiorAB-C)) / 2;
   
   printf("%d eh o maior\n" , maiorAB);
	
	
  return 0;
}