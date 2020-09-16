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
     * 文字が大文字か小文字かを判定
     */

    for (char character = 'A'; character <= 'z'; character++) {

        //printf("%d %c\n", character, character);

        if (character != chara || character >= 91 && character <= 96) continue;

        if (character <= 90) {

            printf("Capital Letter");

            return 0;

        } else {

            printf("Small Letter");

            return 0;

        }

    }

    /*
     * 大文字でも小文字でもない場合
     */

    printf("Neither");

    return 0;

}
