#include <unistd.h>

void ft_print_comb(void)
{
    char centaine = '0';
    char dizaine = '0';
    char unite = '0';

    while ( centaine <= '7' ) 
    {
        while ( dizaine <= '8' ) 
        {
            while ( unite <= '9' ) 
            {

    
                write(1, &centaine, 1);
                write(1, &dizaine, 1);    
                write(1, &unite, 1); 

                 if (!(centaine == '7' && dizaine == '8' && unite == '9')) 
                {
                     write(1, ", ", 2);
                }

        unite++;
            }

        dizaine++;
        unite = dizaine + 1;
        }

    centaine++;
    dizaine = centaine + 1;
    unite = dizaine + 1;
    }
}   

int main() 
{
    ft_print_comb();
    write(1, "\n", 1);
    return 0;
}