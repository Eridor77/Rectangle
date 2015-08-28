#include "rectangle.h"

void    change_char(int w, int h, int x, int y)
{
    if ((w == 1 && h == 1) || (w == x && w != 1 && h == y && h != 1))
        ft_putchar('A');
    else if ((w == x && h == 1) || (w == 1 && h == y))
        ft_putchar('C');
    else if (w != 1 && w != x && h !=1 && h != y)
        ft_putchar(' ');
    else
        ft_putchar('B');
}

void	rectangle(int x, int y)
{
	int width;
	int height;
	
	width = 1;
	height = 1;
	while (height <= y)
	{
		while (width <= x)
		{
			change_char(width, height, x, y);
			width++;
		}
		ft_putchar('\n');
		width = 1;
		height++;
	}
}