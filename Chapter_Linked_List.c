#include<stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;
    int **dptr = &ptr;

    printf("ptr is pointing to address: %p\n", ptr);
    printf("dptr is pointing to address: %p\n", dptr);

    printf("value of a: %d\n", a);
    printf("*ptr: %d\n", *ptr);
    printf("**dptr: %d\n", **dptr);

    return 0;
}
