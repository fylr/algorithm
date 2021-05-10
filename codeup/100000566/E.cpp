#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double a, b, c, r1, r2, deta;
	scanf("%lf %lf %lf", &a, &b, &c);
	deta = sqrt(b * b - 4 * a * c);
	r1 = (-b + deta) / (2 * a);
	r2 = (-b - deta) / (2 * a);
	printf("r1=%7.2lf\nr2=%7.2lf\n", r1, r2);

	return 0;
}