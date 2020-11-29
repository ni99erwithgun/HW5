#include <stdio.h>
#include <stdlib.h>

void cubeByReference(int &nPtr);
int main(void)
{
	int num = 5;
	printf("the orignal value of num is %d", num);
	cubeByReference(num);
	printf("\n The new value of num is %d\n", num);
	system("pause");
	return 0;
}

void cubeByReference(int &nPtr)
{
	nPtr = nPtr * nPtr*nPtr;
}