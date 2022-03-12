bool isPrime (int number) {
    if (number < 2) {
        return false;
    } else if (number == 2)
    {
        return true;
    }
    else
    {
        for (int i = 3; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
            return false;
            }
        }
    }
    return true;
}
