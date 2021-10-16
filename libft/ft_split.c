#include "libft.h"

int     ft_count_words(char *s, char c)
{
    int count;

    count = 1;
    while (*s)
    {
        if (*s == c)
            count++;
        s++;
    }
    return (count);
}

char    **ft_split(char const *s, char c)
{
    int words;
    char **res;
    int i;

    words = ft_count_words(s, c);
    res = malloc(sizeof(char *) * (words + 1));
    i = 0;
    while (i < words)
    {
        res[i] = ft_strdup();
        i++;
    }
    return (res);
}

int main(void)
{
    printf("%d", ft_count_words("Hello world", ' '));
    return (0);
}