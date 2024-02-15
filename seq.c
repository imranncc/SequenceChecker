#include <stdio.h>
int isincseq(char word[]);

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);
    int ans = isincseq(word);
    if (ans == 1) {
        printf("The word \"%s\" is an increasing sequence.\n", word);
    } else {
        printf("The word \"%s\" is not an increasing sequence.\n", word);
    }

    return 0;
}

int isincseq(char word[]) {
    for (int i = 0; word[i] != '\0' && word[i + 1] != '\0'; i++) {
        if (word[i] >= '0' && word[i] <= '9') {
            if (!(word[i + 1] == word[i] + 1 && word[i + 1] <= '9')) {
                return 0;
            }
        }
        else if (word[i] >= 'A' && word[i] <= 'Z') {
            if (!(word[i + 1] == word[i] + 1 && word[i + 1] <= 'Z')) {
                return 0;
            }
        }
        else if (word[i] >= 'a' && word[i] <= 'z') {
            if (!(word[i + 1] == word[i] + 1 && word[i + 1] <= 'z')) {
                return 0;
            }
        }
        else {
            return 0;
        }
    }
    return 1;
}
