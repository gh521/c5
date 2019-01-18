#include <stdio.h>
#include <math.h>
struct point
{
    int x;
    int y;
};

int main()
{
    int index = 0;
    struct point arr[100];
    printf("huanyinjinrucheliangguanlixitong\n");
    while (1)
    {
        printf("1---tianjicheliang\n");
        printf("2----shanchucheliang\n");
        printf("3----xianshiquanbuchelian\n");
        printf("4----fanhuiliwozuijindecheliang\n");
        printf("5----tuichu");
        printf("qinxuanzhexiangyingongneng\n");
        int coude;
        scanf("%d", &coude);
        if (coude == 1)
        {
            int x;
            int y;
            printf("tinajiayigecheliangweiz\n");
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y - y;
            index++;
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
            printf("chenggongdianjihuichejixu\n");
        }
        if (coude == 2)
        {
            if (index > 0)
            {
                printf("sanchucheliangweizhixingxi/n");
                index--;
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
            else
            {
                printf("sanchushibai,dianjihuichejixu\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
        }
        if (coude == 3)
        {
            printf("shuououcheliangweizruxia\n");
            for (int i = 0; i < index; i++)
            {
                printf("di%dgecheliliangweizheshi%d,&d\n");
            }
            printf("chenggong\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (coude == 4)
        {
            printf("qinshurudangqianweizhi\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&x);
            double min=10000;
            int idcard=0;
            for(int i=0;i<index;i++)
        {
            int dx=x-arr[i].x;
            int dy=y-arr[i].y;
            double l=sqrt(dx*dx+dy*dy);
            if(min>l)
            {
                min=l;
                idcard=i;
            }
        }
        printf("yonghudangqianweizheyu%dgechedejuliwei%lf\n");
        char xx;
        scanf("%c",&xx);
        scanf("%c",&xx);
        }
        if (coude == 5)
        {
            printf("tuichu\n");
            break;
        }
    }
}