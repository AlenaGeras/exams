#include<unistd.h>
int ft_strlen(char*str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
return(i);
}
char*ft_strrev(char*str)
{
    int i = 0;
    int len = ft_strlen(str) - 1;
    int tmp;
    while(len > i)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len --;
    }
return(str);
}