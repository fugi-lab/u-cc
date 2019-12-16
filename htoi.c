#include <stdio.h>
#include <string.h>

long htoi(const char* hexStr);

int main () {
	long i = htoi("f");
	printf("%x %ld", 0xf, i);
}

long htoi(const char *pHex)
{
    long decResult = 0;

    while (*pHex != '\0')
    {
        decResult = 16 * decResult + htoi(*pHex++);
    }
    return decResult;
}
