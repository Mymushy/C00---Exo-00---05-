
#include <unistd.h>

void ft_print_numbers(void) {
    char chiffre = '0';

    while ( chiffre <= '9' ) {
        write(1, &chiffre, 1);
        chiffre++;
    }

}

int main() {
    ft_print_numbers();
    write(1, "\n", 1);
    return 0;
}