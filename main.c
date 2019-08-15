#include "./bit_encrypt.h"

int	main (int argc, char **argv)
{
	int fh_in;
	int fh_out;
	char *c = (char *)malloc(sizeof(char) + 1);
	c[1] = '\0';

	if (argc < 2)
		write(1, "error\n", 6);
	fh_in = open(argv[1], O_RDONLY);
	fh_out = open(argv[1], O_RDWR);
	while (read(fh_in, c, 1))
	{
		*c = pm_char_bit_flipper(*c);
		write(fh_out, c, 1);
	}
	free(c);
	return (0);
}
