#include<stdio.h>
#include<math.h>
int main() {
    int p=23,g=5,a,b;
    int A,B,keyA,keyB;
    printf("Enter Private Key of A: ");
    scanf("%d",&a);
    printf("Enter Private Key of B: ");
    scanf("%d",&b);
    A=(int)pow(g,a)%p;
    B=(int)pow(g,b)%p;
    keyA=(int)pow(B,a)%p;
    keyB=(int)pow(A,b)%p;
    printf("Public Key A=%d\n",A);
    printf("Public Key B=%d\n",B);
    printf("Secret Key at A=%d\n",keyA);
    printf("Secret Key at B=%d\n",keyB);
    return 0;
}