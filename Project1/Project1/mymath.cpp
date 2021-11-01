#include <stdio.h>
#include <stdlib.h>
#include "func.h"
int main() {
	double n, w, x, e;
	int i, o;
	printf("vvedite function kotoryu xotite poschitat':\n 1: exp^x;\n 2: sin(x);\n 3: cos(x);\n 4: sh(x);\n 5: ln(x+1);  |x|<1.\n");
	scanf_s("%d", &i);
// o - количество членов; w - значение функции
	switch (i) {
	case 1:
		scanf_s("%lf %lf", &x, &e);
		my_exp(x, e, &o, &w);
		printf("%d\n %lf", o, w);
		break;
	case 2:
		scanf_s("%lf %lf", &x, &e);
		my_sin(x, e, &o, &w);
		printf("%d\n %lf", o, w);
		break;
	case 3:
		scanf_s("%lf %lf", &x, &e);
		my_cos(x, e, &o, &w);
		printf("%d\n %lf", o, w);
		break;
	case 4:
		scanf_s("%lf %lf", &x, &e);
		my_sh(x, e, &o, &w);
		printf("%d\n %lf", o, w);
		break;
	case 5:
		scanf_s("%lf %lf", &x, &e);
		if (((x<0)?-x:x) < 1) {
			my_lnplus1(x, e, &o, &w);
			printf("%d\n %lf", o, w);
		}
		else{
			printf("vvedenniy x ne ydov ysloviu");
		}
		break;
	default:
		printf("nepravilniy vvod");
	}

	return 0;
}