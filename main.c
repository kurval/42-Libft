/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 09:35:05 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/31 11:26:18 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

static char	retx(char c)
{
	c = 'x';
	return (c);
}

static char	retx2(unsigned int n, char c)
{
	n = 0;
	c = 'x';
	return (c);
}


static void	putx(char *s)
{
	*s = 'x';
}

static void puty2(unsigned int n, char *s)
{
	n = 0;
	s[n] = 'y';
}

void	del_cont(void *content, size_t n)
{
	(void)n;
	free(content);
}

int	main(void)
{

	printf(ANSI_COLOR_GREEN "\nPART 1 - LIBC FUNCTIONS\n\n" ANSI_COLOR_RESET);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(1) FT_MEMSET TEST \n");

	char memstr[] = "Hello world!";
	printf("String is: %s\n", memstr);
	printf("EXPECTED (......world!): %s\n", ft_memset(memstr, '.', 6));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);

	printf("(2) FT_BZERO TEST \n");

	char zerostr[] = "Helloworld!";
	printf("String is: %s\n", zerostr);
	ft_bzero(zerostr, 4);
	printf("EXPECTED (): %c\n", zerostr[3]);
	printf("EXPECTED (o): %c\n", zerostr[4]);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);

	printf("(3) FT_MEMCPY TEST \n");

	char dest5[] = "Hellou";
	char sour2[] = "World!";
	printf("Dest is: %s\n", dest5);
	printf("Source is: %s\n", sour2);
	printf("EXPECTED (Wollou): %s\n", ft_memcpy(dest5, sour2, 2));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(4) FT_MEMCCPY TEST \n");

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

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(5) FT_MEMMOVE TEST \n");

	char str11[] = "abcde";
	printf("Dest is: %s\n", str11);
	ft_memmove(str11+2, str11, 3);
	printf("EXPECTED (ababc): %s\n", str11);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(6) FT_MEMCHR TEST \n");

	char str10[] = "Hive is a nice school!";
	printf("STR: %s\n", str10);
	printf("EXPECTED 'c' (ce school!): %s\n", ft_memchr(str10, 'c', 22));

	char str12[] = "Hive is a nice school!";
	printf("STR: %s\n", str12);
	printf("EXPECTED not found 'w' (null): %s\n", ft_memchr(str12, 'w', 22));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(7) FT_MEMCMP TEST \n");

	char str13[] = "abcDef";
	char str14[] = "abcdEf";
	printf("STR1: %s STR2: %s\n", str13, str14);
	printf("EXPECTED (-32): %d\n", ft_memcmp(str13, str14, 5));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(8) FT_STRLEN TEST \n");

	printf("empty string EXPECTED (0): %lu \n", ft_strlen(""));
	printf("10 const characters EXPECTED(10): %lu \n", ft_strlen("0123456789"));
	printf("30 const characters EXPECTED (30): %lu \n", ft_strlen("012345678901234567890123456789"));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(9) FT_STRDUP TEST \n");

	const char *orginal;
	const char *duplicate;

	orginal = "ORGINAL\0";
	duplicate = ft_strdup(orginal);

	printf("org is ORGINAL: %s\n", orginal);
	printf("dup is EXPECTED (ORGINAL): %s\n", duplicate);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(10) FT_STRCPY TEST \n");

	const char *source = "SOURCE";
	char dest[] = "DESTINATION";

	ft_strcpy(dest, source);

	printf("source is: %s\n", source);
	printf("DESTINATION/ EXPECTED (SOURCE): %s\n", dest);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(11) FT_STRNCPY TEST \n");

	source = "source";
	char dest2[] = "DESTINATION";

	ft_strncpy(dest2, source, 5);

	printf("source is: %s\n", source);
	printf("DESTINATION/ EXPECTED (sourcNATION): %s\n", dest2);

	ft_strncpy(dest2, source, 10);

	printf("source is less than len char long EXPECTED (source): %s\n", dest2);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(12) FT_STRCAT TEST \n");

	char str1[] = "Hello";
	char str2[] = "World!";
	printf("s1: %s s2: %s\n", str1, str2);
	printf("EXPECTED (HelloWorld!): %s\n", ft_strcat(str1, str2));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(13) FT_STRNCAT TEST \n");

	char str3[] = "Hello";
	char str4[] = "World!";
	printf("s1: %s s2: %s\n", str3, str4);
	printf("EXPECTED (HelloWor): %s\n", ft_strncat(str3, str4, 3));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(14) FT_STRLCAT TEST \n");

	char dst5[] = "Hellou";
	char src6[] = "World!";
	size_t n;
	n = 6;
	printf("s1: %s s2: %s dstsize: %zu\n", dst5, src6, n);
	printf("EXPECTED (12): %zu\n", ft_strlcat(dst5, src6, n));
	printf("REAL EXPECTED (12): %zu\n", strlcat(dst5, src6, n));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(15) FT_STRCHR TEST \n");

	const char *str;

	str = "Hive is a nice school";
	printf("str: %s char: 'c'\n", str);
	printf("EXPECTED ('ce school'): %s\n", ft_strchr(str, 'c'));
	printf("EXPECTED (adress to '\\0' character): %p\n", ft_strchr(str, '\0'));
	printf("Char not found EXPECTED (null): %s\n", ft_strchr(str, 'x'));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(16) FT_STRRCHR TEST \n");

	printf("str: %s char: 'c'\n", str);
	printf("EXPECTED ('chool'): %s\n", ft_strrchr(str, 'c'));
	printf("EXPECTED (adress to '\\0' character): %p\n", ft_strrchr(str, '\0'));
	printf("Char not found EXPECTED (null): %s\n", ft_strrchr(str, 'x'));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(17) FT_STRSTR TEST \n");

	printf("Haystack: %s Needle: nice\n", str);
	printf("EXPECTED (nice school): %s\n", ft_strstr(str, "nice"));
	printf("Needle not found EXPECTED (null): %s\n", ft_strstr(str, "notfound"));
	printf("Needle is empty EXPECTED (Hive is a nice school): %s\n", ft_strstr(str, ""));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(18) FT_STRNSTR TEST \n");

	printf("Haystack: %s Needle: nice\n", str);
	printf("EXPECTED (nice school): %s\n", ft_strnstr(str, "nice", 14));
	printf("REAL function (nice school): %s\n", strnstr(str, "nice", 14));
	printf("Needle not found EXPECTED (null): %s\n", ft_strnstr(str, "notfound", 5));
	printf("Needle is empty EXPECTED (Hive is a nice school): %s\n", ft_strnstr(str, "", 5));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(19) FT_STRCMP TEST \n");

	const char *s1 = "ABCDEFG";
	const char *s2 = "abcdefg";

	printf("str1 is less than str2 EXPECTED (-32): %d \n", ft_strcmp(s1, s2));

	s1 = "abcdefg";
	s2 = "ABCDEFG";

	printf("str2 is less than str1 EXPECTED (32): %d \n", ft_strcmp(s1, s2));

	s1 = "abcdefg";
	s2 = "abcdefg";

	printf("str1 is equal to str2 EXPECTED (0): %d \n", ft_strcmp(s1, s2));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(20) FT_STRNCMP TEST \n");

	s1 = "abcdEfg";
	s2 = "abcdefg";

	printf("str1 is equal to str2 EXPECTED (0): %d \n", ft_strncmp(s1, s2, 4));
	printf("str1 is less than str2 EXPECTED (-32): %d \n", ft_strncmp(s1, s2, 5));

	s1 = "abcdefg";
	s2 = "abcdefg";
	printf("str1 is equal to str2 EXPECTED (0): %d \n", ft_strncmp(s1, s2, 10));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(21) FT_ATOI TEST \n");

	printf("characters '--' EXPECTED (0): %d \n", ft_atoi("--134542"));
	printf("whitespaces and '+' EXPECTED (134542): %d \n", ft_atoi(" 	\n +134542"));
	printf("whitespaces and '-' EXPECTED (-134542: %d \n", ft_atoi(" 	\n -134542"));
	printf("maximum negative int EXPECTED (-2147483648): %d \n", ft_atoi("-2147483648"));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(22) FT_ISALPHA TEST \n");

	unsigned char c;
    c = 'Q';
    printf("Result when uppercase alphabet is passed EXPECTED (1): %d \n", ft_isalpha(c));
    c = 'q';
    printf("Result when lowercase alphabet is passed EXPECTED (1): %d \n", ft_isalpha(c));
    c='+';
    printf("Result when non-alphabetic character is passed EXPECTED (0): %d \n", ft_isalpha(c));
	c=' ';
    printf("Result when whitespace character is passed EXPECTED (0): %d \n", ft_isalpha(c));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(23) FT_ISDIGIT TEST \n");

    c = '9';
    printf("Result when number is passed EXPECTED (1): %d \n", ft_isdigit(c));
    c = 'r';
    printf("Result when lowercase alphabet is passed EXPECTED (0): %d \n", ft_isdigit(c));
    c='+';
    printf("Result when non-alphabetic character is passed EXPECTED (0): %d \n", ft_isdigit(c));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(24) FT_ISALNUM TEST \n");

    c = '9';
    printf("Result when number is passed EXPECTED (1): %d \n", ft_isalnum(c));
    c = 'r';
    printf("Result when lowercase alphabet is passed EXPECTED (1): %d \n", ft_isalnum(c));
	c = 'Q';
    printf("Result when uppercase alphabet is passed EXPECTED (1): %d \n", ft_isalnum(c));
    c='+';
    printf("Result when non-alphabetic character is passed EXPECTED (0): %d \n", ft_isalnum(c));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(25) FT_ISASCII TEST \n");

	int d;

	d = 0;
    printf("Result when null is passed EXPECTED (1): %d \n", ft_isascii(d));
    d = 64;
    printf("Result when @ -character is passed EXPECTED (1): %d \n", ft_isascii(d));
	d = 142;
    printf("Result when 'Ä' is passed EXPECTED (0): %d \n", ft_isascii(d));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(26) FT_ISPRINT TEST \n");

	d = 0;
    printf("Result when null is passed EXPECTED (0): %d \n", ft_isprint(d));
	d = 64;
    printf("Result when @ -character is passed EXPECTED (1): %d \n", ft_isprint(d));
	d = 142;
    printf("Result when 'Ä' is passed EXPECTED (0): %d \n", ft_isprint(d));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(27) FT_TOUPPER TEST \n");

	printf("EXPECTED (Z): %c\n", ft_toupper('z'));
	printf("EXPECTED (A): %c\n", ft_toupper('A'));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(28) FT_TOLOWER TEST \n");

	printf("EXPECTED (z): %c\n", ft_tolower('Z'));
	printf("EXPECTED (a): %c\n", ft_tolower('a'));

	printf(ANSI_COLOR_GREEN "\nPART 2 - ADDITIONAL FUNCTIONS\n\n" ANSI_COLOR_RESET);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(29) FT_MEMALLOC TEST \n");

	char *str7 = ft_memalloc(5);

	if (str7 == NULL)
		printf("Couldn't allocate memory\n");
	else
		ft_memset(str7, 0, 5*sizeof(char));
		printf("Memory allocation succesful\n");

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(30) FT_MEMDEL TEST \n");

	char *del;
	del = ft_strdup("asdasdasd");
	printf("String is: %s\n", del);
	ft_memdel((void*)&del);
	printf("String is EXPECTED (null): %s\n", del);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(31) FT_STRNEW TEST \n");

	char *str40 = ft_strnew(5);

	if (str40 == NULL)
		printf("Couldn't allocate memory\n");
	else
		ft_memset(str40, 0, 5*sizeof(char));
		printf("Memory allocation succesful\n");

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(32) FT_STRDEL TEST \n");

	char *del1;
	del1 = ft_strdup("asdasdasd");
	printf("String is: %s\n", del1);
	ft_strdel(&del1);
	printf("String is EXPECTED (null): %s\n", del1);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(33) FT_STRCLR TEST \n");

	char clrstr[] = "empty this";
	printf("str is: '%s'\n", clrstr);
 	ft_strclr(clrstr);
	printf("EXPECTED (): %s\n", clrstr);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(34) FT_STRITER TEST \n");

	char str8[] = "12345";
	ft_striter(str8, &putx);
	printf("EXPECTED (xxxxx): %s\n", str8);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(35) FT_STRITERI TEST \n");

	char str9[] = "12345";
	ft_striteri(str9, &puty2);
	printf("EXPECTED (yyyyy): %s\n", str9);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(36) FT_STRMAP TEST \n");

	char str15[] = "12345";
	char *str16;
	str16 = ft_strmap(str15, &retx);
	printf("EXPECTED (xxxxx): %s\n", str16);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(37) FT_STRMAPI TEST \n");

	char str17[] = "12345";
	char *str18;
	str18 = ft_strmapi(str17, &retx2);
	printf("EXPECTED (xxxxx): %s\n", str18);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(38) FT_STREQU TEST \n");

	const char *s3 = "gfedcba";
	const char *s4 = "abcdefg";

	printf("str1 is differ than str2 EXPECTED (0): %d \n", ft_strequ(s3, s4));

	s3 = "abcdefg";
	s4 = "abcdefg";

	printf("str2 is equal with str1 EXPECTED (1): %d \n", ft_strequ(s3, s4));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(39) FT_STRENQU TEST \n");

	s3 = "gfedcba";
	s4 = "abcdefg";

	printf("str1 is differ than str2 EXPECTED (0): %d \n", ft_strnequ(s3, s4, 4));

	s3 = "abcdefg";
	s4 = "abcdyfg";

	printf("str2 is equal with str1 EXPECTED (1): %d \n", ft_strnequ(s3, s4, 4));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(40) FT_STRSUB TEST \n");

	char const *str50;
	str50 = "Hive is a nice school";
	printf("String is: %s\n", str50);

	printf("String is EXPECTED (is a nice): %s\n", ft_strsub(str50, 5, 9));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(41) FT_STRJOIN TEST \n");

	char const *str51;
	str51 = "Hive is a ";
	printf("String 1 is: %s\n", str51);

	char const *str52;
	str52 = "nice school";
	printf("String 2 is: %s\n", str52);
	printf("String is EXPECTED (Hive is is a nice scool): %s\n", ft_strjoin(str51, str52));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(42) FT_STRTRIM TEST \n");

	char str31[] = "\n\n  seppo 123\n	 \n  ";
	char *copy5;
	copy5 = ft_strtrim(str31);
	printf("EXPEXTED whitespaces (seppo 123): %s\n", copy5);
	char str32[] = "seppo 123";
	char *copy6;
	copy6 = ft_strtrim(str32);
	printf("EXPEXTED no whitespaces (seppo 123): %s", copy6);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(43) FT_STRSPLIT TEST \n");

	char **tab;
	char str33[] = "***seppoo***suppo**tuppo";
	int h;
	h = 0;
	tab = ft_strsplit(str33, '*');
	printf("EXPECTED \n(seppoo\nsuppo\ntuppo):\n");
	while (h < 3)
	{
		printf("%s\n", tab[h]);
		h++;
	}

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(44) FT_ITOA TEST \n");

	printf("EXPECTED (1): %s\n", ft_itoa(1));
	printf("EXPECTED (12): %s\n", ft_itoa(12));
	printf("EXPECTED (2147483647): %s\n", ft_itoa(2147483647));
	printf("EXPECTED (-2147483648): %s\n", ft_itoa(-2147483648));

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(45) FT_PUTCHAR TEST \n");

	printf("EXPECTED (z):\n");
	ft_putchar('z');

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(46) FT_PUTSTR TEST \n");
	printf("EXPECTED (abscdefg!@#2434):\n");

	ft_putstr("abscdefg!@#2434");

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(47) FT_PUTENDL TEST \n");

	printf("EXPECTED (abscdefg!@#2434) and linebreak:\n");
	ft_putendl("abscdefg!@#2434");

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(48) FT_PUTNBR TEST \n");

	printf("maximum negative int EXPECTED (-2147483648):\n");
	ft_putnbr(-2147483648);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(49) FT_PUTCHAR_FD TEST \n");

	printf("EXPECTED (Z):\n");
	ft_putchar_fd('Z', 1);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(50) FT_PUTSTR_FD TEST \n");

	printf("EXPECTED (ABCD123!@#):\n");
	ft_putstr_fd("ABCD123!@#", 1);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(51) FT_PUTENDL_FD TEST \n");

	printf("EXPECTED (abscdefg!@#2434) and linebreak:\n");
	ft_putendl_fd("abscdefg!@#2434", 1);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("(52)FT_PUTNBR_FD TEST \n");

	printf("maximum negative int EXPECTED (-2147483648):\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	printf("\n");

	printf(ANSI_COLOR_GREEN "\nBONUS PART\n\n" ANSI_COLOR_RESET);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("FT_LSTNEW TEST \n");

	void const *content;
	size_t content_size;

	t_list	*list;

	content = "Hive is a nice school!";
	content_size = 21;

	list = ft_lstnew(content, content_size);

	printf("New link EXPEXTED (Hive is a nice school): %s\n", list->content);

	content = NULL;
	list = ft_lstnew(content, content_size);

	printf("New link EXPEXTED (null): %s\n", list->content);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("FT_LSTDELONE TEST \n");

	t_list	*list2;

	content = "Hive";
	content_size = 4;

	list2 = ft_lstnew(content, content_size);

	ft_lstdelone(&list2, &del_cont);

	printf("New link EXPEXTED (0x0): %p\n", list2);

	printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("FT_LSTDEL TEST \n");

	t_list	*list3;
	t_list	*list4;
	t_list	*list5;

	content = "Hive";
	content_size = 4;

	list3 = ft_lstnew(content, content_size);

	content = "42";
	content_size = 2;

	list4 = ft_lstnew(content, content_size);

	content = "Haudi";
	content_size = 5;

	list5 = ft_lstnew(content, content_size);

	list3->next = list4;
	list4->next = list5;
	list5->next = NULL;

	ft_lstdel(&list3, &del_cont);

	printf("New link EXPEXTED (0x0): %p\n", list3);

printf(ANSI_COLOR_YELLOW "\n*******************************************************\n" ANSI_COLOR_RESET);
	printf("FT_LSTADD TEST \n");

	t_list	*head;
	t_list	*list6;
	t_list	*list7;

	content = "Head";
	content_size = 4;

	head = ft_lstnew(content, content_size);

	content = "Hive";
	content_size = 4;

	list6 = ft_lstnew(content, content_size);

	content = "Haudi";
	content_size = 5;

	list7 = ft_lstnew(content, content_size);

	head->next = list6;
	list6->next = list7;
	list7->next = NULL;

	printf("Head is before EXPEXTED (Head): %s\n", head->content);
	ft_lstadd(&head, list6);
	printf("Head is after EXPEXTED (Head): %s\n", head->content);

	return (0);
}
