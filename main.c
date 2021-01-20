#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char color [12] = {'\0'};
    char capsColor[12] = {'\0'};
    char *cStr = "Samuel";
    int iStrLen;

    printf("Please enter your favorite color; ");
    scanf("%s", color);

    printf("Your favorite color %s: \n", color);

    iStrLen = strlen(color);
    printf("The length of the string is: %d\n", iStrLen);
    printf("The name of the person in the other stirng is %s\n", cStr);

    for(int i = 0; i < iStrLen; i++){
        capsColor[i] = toupper(color[i]);
    }



    printf("converted to upper is %s\n", capsColor);




    return 0;
}
