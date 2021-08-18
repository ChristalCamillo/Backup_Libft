#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** ------------------------ PART 1 - LIBC FUNCTIONS ---------------------------
**
** --- MEMORY FUNCTIONS ---
*/
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t count);
void				*ft_memset(void *b, int c, size_t len);
/*
** --- STRING EXAMINATION FUNCTIONS ---
*/
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *s);
/*
** --- STRING MANIPULATION FUNCTIONS ---
*/
char				*ft_strdup(const char *s1);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
/*
** --- CHARACTER CLASSIFICATION FUNCTIONS ---
*/
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
/*
** --- CHARACTER CONVERSION FUNCTIONS ---
*/
int					ft_tolower(int c);
int					ft_toupper(int c);
/*
** --- NUMERIC CONVERSION FUNCTIONS ---
*/
int					ft_atoi(const char *str);
/*
** ------------------------ PART 2 - ADDITIONAL FUNCTIONS ---------------------
**
** --- MEMORY FUNCTIONS ---
*/
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memset(void *buffer, int c, size_t len);
/*
** --- NUMERIC CONVERSION FUNCTIONS ---
*/
char				*ft_itoa(int n);
char				*ft_itoa_base(int n, int base);
int					ft_atoi_base(const char *str, int base);
int					ft_numdig(int n, int base);
/*
** --- STRING MANIPULATION FUNCTIONS ---
*/
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strnew(size_t size);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				**ft_split(char const *s, char c);
void				ft_strdel(char **str);
void				ft_strclr(char *str);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
#endif