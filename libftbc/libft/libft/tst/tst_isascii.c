
#include "libft.h"

void tst_ft_isascii(int c) {
    int res1 = isascii(c);
    int res2 = ft_isascii(c);
    printf("Input: %3d | isascii: %d | ft_isascii: %d\n", c, res1, res2);
}

int main() {
    int test_cases[] = {
        0,   // NULL character
        65,  // 'A'
        90,  // 'Z'
        97,  // 'a'
        122, // 'z'
        127, // DEL character
        128, // Beyond ASCII range
        255, // Beyond ASCII range
        -1,  // Negative value
        200  // Another value beyond ASCII range
    };

    for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        tst_ft_isascii(test_cases[i]);
    }
    return 0;
}
