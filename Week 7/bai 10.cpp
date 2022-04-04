void rFilter(char *s) {
    int n = strlen(s);
    for (int i = n-1; i >= 0; i--)
    {
        if(s[i] <= 'z' && s[i] >= 'a')
        {
            break;
        }
        else if(s[i] <= 'Z' && s[i] >='A')
        {
            break;
        }
        else
        {
            s[i] = '_';
        }
    }

}
