

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
    return result;
}


void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;
    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}