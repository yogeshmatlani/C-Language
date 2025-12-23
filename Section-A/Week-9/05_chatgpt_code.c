#include <stdio.h>
#include <windows.h>
#include <string.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    char breaking[] = " BREAKING NEWS ";
    char news[] =
        "Pakistan economy shows signs of recovery as markets respond positively to reforms.   ";

    int i, j;
    int len = strlen(news);

    int terminalWidth = 150;   // approx terminal width
    int window = 50;          // scrolling strip
    int leftPadding = (terminalWidth - window - 15) / 2;

    // vertical center
    for (i = 0; i < 8; i++)
        printf("\n");

    for (i = 0; i < len; i++) {

        printf("\r");

        // center alignment
        for (j = 0; j < leftPadding; j++)
            printf(" ");

        // 🔴 BREAKING NEWS (RED)
        SetConsoleTextAttribute(hConsole,
            FOREGROUND_RED | FOREGROUND_GREEN);
        printf("%s", breaking);

        // 🟡 headline text (YELLOW)
        SetConsoleTextAttribute(hConsole,
            FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

        for (j = 0; j < window; j++) {
            if (i + j < len)
                printf("%c", news[i + j]);
            else
                printf(" ");
        }

        fflush(stdout);
        Sleep(120);   // speed control
    }

    // reset color
    SetConsoleTextAttribute(hConsole,
        FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    return 0;
}
