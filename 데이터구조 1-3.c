#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct point
{
       int x;
       int y;
       };

int main(void)
{
    struct point pos1,pos2;
    double distance;
   
    fputs("첫번째 좌표: ", stdout);
    scanf("%d %d", &pos1.x, &pos1.y);
   
    fputs("두번째 좌표: ", stdout);
    scanf("%d %d", &pos2.x, &pos2.y);
   
    distance=sqrt((double)((pos1.x-pos2.x)*(pos1.x-pos2.x)+(pos1.y-pos2.y)*(pos1.y-pos2.y)));
   
    printf("두 점의 거리는 %g 입니다. \n", distance);
    system("pause");
    return 0;
}