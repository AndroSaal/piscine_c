int ft_check(int nb)
{
    if (nb <= 0)
    {
        return 0;
    }
    return 1;

}
int ft_iterative_factorial(int nb)
{
    int i = nb - 1;
    if (!ft_check(nb))
    {
        return 0;
    }
    while (i >= 1) 
    {
        nb *= i;
        i--;
    }
    return nb;
}