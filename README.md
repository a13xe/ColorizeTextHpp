:eye: Overview
--------------------------------------------------------------------------------------------------------------------------------------------------

This C++ tiny library provides a simple tools for colorizing text console output. 
With it you can set the **text color**, **background color**, and **boldness** of the text.


:beginner: Getting Started
--------------------------------------------------------------------------------------------------------------------------------------------------

- Include the [ColorizeText.hpp](https://github.com/a13xe/ColorizeTextHpp/releases/download/v1.0.0/ColorizeText.hpp) file in your project.
- Also need to clear the console screen to ensure hte colors display correctly.
  For this use:
  
```cpp
system("cls"); // for Windows systems
system("clear"); // for Unix-based systems
```

- And print things following this syntax:
```c 
colorized_print("Your message", text_color, background_color, boldness);
```
  

:joystick: Usage
--------------------------------------------------------------------------------------------------------------------------------------------------

Here's an example of how to use this header.

For more variants look at the `example.cpp`.

```cpp
#include "ColorizeText.hpp"

int main()
{
    system("clear"); // on Linux
    //system("cls"); // on Windows

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
```


:camera: Screenshot
--------------------------------------------------------------------------------------------------------------------------------------------------


![image](https://github.com/a13xe/ColorizeTextHpp/assets/77492646/54f249ce-8189-427f-b82b-01c577818066)


