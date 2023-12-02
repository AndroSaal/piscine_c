int ft_sign(char *arr);

int ft_atoi(char *str)
{
    int i = 0;
    int number = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= '1' && str[i] <= '9')
        {
            while(str[i] >= '1' && str[i] <= '9')
            {
                number *= 10;
                number += str[i] - '0';
                i++;
            }
            break;
        }
        i++;
    }
    return(ft_sign(str) * number);
}