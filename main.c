/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spena-mu <spena-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:33:46 by spena-mu          #+#    #+#             */
/*   Updated: 2022/02/11 16:03:10 by spena-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	printf("test isalnum mala %d \n", ft_isalnum('='));
	printf("test isalnum buena %d \n\n", ft_isalnum('k'));


	printf("test isalpha mala %d \n", ft_isalpha('4'));
	printf("test isalpha buena %d \n\n", ft_isalpha('k'));


	printf("test isascii buena %d \n\n", ft_isascii('='));


	printf("test isdigit mala %d \n", ft_isdigit('i'));
	printf("test isdigit buena %d \n\n", ft_isdigit('5'));


	printf("test isprint buena %d \n\n", ft_isprint('a'));


	char *stringstrlcpy = "abcdef";
	char string2strlcpy[6];
	ft_strlcpy(string2strlcpy, stringstrlcpy, 4);
	printf("test strlcpy, con string de origen %s pasando como parametro 4 es: %s \n\n", stringstrlcpy, string2strlcpy);
	

	char dststrlcat[20] = "123";
	char srcstrlcat[] = "4567890";
	size_t dstsizestrlcat = 6;
	size_t resultstrlcat;
	printf("test strlcat dst es: %s. src es: %s y dstsize es: %zu\n", dststrlcat, srcstrlcat, dstsizestrlcat);
	resultstrlcat = strlcat(dststrlcat, srcstrlcat, dstsizestrlcat);
	printf("test strlcat dst concatenado es : %s y el tamano de las cadenas del concatenado con strlcat es: %zu\n\n", dststrlcat, resultstrlcat);
	
	
	char *stringstrlen = "numbers";
	int numberstrlen;
	numberstrlen = ft_strlen(stringstrlen);
	printf("test strlen de la palabra numbers es: %d \n\n", numberstrlen);


	printf("test tolower buena %c \n\n", ft_tolower('A'));


	printf("test toupper buena %c \n\n", ft_toupper('a'));


	char *stringatoi = "  -45";
	printf("test atoi %d\n\n", ft_atoi(stringatoi));

	printf("test atoi %d\n\n", atoi(stringatoi));

	
	char s1[] = "Nada a ver";
	char s2[] = "igual hasta aca";
	char s3[] = "igual diferente";
	printf("test strncmp  con n=5 s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d\n\n", ft_strncmp(s1, s2, 5), ft_strncmp(s2, s1, 5), ft_strncmp(s1, s3, 5), ft_strncmp(s3, s1, 5), ft_strncmp(s2, s3, 5), ft_strncmp(s3, s2, 5));
	
	
	char memsetb[] = "casadeperro";
	int memsetc;
	memsetc = 'a';
	printf("test memset %s\n\n", ft_memset(memsetb, memsetc, 5));


	char bzeros[] = "montanademar";
	ft_bzero(bzeros, 4);
	printf("test funcion bzero %s\n\n", bzeros);


	char srcmemcpy[] = "dragon";
	char dstmemcpy[] = "spiderman";
	printf("test memcpy %s\n\n", ft_memcpy(dstmemcpy, srcmemcpy, 6));


    int resultmemcmp = 0;
    resultmemcmp = ft_memcmp("abc","abc",2);
    printf("test memcmp cuando las dos cadenas son iguales hasta n da cero:  %d\n",resultmemcmp);
    resultmemcmp = ft_memcmp("bca","abc",2);
    printf("test memcmp cuando la primer cadena es mayor que la segunda hasta n da uno: %d\n",resultmemcmp);
    resultmemcmp = ft_memcmp("abc","bca",2);
    printf("test memcmp cuando la primer cadena es menor que la segunda hasta n da menos uno: %d\n\n",resultmemcmp);
 
	
	char strmemchr[] = "pancarta";
    char *ptr = ft_memchr(strmemchr,'c',sizeof(strmemchr));
    if (ptr != NULL)
    printf ("test memchr buscando 'c' en pancarta es:  %s\n\n", ptr);


	char sstrchr[] = "asteroide";
	int cstrchr = 't';
	printf("test strchr con strlen de asteroide en 't' %s\n\n", ft_strchr(sstrchr, cstrchr));


	char sstrrchr[] = "terrateniente";
	int cstrrchr = 't';
	printf("test strrchr encuentra la ultima t de terrateniente:  %s\n\n", ft_strrchr(sstrrchr, cstrrchr));


	char sstrnstr[] = "santiagofelipe";
	char cstrnstr[] = "felipe";
	printf("test strnstr encuentra felipe en santiagofelipe: %s\n\n",ft_strnstr(sstrnstr, cstrnstr, sizeof(sstrnstr)));


	char smemmove[] = "jovenes";
	char cmemmove[] = "macias";
	printf("test memmove entre santiago y felipe arroja feliiago con 3: %s\n\n", ft_memmove(smemmove, cmemmove, 3));



	char *cadenacalloc;
	cadenacalloc = ft_calloc(4,sizeof(char));
	printf("test calloc devuelve los ceros almacenados en el espacio: %s\n\n", cadenacalloc);


	char strstrdup[] = "coparuno";
	printf("test strdup de coparuno guarda una copa del tamano de la str:  %s\n\n", ft_strdup(strstrdup));
   


	char strsubstr[] = "cadenaoriginal";
	printf("test substr de cadenaoriginal con len 4 start 2: %s\n\n", ft_substr(strsubstr, 2, 4));	
  

	char strstrjoin1[] = "string1";
	char strstrjoin2[] = "string2";
	printf("test strjoin de string1 y string2: %s\n\n", ft_strjoin(strstrjoin1, strstrjoin2));


	char strtrims1[] = "completo";
	char strtrims2[] = "ple";
	printf("test strtrim palabra completo se le pasa ple: %s\n\n", ft_strtrim(strtrims1, strtrims2));


	int n;
	n = 4;
	printf("test itoa con 4: %s\n\n", ft_itoa(4));



	t_list *milista;
	char *primere= "casa";
	char *new = "new";
	t_list *neww;
	milista = ft_lstnew(primere);
	neww = (t_list *)malloc(sizeof(t_list));
	neww->content = new;
	neww->next = NULL;
	ft_lstadd_front(&milista, neww);
	while (milista)
	{
		printf("ft_lstadd_front es igual a : %s\n\n",(char *)milista->content);
		milista = milista->next;
	}

	
	printf("ft_lstsize devuelve : %d", ft_lstsize(*milista));



	return (0);	
}
