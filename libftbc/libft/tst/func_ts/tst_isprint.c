#include "libft.h"


void tst_ft_isprint(int c) {
    int res1 = isprint(c);
    int res2 = ft_isprint(c);
    printf("Input: %3d | isprint: %d | ft_isprint: %d\n", c, res1, res2);
}

int main() {
    int test_cases[] = {
        31,    // Non-printable (control character)
        32,    // First printable character (space)
        33,    // '!' (printable)
        60,    // '<' (printable)
        64,    // '@' (printable)
        65,    // 'A' (printable)
        90,    // 'Z' (printable)
        91,    // '[' (printable)
        95,    // '_' (printable)
        97,    // 'a' (printable)
        122,   // 'z' (printable)
        126,   // '~' (printable)
        127,   // Non-printable (DEL character)
        128,   // Outside ASCII range (non-printable)
        255,   // Outside ASCII range (non-printable)
        -1,    // Negative value (non-printable)
        200    // Outside ASCII range (non-printable)
    };

    for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        tst_ft_isprint(test_cases[i]);
    }
    return 0;
}
