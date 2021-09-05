void ft_rev_int_tab(int *tab, int size){
    int temp;
    int i = 0;
    int j = size - 1;

    while(i < j){
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;

        i++;
        j--;
    }
}
