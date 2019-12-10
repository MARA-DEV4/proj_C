#include<stdio.h>
#include<stdlib.h>


// ce test est pour tester le changement de base en C.
/*la fonction itoa:itoa(int n, char * ch, int b) : convertit l’entier n en une chaîne de caractères qui sera
attribué à ch. La conversion se fait en base b*/


void main()
{
	void itoa(int n, char * ch, int b);
	char ch[30]; int p=18;
	itoa(p, ch, 2);
	printf("%s",ch);
}

//erreur de compilation.. je sait pas ou :/
/*
gcc test_2.c -o test_2
/usr/bin/ld: /tmp/ccef1S8E.o: in function `main':
test_2.c:(.text+0x21): undefined reference to `itoa'
collect2: error: ld returned 1 exit status
*/
