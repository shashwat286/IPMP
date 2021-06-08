 bool isNumericChar(char x)
{
    return (x >= '0' && x <= '9') ? true : false;
}

int atoi(string str)
{
    if (str.empty())
        return -1;
    int res = 0;
    int sign = 1;
    int i = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; ++i)
    {
        if (isNumericChar(str[i]) == false)
            return -1;
        res = res * 10 + str[i] - '0';
    }
    return sign * res;
}