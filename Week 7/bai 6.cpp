int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2)
{
    int* a = new int[lenArr1 + lenArr2];
    bool ktra;
    for(int i=0;i<lenArr1;i++)
    {
        if(firstArr[i] < firstArr[i+1])
        {
            ktra = true;
            break;
        }
        else if(firstArr[i] > firstArr[i+1])
        {
            ktra = false;
            break;
        }
    }
    for(int i=0;i<lenArr1;i++)
    {
        a[i] = firstArr[i];
    }
    for(int i=0;i<lenArr2;i++)
    {
        a[i+lenArr1] = secondArr[i];
    }
    sort(a,a + lenArr1 + lenArr2);
    if(ktra)
    {
        return a;
    }
    else
    {
        for(int i=0;i<(lenArr1 + lenArr2)/2;i++)
        {
            swap(a[i],a[lenArr1 + lenArr2 -1-i]);
        }
        return a;
    }

}
