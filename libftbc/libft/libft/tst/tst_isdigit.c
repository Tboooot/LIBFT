#include "libft.h"

void tst_ft_isdigit(int c)
{
    int res1 = isdigit(c);
    int res2 = ft_isdigit(c);
    printf("Input: %3d | isdigit: %d | ft_isdigit: %d\n", c, res1, res2);
}

int main()
{
    int test_cases[] = {
        48,  // '0'
        57,  // '9'
        32,  // space
        65,  // 'A'
        90,  // 'Z'
        97,  // 'a'
        122, // 'z'
        10,  // newline
        13,  // carriage return
        255, // boundary value
        256, // out of ASCII range
        -1,  // negative number
        -48, // negative ASCII value for '0'
        1000, // very large number
        65,  // another uppercase letter
        91,  // out of range for digits
        93,  // out of range for digits
        122, // lower case letter
        100, // normal case
        99   // normal case
    };

    for (size_t i = 0; i < (sizeof(test_cases) / sizeof(test_cases[0])); i++) {
        tst_ft_isdigit(test_cases[i]);
    }
    
    return 0;
}
