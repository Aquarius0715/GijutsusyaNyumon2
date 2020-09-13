#include <stdio.h>

int main() {

    /*
     * 課題２
     * 文字を１文字入力すると、それが、大文字か、小文字か、そのどちらでもないかを判定するプログラムを作りなさい。
     */

    char chara;

    printf("Input character: ");

    scanf("%c", &chara);

    printf("Character = %c\n", chara);

    for (char character = 'a'; character <= 'z'; ++character) {

        if (character != chara) {

            continue;

        } else {

            printf("Small Letter\n");

            return 0;

        }

    }

    for (char character = 'A'; character <= 'Z'; ++character) {

        if (character != chara) {

            continue;

        } else {

            printf("Capital Letter\n");

            return 0;

        }

    }

    printf("Neither\n");

    return 0;

}
