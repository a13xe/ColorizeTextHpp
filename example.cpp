#include "ColorizeText.hpp"

int main()
{
    system("cls");

    colorized_print("white text on black bg", WHITE, BLACK, 0);
    colorized_print("bold white text on black bg", WHITE, BLACK, 1);

    colorized_print("black text on white bg", BLACK, WHITE, 0);
    colorized_print("bold black text on white bg", BLACK, WHITE, 1);

    colorized_print("red text on cyan bg", RED, CYAN, 0);
    colorized_print("bold red text on cyan bg", RED, CYAN, 1);

    colorized_print("blue text on green bg", BLUE, GREEN, 0);
    colorized_print("bold blue text on green bg", BLUE, GREEN, 1);

    colorized_print("magenta text on yellow bg", MAGENTA, YELLOW, 0);
    colorized_print("bold magenta text on yellow bg", MAGENTA, YELLOW, 1);

    return 0;
}
