#include <stdio.h>

double area( double (*f)(double), double a, double b){
   double sum, dt;
   int i;

   sum = 0.0;
   dt = (b-a) / 100000000;
   for ( i = 0; i < 100000000; i++)
   {
    sum += (*f)(i*dt + a)*dt;
   }
   
   return sum;

}

double square(double x){
    return x * x; 
}

double linear(double x){
    return x;
}

int main(){
    printf("Area: %lf\n", area(square, 0, 20));

    printf("Area: %lf\n", area(linear, 0, 20));

    return 0;
}