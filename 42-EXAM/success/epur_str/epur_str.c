#include<unistd.h>


void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int ac , char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while (av[1][i])
        {
            while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))     // skip intail white spaces
                i++;
            
            while (av[1][i] && (av[1][i] > 32))     // write the first bucnh of charcter after white spaces
            {
                ft_putchar(av[1][i]);
                i++;
            }
            while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t')) // skip the middle white spaces
                i++;

            if (av[1][i] && av[1][i] > 32)              // print one white space and leav the first loop to skipp the middle white spaces
                write(1 , "   " ,3);
        }
    }
    write(1 , "\n" ,1);
}