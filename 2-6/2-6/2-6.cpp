
//StudybarCommentBegin
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    //StudybarCommentEnd
    int temp;
    temp = a;
    a = b;
    b = temp;
    //StudybarCommentBegin
    printf("%d %d", a, b);
    return 0;
}

//StudybarCommentEnd