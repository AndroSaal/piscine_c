#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_length(int size, char **strs, char *sep);
int ft_len(char* string);

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i = 0;
    int j = 0;
    int k = 0;
    if (size == 0)
        return("");
    char *string = (char*)malloc(sizeof(char)*ft_length(size, strs, sep));
    while (i < size)
    {
        while (j < ft_len(strs[i]))
        {
            string[k] = strs[i][j];
            j++;
            k++;
        }
        j = 0;
        if (i != size - 1)
        {
            while (j < ft_len(sep))
            {
                string[k] = sep[j];
                j++;
                k++;
            }
            j = 0;
        }
        i++;
    }
    return(string);
}

int ft_length(int size, char **strs, char *sep)
{
    int i = 0;
    int len = 0;

    while (i <= size)
    {
        len += ft_len(strs[i]);
        if (i != size)
            len += ft_len(sep);
        i++;
    }
    return(len);
}

int ft_len(char* string)
{
    int i = 0;
    while(string[i] != '\0')
        i++;
    return(i);  
}