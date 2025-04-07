#include <unistd.h>

void	rostring(char *str)
{
	int i ;
	int j ;
	int space;
	int first_word = 0;

	i = 0;
	j = 0;
	space = 0;


	while(str[i] && str[i] <= 32)
		i++;
	j = i;

	while(str[i] && str[i] > 32)
		i++;
	while(str[i] && str[i] <= 32)
		i++;

	while(str[i])
	{
		if(str[i] > 32)
		{
			if(space)
				write(1 , " " , 1);
		space = 0;
		write(1 , &str[i] , 1);
		first_word = 1;
		}
		else
		       space = 1;
		i++;
	}
	
	if(str[j] && first_word)
		write(1 , " ", 1);
	while(str[j] && str[j] > 32)
	{
		write(1 , &str[j] , 1);
		j++;
	}
}	


int main(int ac , char **av)
{
	if(ac > 1)
	{
		rostring(av[1]);
	}
	write(1 , "\n" ,1);
}
