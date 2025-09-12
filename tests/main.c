#include "ftlibc/ft_string/ft_string.h"
#include <inttypes.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>


void test(const char *nptr, int base)
{
	int rstatus;
	intmax_t ret = ft_strtoimax(nptr, base, &rstatus);
	printf("ret: %ji, errno: %s\n", ret, strerror(rstatus));
	// printf("ft_strtoimax: %jd, errno: %d\n", my_ret, errno);

}

int main(void)
{
	int r;
	printf("%ji\n", ft_strtoimax("11", 2, &r));
	// test("    -12345   ", 10);
}
