#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;
	if(n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1 , &c , 1);
}

int main(int argc , char **argv)
{
	if(argc >= 1 && argv[0] >= 0)
	{
		ft_putnbr(--argc);
	}
	write(1 , "\n" , 1);
}

