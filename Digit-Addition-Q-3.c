#include <stdio.h>

 main()
{
    int number, fd, ld, sum;
    
    printf("Enter a number: ");
    scanf("%d",&number);

    ld = number % 10;

    fd = number;
    
    while (fd >= 10)
	 {
        fd /= 10;
    }

    sum = fd + ld;

    printf("The sum of the first and last digits is:%d\n",sum);

}
