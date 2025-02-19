unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char result = 0;
    while (i > 0)
    {
        result = result * 2 + (octet % 2);
        octet /= 2;
        i--;
    }
    return (result);
}
unsigned char	swap_bits(unsigned char octet){

return((octet >> 4 | octet << 4));  
}
void	print_bits(unsigned char octet)
{
    int i =8;
    unsigned char bit;
    while(i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}
int	    is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;

    return (n & (n - 1)) == 0;
}