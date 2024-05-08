 char *result;
    int start = 0;
    int end;
    int i = 0;

    if (!s1 || !set)
        return NULL;

    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    end = ft_strlen(s1) - 1;
    while (end > start && ft_strchr(set, s1[end]))
        end--;

    result = (char *)malloc((end - start + 2) * sizeof(char));
    if (!result)
        return NULL;

    while (start <= end)
        result[i++] = s1[start++];

    result[i] = '\0';