#include <stdio.h>
#include <string.h>

int main() {
    int length, line, j, k;
    char text[200];
    int textLength;

    printf("Enter a text: ");
    scanf("%s", text);
    printf("Enter the lengt of snake: ");
    scanf("%d", &length);
    textLength = strlen(text);
    for(j=0; j<textLength; j++)
        if(text[j]=='_')
            text[j]=' ';
    //satır satır say
    for (line = 1; line <= length; line++) {
        // baş satırlar hariç boşluk bırak. baş satıra boşluk bırakma.
        if ((line % (textLength * 2)) - 1 != 0) {
            //artışlar
            if (line % (textLength * 2) >= 2 && line % (textLength * 2) <= textLength + 1) {
                for (j = 0; j < line % (textLength * 2) - 1; j++) {
                    printf(" ");
                }
            }
            //alçalışlar
            else {
                if (line % textLength != 0) {
                    for (k = 0; k < ((((line / textLength) + 1) * textLength) % line) + 1; k++) {
                        printf(" ");
                    }
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("%s  \n", text);
    }

    return 0;
}
