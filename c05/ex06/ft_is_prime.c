int ft_is_prime(int nb)
{
    int i = 2;
    while (i < nb)
    {
        if (!(nb % i) || nb == 0 || nb == 1)
            return 0;
        i++;
    }
    return 1;
}
