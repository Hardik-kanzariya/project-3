#include <stdio.h>

//	Q.2 Digit Counter

 main()
{
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

        while (number != 0) 
		{
            number/= 10; 
            count++;   
		}
    printf("Total number of digits: %d\n",count);
}
    
