char    *ft_strdup(char *src)
{
    int i= 0;

    int len = 0;
    while(src[i])
    {
        i++;
    }
    len  = i;

    i = 0;

    char *str_dup = malloc(sizeof(char *) * (len + 1));

    while(src[i])
    {
        str_dup[i] = src[i];
        i++;
    }

    str_dup[i] = '\0';
    return(str_dup);
}