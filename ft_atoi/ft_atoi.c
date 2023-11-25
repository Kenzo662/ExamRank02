int	ft_atoi(const char *str)
{
    int nb = 0;
    int sign = 1;
    int i = 0;
    
    while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 14)))
        i++;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (nb * sign);
}
