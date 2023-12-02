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