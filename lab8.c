#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int mygetch()
{
    struct termios oldt, newt;
    int c;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    c = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return c;
}

void swapChar(char *str) {
    int i = 0;
    while (str[i] != '\0' && str[i + 1] != '\0') {
        if (str[i] != ' ' && str[i + 1] != ' ') {
            char temp = str[i];
            str[i] = str[i + 1];
            str[i + 1] = temp;
        }
        i += 2;
    }
}

int main() {
    char inputString[200];
    int i = 0;
    char currentChar = mygetch();
    while (currentChar = mygetch()){
        if (currentChar != 53){
            printf("%c", currentChar);
            inputString[i++] = currentChar;
        }
        if(currentChar == 53){
            printf("\n");
            swapChar(inputString);
            printf("\nresult: %s\n", inputString);
            break;
        }
    }
    return 0;
}