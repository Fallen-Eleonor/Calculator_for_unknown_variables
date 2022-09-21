void mx_printchar(char c);

void mx_printint(int n) {
    int c2[1488];
    int c1= 0;
    if(n==0) {
        mx_printchar('0');
    }
    if (n < 0) {
        n *= -1;
        mx_printchar('-');
    }
    while (n != 0) {
        c2[c1] = n % 10;
        n /= 10;
        c1++;
    }
    for (int i = c1 - 1; i >= 0; i--) {
        mx_printchar(c2[i] + 48);
    }
}


