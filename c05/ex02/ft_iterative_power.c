int ft_check(int power)
{
    if (power < 0)
        return 0;
    return 1;
}

int ft_iterative_power(int nb, int power)
{
    int i = 1;
    int buff = nb;
    if (!ft_check(power))
        return 0;
    if (power == 0)
        return 1;
    while (i < power)
    {
        nb *= buff;
        i++;
    }
    return (nb);
}