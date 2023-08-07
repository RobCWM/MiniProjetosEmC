#include <stdio.h>
#include <stdlib.h>

int main () {
	
int a,b,c;

for (a=0;a<=10;a++) {
	printf ("A tabuada de %d\n",a);
for (b=0;b<=10;b++) {

	c=a*b;
	printf ("%d x %d = %d\n",a,b,c);
}
printf("\n");
}
		
	system ("pause");
	return 0;
}
