#include <stdio.h>

int main()
{
    int a;
    int *aPtr;
    a=7;
    aPtr = &a;

    printf("la direccionn de a es %p \n El valor de aptr es %d \n\n",&a,*aPtr);
    printf("el valor de as %d \n el valor de *aptr es %d\n\n",a,*aPtr);
    printf("Demostrando que * y & son complementarios entre si \n &*aptr= %p \n, %p \n", &*aPtr, *&aPtr);

    return 0;




}