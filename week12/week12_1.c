#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 'a';

    int *iptr;  
	iptr = &i;     
    char *cptr;
	cptr = &c;  
	int *iptr2;  
	iptr2 = &i;   

    printf("i : %p\n, %p (size:%zu)\n", iptr, &i, sizeof(iptr));
    printf("c : %p\n, %p (size:%zu)\n", cptr, &c, sizeof(cptr));
    printf("iptr2 : %p, %d\n", iptr2, *iptr2);
    
    return 0;
}

