#include <stdint.h>
#include <stdio.h>

#ifdef WIN32
#include <windows.h>
#endif

typedef struct
{
    void *data;
    size_t len;
} Slice;

void Println(Slice s)
{
    fwrite(s.data, 1, s.len, stdout);
    putchar('\n');
}

void Main();

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(65001); // enable UTF-8 output on windows
#endif

    Main();
}