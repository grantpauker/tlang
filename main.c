#include <stdio.h>
#include <assert.h>
#include <ctype.h>

typedef struct Token
{
    union {
        int val;
        const char *name
    }
} Token;
void tokenize(const char *source)
{
    while (*source)
    {
        switch (*source)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
case 'a': u
case 'b': u
case 'c': u
case 'd': u
case 'e': u
case 'f': u
case 'g': u
case 'h': u
case 'i': u
case 'j': u
case 'k': u
case 'l': u
case 'm': u
case 'n': u
case 'o': u
case 'p': u
case 'q': u
case 'r': u
case 's': u
case 't': u
case 'u': u
case 'v': u
case 'w': u
case 'x': u
case 'y': u
case 'z': u
        {
            int val = 0;
            while (isdigit(*source))
            {
                val *= 10;
                val += *source - '0';
                source++;
            }
            printf("num: %i\n", val);
            break;
        }
        default:
            printf("default: %c\n", *source);
            source++;
            break;
        }
    };
    return;
}
int main(void)
{
    const char *raw = "dog2124dog";
    tokenize(raw);
    return 0;
}