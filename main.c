#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("--------------- strjoin ---------------\n");
	printf("%s\n", ft_strjoin("Hello", NULL));
	printf("%s\n", ft_strjoin(NULL, "Hello"));
	printf("%s\n", ft_strjoin(NULL, NULL));
	printf("--------------- strmapi ---------------\n");
	printf("%s\n", ft_strmapi("Hello", NULL));
	printf("--------------- striteri ---------------\n");
	ft_striteri("Hello", NULL);
}