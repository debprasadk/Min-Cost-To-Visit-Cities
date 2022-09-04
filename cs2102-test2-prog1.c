#include <stdio.h>

int main()
{
    int i, j, k, n;
    float val;
    float m[200][200], cost[200];
    printf("Enter the number of cities you visited : ");
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        printf("Enter the cost from %dth city : ",i);
        for(j = 0; j < n; j++){
            scanf("%f",&m[i][j]);
        }
    }   
    for(i = 0; i < n; i++){
        val = 0;
        for(k = 0 ; k <= i; k++){
            if(-1 == m[k][n-1-(i-k)])
                break;
            val += m[k][n-1-(i-k)];
        }      
        cost[i] = val;
    }
    j = i-1;
    val = cost[0];
    for(i = 1; i < j; i++){
        val = (cost[i] > val)? val : cost[i];
    }    
    printf("min cost = %0.3f",val);
    return 0;
}