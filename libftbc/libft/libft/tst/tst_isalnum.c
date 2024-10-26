#include "libft.h"

void tst_ft_isalnum(int c) {
    int res1 = isalnum(c);
    int res2 = ft_isalnum(c);
    printf("Input: %3d | isalnum: %d | ft_isalnum: %d\n", c, res1, res2);
}

int main() {
    int test_cases[] = {
        48, 57,         
        65, 90,          
        97, 122,         
        32, 33, 47,     
        91, 96,          
        0, 10, 13,       
        -1, -65,         
        255, 256,        
        100, 110, 120    
    };

    for(size_t i = 0; i < (sizeof(test_cases) / sizeof(test_cases[0])); i++) {
        tst_ft_isalnum(test_cases[i]);
    }
    
    return 0;
}
