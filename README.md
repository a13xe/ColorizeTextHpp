:eye: Overview
--------------------------------------------------------------------------------------------------------------------------------------------------

This C++ tiny library provides a simple tools for colorizing your console output. 
With it you can set the **text color**, **background color**, and the **boldness** of a text.


:beginner: Getting Started
--------------------------------------------------------------------------------------------------------------------------------------------------

- Include the [ColorizeText.hpp](https://github.com/a13xe/ColorizeTextHpp/releases/download/v1.0.0/ColorizeText.hpp) file into your project.
- Also gotta clear the console screen to make sure colors display correctly.
  For this use:
  
```cpp
system("cls"); // for Windows systems
system("clear"); // for Unix-based systems
```

- Print things following this syntax:
```c 
colorized_print("Your message", text_color, background_color, boldness);
```
  

:joystick: Example
--------------------------------------------------------------------------------------------------------------------------------------------------

```cpp
#include "ColorizeText.hpp"

int main()
{
    system("clear"); // on Linux
    // system("cls"); // on Windows

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



:camera: Screenshots
--------------------------------------------------------------------------------------------------------------------------------------------------

<div align="center"> <a href="https://github.com/AlexeyLepov">
<img width=47% src="https://github.com/a13xe/ColorizeTextHpp/assets/77492646/d4a735ab-d2f2-4981-82e1-b97cc05ad508" alt="" />
<img width=50% src="https://github.com/a13xe/ColorizeTextHpp/assets/77492646/8203e28e-6f16-44ae-9e06-e51c887b42bb" alt="" />
</a> </div>

