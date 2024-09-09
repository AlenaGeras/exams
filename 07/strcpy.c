char*ft_strcpy(char*s1,char*s2)
{
    int i =0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];
    return(s1);
}
// #include<stdio.h>
// int main()
// {
//     char s[] = "Fack";
//     char y[] = "You";
//     ft_strcpy(s,y);
//     printf("%s\n",s);

// }