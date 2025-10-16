#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void) {
    // ANSI escape codes для цветов текста
    const char* colors[] = {
        "\x1b[31m", // красный
        "\x1b[32m", // зелёный
        "\x1b[33m", // жёлтый
        "\x1b[34m", // синий
        "\x1b[35m", // пурпурный
        "\x1b[36m", // голубой
        "\x1b[91m", // ярко-красный
        "\x1b[92m", // ярко-зелёный
        "\x1b[93m", // ярко-жёлтый
        "\x1b[94m", // ярко-синий
        "\x1b[95m", // ярко-пурпурный
        "\x1b[96m"  // ярко-голубой
    };
    const int num_colors = sizeof(colors) / sizeof(colors[0]);

    // Инициализация генератора случайных чисел
    srand((unsigned int)time(NULL) ^ (unsigned int)getpid());

    int ch;
    while ((ch = getchar()) != EOF) {
        const char* color = colors[rand() % num_colors];
        printf("%s%c", color, ch);
    }

    // Сброс цвета в конце
    printf("\x1b[0m");
    fflush(stdout);

    return 0;
}
