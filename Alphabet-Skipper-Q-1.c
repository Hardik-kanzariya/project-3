#include<stdio.h>

//	Q-1 Alphabet Skipper

main()
{
	char i='a',n='z';
	
	do{
		printf("%c ",i);
		i++;i++;i++;i++;
		
	}while(i<=n);
	
}