#include<unistd.h>
void inter(char*str1,char*str2)
{
    int ascii[256] = {0};
    int i = 0;
    while(str2[i] != '\0')
    {
        if(ascii[(int)str2[i]] == 0)
        {
            ascii[(int)str2[i]] = 1;
        }
    i++;
    }
    i = 0;
    while(str1[i] != '\0')
    {
        if(ascii[(int)str1[i]] == 1)
        {
            write(1,&str1[i], 1);
            ascii[(int)str1[i]] = 2;
        }
    i++;
    }
}
int main(int argc,char**argv)
{
    if(argc == 3)
    {
        inter(argv[1],argv[2]);
        write(1,"\n", 1);
    }
}