void reverse(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n/2; i++) {
        char k = s[i];
        s[i] = s [n - 1 - i] ;
        s[n - 1 -i] = k;
    }
}
