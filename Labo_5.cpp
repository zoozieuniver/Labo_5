#include <stdio.h>
#include <math.h>

int main() {

//values
float x, h, a, b, sum, count;
h=0.8; a=46; b=1.85; sum=0;
int kilkist=0;

float function;

printf("f(x)=(pow(log(b*x), 4) + 0.85) / (pow(a + b * pow(x, 3), 1.0/3) \n");
printf("x_min=0.4; x_max=6.8; h=0.8. \n");

//main cycle
for (x = 0.4; x <= 6.8; x = x + h) {
	
	function= (pow(log(b * x), 4) + 0.85) / (pow(a + b * pow(x, 3), 1.0 / 3));
	printf("f(%0.2f)=%0.2f \n", x, function);

	if (function > 1) {
		sum += function;
		kilkist++;
	}

}




return 0;
}