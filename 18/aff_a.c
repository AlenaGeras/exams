#include<unistd.h>
int main(int argc,char**argv)
{
    int i = 0;
    if(argc == 2)
    {
    while(argv[1][i] != '\0')
    {
        if(argv[1][i] == 'a')
        {
            write(1, "a\n", 2);
            break;
        }
        i++;
    }
    }
    else
    {
        write(1,"a\n", 2);
    }
    
}