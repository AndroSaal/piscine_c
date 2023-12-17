#include <stdlib.h>

int ft_strlen(char *src);
char *ft_strcopy(char *src, char *buff);

char    *ft_strdup(char *src)
{
    char *buff = (char*) malloc(sizeof(char) * ft_strlen(src));

    return(ft_strcopy(src, buff));
}

char *ft_strcopy(char *src, char *buff)
{
    int i = 0;
    while (src[i] != '\0')
    {
        buff[i] = src[i];
        i++;
    }
    return(buff);
}

int ft_strlen(char *src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        i++;
    }
    return(i);
}
