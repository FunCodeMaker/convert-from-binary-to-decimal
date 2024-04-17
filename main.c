#include "all.h"

int main() {
    long long number;
    int again=1;

    while(again==1){
    system("cls");

        // Prompt user for input
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Check if the number is binary
    if (isBinary(number)) {
        printf("(%d)bass2 ===> (%d)bass10 ",number,binaryToDecimal(number));
    } else {
        printf("The number is not binary.\n");
    }
    printf("\n\n\nDo you want try again ??\n [1]-Yes [0]-NO \n Answer=");
    scanf("%d",&again);
    }



    return 0;
}
