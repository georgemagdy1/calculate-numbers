/******************************************************************************

							Online C Compiler.
				Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int x;
	int y;
	char op;
	printf("enter your first number");
	scanf("%d", &x);
	printf("enter your second number");
	scanf("%d", &y);
	printf("enter your op");
	scanf("%s", &op);
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
