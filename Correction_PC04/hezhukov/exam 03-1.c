
#include <unistd.h>

int main ()
{
	int x = 'a';

	char c;
	while (x <= 'z')
	{
		c = x;
		write(1, &c, 1);
		x++;
		c = x - 32;
		write(1, &c, 1);
		x++;
	}
}
