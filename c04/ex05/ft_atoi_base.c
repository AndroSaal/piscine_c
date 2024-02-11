int ft_sign(char *arr);
int ft_base_of_base(char *base);
int ft_check_base_out(char *base);

int ft_atoi_base(char *str, char *base)
{
    int i = 0;
    int number = 0;
    int base_of_base = ft_base_of_base(base);

    if (!base_of_base)
    {
        return(0);
    }
    while (str[i])
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

int ft_check_base_out(char *base)
{
    int i = 0;
    int j = 0;
    while (base[i])
    {
        if ((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'A' && base[i] <= 'F') || \
        (base[i] == 'p' || base[i] == 'o' || base[i] == 'n' || base[i] == 'e') && \
        (base[i] == 'y' || base[i] == 'v' || base[i] == 'i' || base[i] == 'f')); 
        {
            j = 0;
            while(j < i)
            {
                if(base[i] == base[j])
                {
                    return (0);
                }
                j++;
            }
        } else {
            return(0);
        }
        i++;
    }
    return (1);
}
int ft_base_of_base(char *base)
{
    int i = 0;
    if (!ft_check_base_out(base))
    {
        return (0);
    }
    while(base[i])
    {
        i++;
    }
    return (i+1);
}

int ft_sign(char *arr)
{
    int i = 0;
    int sign = 1;
    while (arr[i] != '\0' && (arr[i] == '+' || arr[i] == '-'|| arr[i] == ' '))
    {
        if (arr[i] == '-')
        {
            sign = -1 * sign;
        }
        i++;
    }
    return(sign);    
}