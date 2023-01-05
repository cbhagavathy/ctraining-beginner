#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=10; i++) {
        if(i%2 == 0) goto SKIP_PRINT_EVEN_NO;
        printf("%d\n",i);
        SKIP_PRINT_EVEN_NO: ;
    }

    return 0;
}

