#include <stdio.h>

int main() {

    /*
     * 課題２
     * 文字を１文字入力すると、それが、大文字か、小文字か、そのどちらでもないかを判定するプログラムを作りなさい。
     */

    /*
     * 変数宣言
     */

    char chara;

    /*
     * 文字を取得
     */

    printf("Input character: "); scanf("%c", &chara);

    printf("Character = %c\n", chara);

    /*
     * 文字が小文字かどうかを判定
     */

    for (char character = 'a'; character <= 'z'; character++) {

        if (character != chara) {

            continue;

        } else {

            printf("Small Letter\n");

            return 0;

        }

    }

    /*
     * 文字が大文字かどうかを判定
     */

    for (char character = 'A'; character <= 'Z'; ++character) {

        if (character != chara) {

            continue;

        } else {

            printf("Capital Letter\n");

            return 0;

        }

    }

    /*
     * 大文字でも小文字でもない場合
     */

    printf("Neither\n");

    return 0;

}
