#include <unistd.h>

int main()
{
        putenv("APPLE=BANANA");
        printf("%sWn", getenv("APPLE"));

        execl("ex08-11", "ex08-11", (char * )0);
}
