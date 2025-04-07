#include <stdio.h>
#include <stdlib.h>


int	main(int argc , char **argv)
{
	int n;
	int i;

	if(argc == 2)
	{
		n = atoi(argv[1]);
		if(n == 1)
			return(printf("1\n"));
		i = 2;
		while(i <= n)
		{
			if(n % i == 0)
			{
				printf("%d" , i);
				n = n / i;
				if(n == 1)
					break;
				printf("*");
			}
			else
				i++;
		}
	}
	printf("\n");
}
