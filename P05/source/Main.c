#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int *aPtr;

	a = 7;
	aPtr = &a;

	printf("The address of a is %p""\n the value of aPtr is %p", &a, aPtr);

	printf("\n\nThe value of a is %d""\n the value of aPtr is %d", a, *aPtr);

	printf("\n\nShowing that * and & are complements of""each other\n&*aPtr=%p""\n*&aPtr=%p\n",&*aPtr,*&aPtr);



	printf("The address of a is %p""\n the value of aPtr is %p", &a, aPtr);

	system("pause");
	return 0;
}