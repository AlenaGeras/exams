#include<unistd.h>
int main(void)
{
    char letter = 'a';
    int is_even = 0;
    while(letter <= 'z')
    {
        if(is_even)
        {
            char upper_letter = letter - 32;
            write(1, &upper_letter, 1);
        }
        else
        {
            write(1, &letter, 1);
        }
    letter ++;
    is_even= !is_even;
    }
write(1, "\n", 1);
}