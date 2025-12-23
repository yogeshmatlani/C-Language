#include <stdio.h>

// function to calculate string length manually
int strLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// function to print spaces
void printSpaces(int n) {
    for (int i = 0; i < n; i++)
        printf(" ");
}

// function to scroll text in center
void scrollText(char news[], int terminalWidth, int window, int verticalPadding) {
    int len = strLength(news);
    int leftPadding = (terminalWidth - window) / 2;
    int i, j, k;

    // vertical padding
    for (i = 0; i < 5; i++)
        printf("\n");

    for (i = 0; i < len; i++) {
        printf("\r");  // return to start of line

        // horizontal left padding
        printSpaces(leftPadding);

        // print window of scrolling text
        for (j = 0; j < window; j++) {
            if (i + j < len)
                printf("%c", news[i + j]);
            else
                printf(" ");
        }

        fflush(stdout);

        // manual delay
        for (k = 0; k < 20000000; k++);
    }
}

int main() {
    char news[] =
        "BREAKING NEWS: Pakistan economy shows signs of recovery as markets respond positively.   ";

    int terminalWidth = 150;   // approximate terminal width
    int window = 50;          // scrolling strip width
    int verticalPadding = (terminalWidth-window)/2;  // move text below top

    scrollText(news, terminalWidth, window, verticalPadding);

    return 0;
}
