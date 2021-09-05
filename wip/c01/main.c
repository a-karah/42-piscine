void ft_putchar(char c);
void ft_putnbr(int nb);
void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *y, int *z);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

int main(){
    //Declaration
    int a, b, c, d;
    int *x, *y, *z;
    int *div, *mod;
    int *n1;
    int **n2;
    int ***n3;
    int ****n4;
    int *****n5;
    int ******n6;
    int *******n7;
    int ********n8;
    int *********nbr;

    //Assigning
    //ex00
    a = 10;
    x = &a;

    //ex01
    b = 5;
    n1 = &b;
    n2 = &n1;
    n3 = &n2;
    n4 = &n3;
    n5 = &n4;
    n6 = &n5;
    n7 = &n6;
    n8 = &n7;
    nbr = &n8;

    //ex02
    c = 12; d = 34;
    y = &c; z = &d;

    //Code Test
    //ex00
    ft_ft(x);
    ft_putnbr(*x);
    ft_putchar('\n');

    //ex01
    ft_ultimate_ft(nbr);
    ft_putnbr(*********nbr);
    ft_putchar('\n');

    //ex02
    ft_putnbr(*y);
    ft_putnbr(*z);
    ft_putchar('\n');
    ft_swap(y, z);
    ft_putnbr(*y);
    ft_putnbr(*z);
    ft_putchar('\n');

    //ex03
    div = &c; mod = &d;
    ft_div_mod(c, d, div, mod);
    ft_putnbr(*div);
    ft_putchar('\t');
    ft_putnbr(*mod);
    ft_putchar('\n');

    //ex04
    ft_putnbr(*y);
    ft_putchar('\t');
    ft_putnbr(*z);
    ft_putchar('\n');
    ft_ultimate_div_mod(y, z);
    ft_putnbr(*y);
    ft_putchar('\t');
    ft_putnbr(*z);
    ft_putchar('\n');

    //ex05
    char text[] = "Hello, World\n";
    ft_putstr(text);

    //ex06
    int len = ft_strlen(text);
    ft_putnbr(len);
    ft_putchar('\n');

    //ex07
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    for(int i = 0; i < size; i++){
        ft_putnbr(arr[i]);
        ft_putchar('\t');
    }

    ft_putchar('\n');

    ft_rev_int_tab(arr, size);

    for(int i = 0; i < size; i++){
        ft_putnbr(arr[i]);
        ft_putchar('\t');
    }

    ft_putchar('\n');

    //ex08
    int arr2[] = {4, 2, 3, 5, 9, 0};
    int size2 = 6;

    for(int i = 0; i < size2; i++){
        ft_putnbr(arr2[i]);
        ft_putchar('\t');
    }

    ft_putchar('\n');
    ft_sort_int_tab(arr2, size2);

    for(int i = 0; i < size2; i++){
        ft_putnbr(arr2[i]);
        ft_putchar('\t');
    }

    ft_putchar('\n');
}
