
#include "libft.h"

void  tst_ft_isalpha(int c)
{
  int res1 = isalpha(c);
  int res2 = ft_isalpha(c);
  printf("Input: %3d | isalpha: %d | ft_isalpha: %d\n", c, res1, res2);

}
int main()
{
  int test_cases[]= {
    65, 90 , //===> hado uppercase
    97, 122 , // ==> hado lower case
    32, 48, 57, 64,91 ,96, 123,126, // ==> non-alphabtic character
    0 , 10 , 13,//cntrol character
    -1 , -65, //negative character
    256 , 300,//value great then 255
    33 , 35 , 42,
    1000,
  };
   for(size_t i = 0 ; i < (sizeof(test_cases) / sizeof(test_cases[0])); i++){
    tst_ft_isalpha(test_cases[i]);
  }
  return 0;
};
