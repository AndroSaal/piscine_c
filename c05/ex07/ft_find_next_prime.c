int ft_is_prime(int nb)
{
    int i = 2;
    if (nb < 0)
        i = nb;
    int next_prime_number = nb;
    while (next_prime_number >= nb)
    {
        while(next_prime_number >= i)
        {
            if (!(next_prime_number % i) && i == next_prime_number && i != 0 && i != 1)
                return(next_prime_number);
            i++;
        }
        next_prime_number++;
    }
    return 0;
}