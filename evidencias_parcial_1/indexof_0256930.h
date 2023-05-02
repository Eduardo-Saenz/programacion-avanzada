int indexOf(char palabra[], char letra)
{
    int index{-1};
    for (int i; i < sizeof(palabra); i++)
    {
        if (palabra[i] == letra)
        {
            return i;
        }
    }
    return -1;
}