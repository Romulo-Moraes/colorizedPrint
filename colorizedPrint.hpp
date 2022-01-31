#include <stdio.h>

enum termColor{
        none = 1,
        fBlack = 30,
        bBlack = 40,
        fRed = 31,
        bRed = 41,
        fGreen = 32,
        bGreen = 42,
        fYellow = 33,
        bYellow = 43,
        fBlue = 34,
        bBLue = 44,
        fMagenta = 35,
        bMagenta = 45,
        fCyan = 36,
        bCyan = 46,
        fGray = 90,
        bGray = 100,
        fBrightRed = 91,
        bBrightRed = 101,
        fBrightGreen = 92,
        bBrightGreen = 102,
        fBrightYellow = 93,
        bBrightYellow = 103,
        fBrightBlue = 94,
        bBrightBlue = 104,
        fBrightMagenta = 95,
        bBrightMagenta = 105,
        fBrightCyan = 96,
        bBrightCyan = 106,
        fBrightWhite = 97,
        bBrightWhite = 107
};

void colorizedPrint(int foreground, int background, const char textToPrint[]){
    printf("\033[%i;%im%s",foreground,background,textToPrint);
}
