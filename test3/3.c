/*just a test*/
#include<stdio.h>
int main()
{
	// Maybe a more save way.
	char *str = "hello world";
	printf("%s\n",str);
	// Add more ways
	char str1[] = "hello world";
	printf("%s\n",str1);
	// Add more ways
	char str2[12] = "hello world";
	printf("%s\n",str2);
	// Add more ways
	char str3[12] = {'h','e','l','l','o',' ','w','o','r','l','d','\0'};
	printf("%s\n",str3);
	// Add more ways
	char str4[12];
	str4[0] = 'h';
	str4[1] = 'e';
	str4[2] = 'l';
	str4[3] = 'l';
	str4[4] = 'o';
	str4[5] = ' ';
	str4[6] = 'w';
	str4[7] = 'o';
	str4[8] = 'r';
	str4[9] = 'l';
	str4[10] = 'd';
	str4[11] = '\0';
	printf("%s\n",str4);
	return 0;
 } 
