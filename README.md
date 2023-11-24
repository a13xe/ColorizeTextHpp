:eye: Overview
--------------------------------------------------------------------------------------------------------------------------------------------------

This C++ tiny library provides a simple tools for colorizing your console output. 
With it you can set the **text color**, **background color**, and the **boldness** of a text.


:beginner: Getting Started
--------------------------------------------------------------------------------------------------------------------------------------------------

- Include the [ColorizeText.hpp](https://github.com/a13xe/ColorizeTextHpp/releases/download/v1.0.0/ColorizeText.hpp) file into your project.
- You should also clear the console screen in Windows for the colors to display correctly.
For this use:
  
```cpp
system("cls");
```

- Print things following this syntax:
```c 
colorized_print("Your message", text_color, background_color, boldness);
```

- Choose one of these for `text_color` and `background_color`:

![BLACK](https://img.shields.io/badge/-BLACK-010101?style=for-the-badge)
![RED](https://img.shields.io/badge/-Red-de382b?style=for-the-badge)
![GREEN](https://img.shields.io/badge/-Green-39b54a?style=for-the-badge)
![YELLOW](https://img.shields.io/badge/-YELLOW-ffc706?style=for-the-badge)
![BLUE](https://img.shields.io/badge/-BLUE-006fb8?style=for-the-badge)
![MAGENTA](https://img.shields.io/badge/-MAGENTA-762671?style=for-the-badge)
![CYAN](https://img.shields.io/badge/-CYAN-2cb5e9?style=for-the-badge)
![WHITE](https://img.shields.io/badge/-WHITE-cccccc?style=for-the-badge)
![BRIGHT_BLACK](https://img.shields.io/badge/-BRIGHT%5F%5FBLACK-808080?style=for-the-badge)
![BRIGHT_RED](https://img.shields.io/badge/-BRIGHT%5F%5FRED-ff0000?style=for-the-badge)
![BRIGHT_GREEN](https://img.shields.io/badge/-BRIGHT%5F%5FGREEN-00ff00?style=for-the-badge)
![BRIGHT_YELLOW](https://img.shields.io/badge/-BRIGHT%5F%5FYELLOW-ffff00?style=for-the-badge)
![BRIGHT_BLUE](https://img.shields.io/badge/-BRIGHT%5F%5FBLUE-0000ff?style=for-the-badge)
![BRIGHT_MAGENTA](https://img.shields.io/badge/-BRIGHT%5F%5FMAGENTA-ff00ff?style=for-the-badge)
![BRIGHT_CYAN](https://img.shields.io/badge/-BRIGHT%5F%5FCYAN-00ffff?style=for-the-badge)
![BRIGHT_WHITE](https://img.shields.io/badge/-BRIGHT%5F%5FWHITE-ffffff?style=for-the-badge)


:joystick: Example
--------------------------------------------------------------------------------------------------------------------------------------------------

```cpp
#include "ColorizeText.hpp"

int main()
{
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

