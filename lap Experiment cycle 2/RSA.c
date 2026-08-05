#include<stdio.h>
#include<math.h>
int main() {
    int p=3,q=11,n,e=7,d=3;
    int m,c;
    n=p*q;
    printf("Enter Message (<33): ");
    scanf("%d",&m);
    c=(int)pow(m,e)%n;
    printf("Encrypted=%d\n",c);
    m=(int)pow(c,d)%n;
    printf("Decrypted=%d",m);
    return 0;
}