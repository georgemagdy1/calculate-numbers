#include <stdio.h>

int main()
{
	int x;
	int y;
	char op;
	printf("enter your first number");
	scanf("%d", &x);
	printf("enter your op");
	scanf(" %c", &op);
	printf("enter your second number");
	scanf("%d", &y);

	if (op == '+') {

		printf("your result %d+%d=%d", x, y, x + y);


	}
	else if (op == '*') {
		printf("your result %d*%d=%d", x, y, x*y);

	}
	else if (op == '/') {
		printf("your result %d/%d=%d", x, y, x / y);

	}
	else if (op == '-') {
		printf("your result %d-%d=%d", x, y, x - y);

	}






	return 0;
}
