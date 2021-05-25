int main() {
 
   int f, horast;
   float valorh, salary;
   
   scanf ("%d %d %f", &f, &horast, &valorh);
   
   salary = (valorh * horast);
   
   printf ("NUMBER = %d\n", f);
   printf ("SALARY = U$ %.2f\n", salary);
   
   
    return 0;
}