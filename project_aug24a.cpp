#include<stdio.h>
main()
{
    int t,i,x1,y1,x2,y2,n,x,y,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
       
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(j=0;j<n;j++){
            scanf("%d%d",&x,&y);
            if(((x >= x1) && (x <= x2)) && ((y >= y1) &&(y <= y2))){
                printf("Yes\n");
            }
            else {
                printf("No\n");
            }
        }
        
    }
    return 0;
}