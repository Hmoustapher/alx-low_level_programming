#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the message "and that piece of art is useful\" - Dora Korpar, 2015-10-19,"
 *              to the standard error and returns 1.
 * Return: Always 1 (Error)
 */
int main(void)
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n", 59);

    return (1);
}
