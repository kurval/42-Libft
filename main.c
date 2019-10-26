/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:35:05 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/25 15:07:10 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>

static void	putx(char *s)
{
	*s = 'x';
}

static void puty2(unsigned int n, char *s)
{
	n = 0;
	s[n] = 'y';
}

int	main(void)
{
	printf("\n*******************************************************\n");
	printf("1. FT_MEMSET TEST \n");
	
	char memstr[] = "Hello world!";
	printf("String is: %s\n", memstr);
	printf("EXPECTED (......world!): %s\n", ft_memset(memstr, '.', 6));

	printf("\n*******************************************************\n");
	printf("2. FT_BZERO TEST \n");
	
	char zerostr[] = "Helloworld!";
	printf("String is: %s\n", zerostr);
	ft_bzero(zerostr, 4);
	printf("EXPECTED (): %c\n", zerostr[3]);
	printf("EXPECTED (o): %c\n", zerostr[4]);

	printf("\n*******************************************************\n");
	printf("3. FT_MEMCPY TEST \n");
	
	char dest5[] = "Hellou";
	char sour2[] = "World!";
	printf("Dest is: %s\n", dest5);
	printf("Source is: %s\n", sour2);
	printf("EXPECTED (Wollou): %s\n", ft_memcpy(dest5, sour2, 2));

	printf("\n*******************************************************\n");
	printf("4. FT_MEMCCPY TEST \n");
	
	char dest17[] = "Helou!";
	char sour18[] = "World!";
	printf("Dest is: %s\n", dest17);
	printf("Source is: %s\n", sour18);
	printf("EXPECTED 'l' (u!): %s\n", ft_memccpy(dest17, sour18, 'l', 6));
	printf("Dest is EXPECTED(Worlu!): %s\n", dest17);


	char dest20[] = "Helou!";
	char sour21[] = "World!";
	printf("Source is: %s\n", sour21);
	printf("EXPECTED not found 'x' (null): %s\n", ft_memccpy(dest20, sour21, 'x', 6));
	printf("Dest is EXPECTED(World!): %s\n", dest20);

	printf("\n*******************************************************\n");
	printf(" 5. FT_MEMMOVE TEST \n");
	
	char str11[] = "abcde";
	printf("Dest is: %s\n", str11);
	ft_memmove(str11+2, str11, 3);
	printf("EXPECTED (ababc): %s\n", str11);

	printf("\n*******************************************************\n");
	printf("6. FT_MEMCHR TEST \n");
	
	char str10[] = "Hive is a nice school!";
	printf("STR: %s\n", str10);
	printf("EXPECTED 'c' (ce school!): %s\n", ft_memchr(str10, 'c', 22));

	char str12[] = "Hive is a nice school!";
	printf("STR: %s\n", str12);
	printf("EXPECTED not found 'w' (null): %s\n", ft_memchr(str12, 'w', 22));
	
	printf("\n*******************************************************\n");
	printf("7. FT_MEMCMP TEST \n");
	
	char str13[] = "abcDef";
	char str14[] = "abcdEf";
	printf("STR1: %s STR2: %s\n", str13, str14);
	printf("EXPECTED (-32): %d\n", ft_memcmp(str13, str14, 5));

	printf("\n*******************************************************\n");
	printf("8. FT_STRLEN TEST \n");

	printf("empty string EXPECTED (0): %lu \n", ft_strlen(""));
	printf("10 const characters EXPECTED(10): %lu \n", ft_strlen("0123456789"));
	printf("30 const characters EXPECTED (30): %lu \n", ft_strlen("012345678901234567890123456789"));

	printf("\n*******************************************************\n");
	printf("9. FT_STRDUP TEST \n");
	
	const char *orginal;
	const char *duplicate;

	orginal = "ORGINAL\0";
	duplicate = ft_strdup(orginal);

	printf("org is ORGINAL: %s\n", orginal);
	printf("dup is EXPECTED (ORGINAL): %s\n", duplicate);

	const char *empty = NULL;

	printf("orginal is NULL/EXPECTED (null): %s\n", ft_strdup(empty));

	printf("\n*******************************************************\n");
	printf("10. FT_STRCPY TEST \n");

	const char *source = "SOURCE";
	char dest[] = "DESTINATION";

	ft_strcpy(dest, source);

	printf("source is: %s\n", source);
	printf("DESTINATION/ EXPECTED (SOURCE): %s\n", dest);

	printf("source is NULL/EXPECTED (null): %s\n", ft_strcpy(dest, empty));

	printf("\n*******************************************************\n");
	printf("11. FT_STRNCPY TEST \n");

	source = "source";
	char dest2[] = "DESTINATION";

	ft_strncpy(dest2, source, 5);

	printf("source is: %s\n", source);
	printf("DESTINATION/ EXPECTED (sourcNATION): %s\n", dest2);

	ft_strncpy(dest2, source, 10);

	printf("source is less than len char long EXPECTED (source): %s\n", dest2);

	printf("\n*******************************************************\n");
	printf("12. FT_STRCAT TEST \n");
	
	char str1[] = "Hello";
	char str2[] = "World!";
	printf("s1: %s s2: %s\n", str1, str2);
	printf("EXPECTED (HelloWorld!): %s\n", ft_strcat(str1, str2));

	printf("\n*******************************************************\n");
	printf("13. FT_STRNCAT TEST \n");
	
	char str3[] = "Hello";
	char str4[] = "World!";
	printf("s1: %s s2: %s\n", str3, str4);
	printf("EXPECTED (HelloWor): %s\n", ft_strncat(str3, str4, 3));

	printf("\n*******************************************************\n");
	printf("14. FT_STRLCAT TEST \n");
	
	char dst5[] = "Hellou";
	char src6[] = "World!";
	size_t n;
	n = 6;
	printf("s1: %s s2: %s dstsize: %zu\n", dst5, src6, n);
	printf("EXPECTED (12): %zu\n", ft_strlcat(dst5, src6, n));
	printf("REAL EXPECTED (12): %zu\n", strlcat(dst5, src6, n));

	printf("\n*******************************************************\n");
	printf("15. FT_STRCHR TEST \n");

	const char *str;

	str = "Hive is a nice school";
	printf("str: %s char: 'c'\n", str);
	printf("EXPECTED ('ce school'): %s\n", ft_strchr(str, 'c'));
	printf("EXPECTED (adress to '\\0' character): %p\n", ft_strchr(str, '\0'));
	printf("Char not found EXPECTED (null): %s\n", ft_strchr(str, 'x'));

	printf("\n*******************************************************\n");
	printf("16. FT_STRRCHR TEST \n");

	printf("str: %s char: 'c'\n", str);
	printf("EXPECTED ('chool'): %s\n", ft_strrchr(str, 'c'));
	printf("EXPECTED (adress to '\\0' character): %p\n", ft_strrchr(str, '\0'));
	printf("Char not found EXPECTED (null): %s\n", ft_strrchr(str, 'x'));

	printf("\n*******************************************************\n");
	printf("17. FT_STRSTR TEST \n");
   
	printf("Haystack: %s Needle: nice\n", str);
	printf("EXPECTED (nice school): %s\n", ft_strstr(str, "nice"));
	printf("Needle not found EXPECTED (null): %s\n", ft_strstr(str, "notfound"));
	printf("Needle is empty EXPECTED (Hive is a nice school): %s\n", ft_strstr(str, ""));

	printf("\n*******************************************************\n");
	printf("18. FT_STRNSTR TEST \n");

	printf("Haystack: %s Needle: nice\n", str);
	printf("EXPECTED (nice school): %s\n", ft_strnstr(str, "nice", 14));
	printf("REAL function (nice school): %s\n", strnstr(str, "nice", 14));
	printf("Needle not found EXPECTED (null): %s\n", ft_strnstr(str, "notfound", 5));
	printf("Needle is empty EXPECTED (Hive is a nice school): %s\n", ft_strnstr(str, "", 5));

	printf("\n*******************************************************\n");
	printf("19. FT_STRCMP TEST \n");
	
	const char *s1 = "ABCDEFG";
	const char *s2 = "abcdefg";
	
	printf("str1 is less than str2 EXPECTED (-32): %d \n", ft_strcmp(s1, s2));
	
	s1 = "abcdefg";
	s2 = "ABCDEFG";
	
	printf("str2 is less than str1 EXPECTED (32): %d \n", ft_strcmp(s1, s2));

	s1 = "abcdefg";
	s2 = "abcdefg";
	
	printf("str1 is equal to str2 EXPECTED (0): %d \n", ft_strcmp(s1, s2));

	printf("\n*******************************************************\n");
	printf("20. FT_STRNCMP TEST \n");

	s1 = "abcdEfg";
	s2 = "abcdefg";

	printf("str1 is equal to str2 EXPECTED (0): %d \n", ft_strncmp(s1, s2, 4));
	printf("str1 is less than str2 EXPECTED (-32): %d \n", ft_strncmp(s1, s2, 5));

	s1 = "abcdefg";
	s2 = "abcdefg";
	printf("str1 is equal to str2 EXPECTED (0): %d \n", ft_strncmp(s1, s2, 10));

	printf("\n*******************************************************\n");
	printf("21. FT_ATOI TEST \n");

	printf("characters '--' EXPECTED (0): %d \n", ft_atoi("--134542"));
	printf("whitespaces and '+' EXPECTED (134542): %d \n", ft_atoi(" 	\n +134542"));
	printf("whitespaces and '-' EXPECTED (-134542: %d \n", ft_atoi(" 	\n -134542"));
	printf("maximum negative int EXPECTED (-2147483648): %d \n", ft_atoi("-2147483648"));

	printf("\n*******************************************************\n");
	printf("22. FT_ISALPHA TEST \n");
	
	unsigned char c;
    c = 'Q';
    printf("Result when uppercase alphabet is passed EXPECTED (1): %d \n", ft_isalpha(c));
    c = 'q';
    printf("Result when lowercase alphabet is passed EXPECTED (1): %d \n", ft_isalpha(c));
    c='+';
    printf("Result when non-alphabetic character is passed EXPECTED (0): %d \n", ft_isalpha(c));
	c=' ';
    printf("Result when whitespace character is passed EXPECTED (0): %d \n", ft_isalpha(c));

	printf("\n*******************************************************\n");
	printf("23. FT_ISDIGIT TEST \n");
	
    c = '9';
    printf("Result when number is passed EXPECTED (1): %d \n", ft_isdigit(c));
    c = 'r';
    printf("Result when lowercase alphabet is passed EXPECTED (0): %d \n", ft_isdigit(c));
    c='+';
    printf("Result when non-alphabetic character is passed EXPECTED (0): %d \n", ft_isdigit(c));

	printf("\n*******************************************************\n");
	printf("24. FT_ISALNUM TEST \n");
	
    c = '9';
    printf("Result when number is passed EXPECTED (1): %d \n", ft_isalnum(c));
    c = 'r';
    printf("Result when lowercase alphabet is passed EXPECTED (1): %d \n", ft_isalnum(c));
	c = 'Q';
    printf("Result when uppercase alphabet is passed EXPECTED (1): %d \n", ft_isalnum(c));
    c='+';
    printf("Result when non-alphabetic character is passed EXPECTED (0): %d \n", ft_isalnum(c));

	printf("\n*******************************************************\n");
	printf("25. FT_ISASCII TEST \n");

	int d;

	d = 0;
    printf("Result when null is passed EXPECTED (1): %d \n", ft_isascii(d));
    d = 64;
    printf("Result when @ -character is passed EXPECTED (1): %d \n", ft_isascii(d));
	d = 142;
    printf("Result when 'Ä' is passed EXPECTED (0): %d \n", ft_isascii(d));

	printf("\n*******************************************************\n");
	printf("26. FT_ISPRINT TEST \n");

	d = 0;
    printf("Result when null is passed EXPECTED (0): %d \n", ft_isprint(d));
	d = 64;
    printf("Result when @ -character is passed EXPECTED (1): %d \n", ft_isprint(d));
	d = 142;
    printf("Result when 'Ä' is passed EXPECTED (0): %d \n", ft_isprint(d));

	printf("\n*******************************************************\n");
	printf("27. FT_TOUPPER TEST \n");

	printf("EXPECTED (Z): %c\n", ft_toupper('z'));
	printf("EXPECTED (A): %c\n", ft_toupper('A'));

	printf("\n*******************************************************\n");
	printf("28. FT_TOLOWER TEST \n");

	printf("EXPECTED (z): %c\n", ft_tolower('Z'));
	printf("EXPECTED (a): %c\n", ft_tolower('a'));

	printf("\n*******************************************************\n");
	printf("FT_MEMALLOC TEST \n");

	char *str7;
	str7 = ft_memalloc(5);
	printf("EXPECTED (): %s\n", str7);

	printf("\n*******************************************************\n");
	printf("FT_STRCLR TEST \n");

	char clrstr[] = "empty this";
	printf("str is: '%s'\n", clrstr);
 	ft_strclr(clrstr);
	printf("EXPECTED (): %s\n", clrstr);

	printf("\n*******************************************************\n");
	printf("FT_STRITER TEST \n");

	char str8[] = "12345";
	ft_striter(str8, &putx);
	printf("EXPECTED (xxxxx): %s\n", str8);

	printf("\n*******************************************************\n");
	printf("FT_STRITERI TEST \n");

	char str9[] = "12345";
	ft_striteri(str9, &puty2);
	printf("EXPECTED (yyyyy): %s\n", str9);


	printf("\n*******************************************************\n");
	printf("FT_PUTCHAR TEST \n");
	printf("EXPECTED (z):\n");
	ft_putchar('z');

	printf("\n*******************************************************\n");
	printf("FT_PUTSTR TEST \n");
	printf("EXPECTED (abscdefg!@#2434):\n");

	ft_putstr("abscdefg!@#2434");

	printf("\n*******************************************************\n");
	printf("FT_PUTENDL TEST \n");
	
	printf("EXPECTED (abscdefg!@#2434) and linebreak:\n");
	ft_putendl("abscdefg!@#2434");

	printf("\n*******************************************************\n");
	printf("FT_PUTNBR TEST \n");

	printf("maximum negative int EXPECTED (-2147483648):\n");
	ft_putnbr(-2147483648);

	printf("\n*******************************************************\n");
	printf("FT_PUTCHAR_FD TEST \n");

	printf("EXPECTED (Z):\n");
	ft_putchar_fd('Z', 1);

	printf("\n*******************************************************\n");
	printf("FT_PUTSTR_FD TEST \n");
	
	printf("EXPECTED (ABCD123!@#):\n");
	ft_putstr_fd("ABCD123!@#", 1);

	printf("\n*******************************************************\n");
	printf("FT_PUTENDL_FD TEST \n");
	
	printf("EXPECTED (abscdefg!@#2434) and linebreak:\n");
	ft_putendl_fd("abscdefg!@#2434", 1);
	
	printf("\n*******************************************************\n");
	printf("FT_PUTNBR_FD TEST \n");

	printf("maximum negative int EXPECTED (-2147483648):\n");
	ft_putnbr_fd(-2147483648, 1);

	return (0);
}
