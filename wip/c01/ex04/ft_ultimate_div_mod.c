void ft_ultimate_div_mod(int *a, int *b){
    int temp1, temp2;

    temp1 = *a;
    temp2 = *b;

    *a = temp1 / temp2;
    *b = temp1 % temp2;
}
