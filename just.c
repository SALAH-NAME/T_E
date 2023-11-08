#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char test[1024];
	strcpy(test, "");
	strcpy(test, "1");
	strcpy(test, "0123456789");
	strcpy(test, NULL); 
	printf("%zu\n", strlen(test));
	printf("%zu\n", ft_strlen(test));


	char str[8];
	strcpy(str,"This");
	puts(str);
	memset(str,'$',5);
	memset(str,'$',0);
	memset(str,'$',8);
	memset(NULL,'$',5);
	puts(str);


	int x;
 	int y;
	int size = 2;
	int a = 430;
	memset(&x,a,size);
	printf("%d\n",x);
	ft_memset(&y,a,size);
	printf("%d\n", y);



   const char src[50] = "1234567890!@#$%^&*";
   char dest[11];
   
   strcpy(dest,"**********");
   printf("%s\n\n", dest);
   
   memcpy(dest, src, 10);
   memcpy(dest, src, 0);
   memcpy(dest, NULL, 0);
   memcpy(dest, src, 11);
   memcpy(dest, NULL, 5);
   printf("%s\n", dest);


	 char movo[] = "abcdefghijk";
	 memmove(move + 4, move, 6);
	 
	char schr[] = "hello it me $";
	strchr(str,'\0');

}
