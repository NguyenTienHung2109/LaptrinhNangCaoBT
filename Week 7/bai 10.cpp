void rFilter(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if(s[i] <= 'z' && s[i] >= 'a')
        {
            continue;
        }
        else if(s[i] <= 'Z' && s[i] >='A')
        {
            continue;
        }
        else
        {
            s[i] = '_';
        }
    }

}
