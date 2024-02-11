#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    char* A[] = {"AAA", "BBB", "CCC", "DDD"};
    char sep[] = {"space"};
    printf("%s", ft_strjoin(4, A, sep));
}