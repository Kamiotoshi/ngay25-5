#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int i,n=0;
	int item;
	char x[10][12];
	char temp[12];

	printf("Enter each string on a seprate line \n\n");
	printf("Type 'End' when over \n\n");
	do
	{
		printf("string %d: ",n+1);
		scanf("%s",x[n]);
		
	}while(strcmp(x[n++],"End"));
	n=n-1;
	for(item=0;item<n-1;++item)
	{
		if(strcmp(x[item],x[i])>0){
		
		strcpy(temp,x[item]);
		strcpy(x[item],x[i]);
		strcpy(x[i],temp);
	}
}


   printf("Recorded list of strings: \n");

   for(i = 0; i < n; ++i)
   {
    printf("\nString %d is %s", i + 1, x[i]);
   }
 }
 



