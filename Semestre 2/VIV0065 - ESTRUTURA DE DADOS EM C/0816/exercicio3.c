# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# include <string.h>

/* Escrever um programa que leia 5 numeros e os ordene. */

void	*ft_strrchr(const char *s, int c) {
	char	*str;

	str = 0;
	if (c == '\0')
		return ((char *)s + strlen(s));
	while (*s)
	{
		if (*s == c)
			str = ((char *)s);
		s++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "asdf asdf asdf";
	char	a;
	a = 'a';
	printf("%s", (char *)ft_strrchr(str, a));
	printf("\n");
	printf("%s", strrchr(str, a));
	return (0);
}
