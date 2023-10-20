#include<stdio.h>
#define PI 3.14
int r;
float alan;
float cevre;
void main()
{
	r=10;
	alan=PI*r*r; //alan=(float) PI*r*r;
	printf("%d yaricpli dairenin alani=%f",r,alan);
	cevre=2*PI*r;
	printf("\n%d yaricapli dairenin cevresi=%f",r,cevre);
}
