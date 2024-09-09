#include<unistd.h>
int main(void)
{
    int number;
    number = 1;
    while(number <= 100)
    {
        if(number % 3 == 0 && number % 5 == 0)
        {
            write(1,"fizzbuzz", 9);
        }
        else if(number % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if(number % 5 == 0)
        {
            write(1, "buzz", 1);
        }
        else
        {
            if(number > 9)
            {
                char c1 = number/10 + '0';
                if(c1 != 0)
                write(1, &c1, 1);
                char c2 = number % 10 + '0';
                write(1, &c2, 1);
            }
        }
    }

}