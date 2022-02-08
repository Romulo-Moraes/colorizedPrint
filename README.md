<div align="center">
    <h1>Colorized Print</h1>
    <h3>This is an simple C/C++ header-only library to make pretty prints with some color. Useful to make a terminal program more attractive for you or your users.</h3>
</div>

</br>

## Header-Only
you only need to wget it and import in your cpp file, and then it will work, very simple


## Available colors
The library support some different colors, and exists two types, foreground and background

Colors:

    Black, Red, Green, Yellow, Blue, Magenta, Cyan, Gray, Bright red, bright green, Bright yellow, Bright blue, Bright magenta, Bright cyan and Bright white

All colors can be foreground and background, but in the code has a little difference

## colorizedPrint method
The colorizedPrint method require three arguments: foreground, background and text, for each argument exist an enum for it, and an optional argument that is a way to make easy inserts strings inside the text param.



## How to use
It's is really simple, like the code below
```C++
colorizedPrint(foreColor::fBrightGreen,backColor::bNone,"Hello, %s your %s",{"What's","name?"});
```
it just need config the foreColor in the first args, backColor on second, the third is the text properly, and the last is possible put arguments to be injected inside the text argument replacing the %s characters.



and the result as expected:
</br>

<img height="16px" src="./images/example.png">



