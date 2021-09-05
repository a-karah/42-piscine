#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);

int main(void){
    //ex00
    char src[] = "Hello, World!";
    char dest[] = "Change me, please!!!";
    char *changed;

    printf("Before:\tsrc: %s\tdest: %s\n", src, dest);
    //changed = ft_strcpy(dest, src);
    changed = strcpy(dest, src);
    printf("After:\tsrc: %s\tdest: %s\ndest orig: %s\n", src, changed, dest); 

    //ex01
    char src1[] = "hello";
    char dest1[] = "Placeholder";
    char *chang1;

    printf("Before:\tsrc: %s\tdest: %s\n", src1, dest1);
    chang1 = ft_strncpy(dest1, src1, 3);
    //chang1 = strncpy(dest1, src1, 3);
    printf("After:\tsrc: %s\tdest: %s\ndest orig: %s\n", src1, chang1, dest1); 

    //ex02
    char empty[] = "";
    int out, out1, out2;
    
    out = ft_str_is_alpha(changed);
    out1 = ft_str_is_alpha(chang1);
    out2 = ft_str_is_alpha(chang1);
    printf("string is: %s\t%d\n", changed, out);
    printf("string is: %s\t%d\n", chang1, out1);
    printf("string is: %s\t%d\n", empty, out2);

    //ex03
    char num[] = "12012";
    char num1[] = "12012a";

    out = ft_str_is_numeric(changed);
    printf("string is: %s\t%d\n", changed, out);
    out = ft_str_is_numeric(num);
    printf("string is: %s\t%d\n", num, out);
    out = ft_str_is_numeric(num1);
    printf("string is: %s\t%d\n", num1, out);

    //ex04
    out = ft_str_is_lowercase(chang1);
    printf("string is: %s\t%d\n", chang1, out);

    //ex05
    out = ft_str_is_uppercase(chang1);
    printf("string is: %s\t%d\n", chang1, out);

    return 0;
}
