
#include<stdio.h>
//Attaching 2 strings in 1
 int main(){
	char str1[100],str2[100];
	int i=0,j=0;
	
	printf("\n Enter str1= ");
	gets(str1);
	printf("\n Enter str2= ");
	gets(str2);
	
	while(str1[i]!='\0'){
		i++;
	}
	while(str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		j++;
	}
	// str1[i]='\0';


	printf("\n\n Attached string =%s",str1);


    return 0;
}
