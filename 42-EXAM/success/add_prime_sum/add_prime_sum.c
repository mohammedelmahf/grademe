#include <unistd.h>
#include <stdio.h>
void	ft_putnbr(int n)
{
	char c;
	if(n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1 , &c , 1);
}

int is_prime(int n)
{
	int i ;
	i = 2;

	if(n < 2)
		return 0;
	while(i * i <= n)
	{
		if(n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int	ft_atoi(char *s)
{
	int res;
	res = 0;
	while(*s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	return res;
}

int main(int argc , char **argv)
{
	int sum;
	int num;
	int i;

	if(argc == 2)
	{
		num = ft_atoi(argv[1]);
		i = 2;
		sum = 0;
		while(i <= num)
		{
			if(is_prime(i))
				sum+= i;
			i++;
		}
		ft_putnbr(sum);
	}
	else 
		write(1 , "0" , 1);
	write(1 , "\n" ,1);
	return(0);
}
