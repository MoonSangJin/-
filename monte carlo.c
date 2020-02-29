#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define SEED time(NULL)

double uniformOne() {

	return (double)rand() / RAND_MAX;

}

int main() {

 srand( SEED );
 int i, count, n;
 double x,y,z,pi;

 printf("n = ");
 scanf("%d", &n);

 count = 0;


 for(i = 0; i < n; ++i) {

     x = uniformOne();

     y = uniformOne();

     z = x * x + y * y;

     if( z <= 1 ) count++;
 }

 pi = (double) count / n * 4;
 
 printf("Approximate PI = %g", pi);

 return(0);
}
