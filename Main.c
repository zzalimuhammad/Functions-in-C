#include <stdio.h>
    int max_of_four(int a, int b, int c, int d)
    {
        int max ;
        if ((a>b)&&(a>c)&&(a>d))
        {
            max=a;
        }else if ((b>a)&&(b>c)&&(b>d))
        {
            max=b;
        }else if ((d>b)&&(d>a)&&(d>c))
        {
            max=d;
        }else{max=c;}

            return max;     
        
        
    }


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
