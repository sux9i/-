﻿#include <stdio.h>
#include <locale.h>

void name()
{
    puts("* * * * * * * * * * * * * * * * * * * * * *");
    puts("*                                         *");
    puts("* тема: Разработка консольного приложения *");
    puts("*                                         *");
    puts("*     Выполнила Белякина Т.Д.             *");
    puts("*                                         *");
    puts("* * * * * * * * * * * * * * * * * * * * * *");
}

void date()
{
puts(" _        _   _    _   _ ");
puts(" _| |_|  | | |_|  | | |_|");
puts("|_    |  |_|  _|  |_| |_|");
}

int main()
{
    setlocale(LC_CTYPE, "RUS");

    name();
    date();

    return 0;
}