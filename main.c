#include <stdio.h>
#include <unistd.h>

int main()
{
//    int i = 42;
  //  long int *h = &i;

  //  i  += write(1, "0xy", 3);
//
//    printf("%d", i);

	int	i = 42;
	unsigned long long addr;

	addr = &i;

	printf("printf %%p = %p\n", &i);
	printf("printf %%x = %x\n", &i);
	printf("printf %%X = %X\n", &i);
	printf("%lld", addr);

//	char *content = "abc";
//	int i = write(1, &content[0] , 1);

//	int	i;
//	char 	*c = "hello";
//	i = 0;
//	write(1, c[0], 1);
}
