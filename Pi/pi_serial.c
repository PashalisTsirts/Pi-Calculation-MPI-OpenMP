#include <stdio.h>
#include <math.h>
#include <time.h>
#define N 1000000000

int main(int argc, char * argv[]){

int i;
double step = 1.0/N;
double x, sum = 0.0, pi = 0;

struct timespec start, end;

clock_gettime (CLOCK_MONOTONIC, &start);
for(i=0; i<N; i++)
	{
	x = (i+0.5)*step;
	sum += 4.0/(1.0+x*x);
	}
clock_gettime(CLOCK_MONOTONIC, &end);

pi = step * sum;


const int DAS_NANO_SECONDS_IN_SEC = 1000000000;
long timeElapsed_s = end.tv_sec - start.tv_sec;
long timeElapsed_n = end.tv_nsec - start.tv_nsec;
if ( timeElapsed_n < 0 ) {
timeElapsed_n =DAS_NANO_SECONDS_IN_SEC + timeElapsed_n;
timeElapsed_s--;}
printf("***********************\n");
printf("Steps = %d\nPi = %.12f\n",N, pi);
printf("Time: %ld.%09ld secs \n",timeElapsed_s,timeElapsed_n);
printf("***********************\n");

return 0;
}

