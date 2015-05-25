#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calcula_altura(int n){
    int altura=1,i=1;
    
    while(i <= n){
        
        if( i % 2 == 0)
            altura=altura + 1;
        else
            altura =altura * 2;
     i++;
    }

    return altura;
}

int main() {

    int t,n,x;
    int alturas[60];
    
    scanf("%d",&t);
    
    for(x=0;x < t; x++){        
       scanf("%d",&n);
       alturas[x]=calcula_altura(n);         
    }
    
    
    for(x=0;x < t; x++){        
       printf("%d\n",alturas[x]);       
    }
    
    return 0;
}
