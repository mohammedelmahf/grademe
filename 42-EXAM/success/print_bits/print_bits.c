void	print_bits(unsigned char octet)
{
    int i = 8;
    char bit ;

    while(i--)
    {
        bit = (octet>>i & 1) + 48;
        write(1 , &bit , 1);
    }
}