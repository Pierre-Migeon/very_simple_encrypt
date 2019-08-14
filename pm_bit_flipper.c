unsigned char pm_char_bit_flipper(unsigned char c)
{
	int n = 1<<(8*sizeof(c)-1);

	while (n)
	{
		c ^= n;
		n >>= 1;
	}
	return (c);
}
