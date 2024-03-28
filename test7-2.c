#include <stdio.h>

void main() {
    char a;
    printf("input grade:");
    scanf_s("%c", &a);

    
    switch (a)
    {

    case 'A':
        printf("우수합니다! 잘하셨어요!");
    case 'B':
        printf("잘했습니다. 지속적인 노력이 필요해요.");
    case 'C':
        printf("평균적인 성적입니다. 노력이 필요할 것 같아요.");
    case 'D':
        printf("합격은 했지만, 더 많은 노력이 필요합니다");
    case 'F':
        printf("좀 더 노력해야 할 것 같아요. 화이팅!");
    }
    return 0;
}



    