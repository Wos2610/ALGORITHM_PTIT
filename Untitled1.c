#include <stdio.h>
int main(){
	char kitu;
	printf ("Nhap ki tu: ");
	kitu = getchar();
	while ((kitu>='0')&&(kitu<='9')) {
        scanf("\n");
		kitu=getchar();
	}
	printf ("Ki tu vua nhap la: ");
	putchar(kitu);


   return 0;
}
