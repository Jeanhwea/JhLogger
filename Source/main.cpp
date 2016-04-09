// @author: Jeanhwea
// @filename: main.cpp
#include "jhlogger.h"


void foo();

int main(int argc, char ** argv)
{
    DB_TRACE();
    foo();
    return 0;
}

void foo()
{
    int i = 0;
    DB_TRACE();
    for (int j = 0; j < 100; j++)
        i++;
}

// main.cpp@10->main
// main.cpp@18->foo
