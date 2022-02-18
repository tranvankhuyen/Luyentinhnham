#include<stdio.h>
#include<math.h>
/*
         ax + by = c
         dx + ey = f
*/

int main() {
	long long a, b, c, d, e, f;
	double  x, y, D, Dx, Dy;

	scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);

	D = a * e - d * b;
	Dx = c * e - b * f;
	Dy = a * f - c * d; 
    
    if (D == 0) {
		if (Dx == 0 && Dy ==0) 	printf("VOSONGHIEM");
		else printf("VONGHIEM");
	}
	else {
        x = Dx / D;
       	y = Dy / D;
        if (x==0) x=abs(x);
		if (y==0) y= abs(y); 
        printf("%.2lf %.2lf", x, y);
    }
    
	return 0;
}