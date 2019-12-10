#include<stdio.h>
#include<string.h>

char ch1[40],ch2[40],ch3[40];
int a=-19980203;

void main()
{
	printf("\ndonner une chaine: ");
	scanf("%s",&ch1);
	printf("%d\n",strlen(ch1));
	printf("\ndonner une autre chaine: ");
	scanf("%s",&ch2);
	printf("%d\n",strlen(ch2));
	strcpy(ch3,ch1);
	//strcat(ch3,ch2);
	printf("%s\n",ch3);
	a=strcmp(ch1,ch2);
	printf("%d\n",a);

}
