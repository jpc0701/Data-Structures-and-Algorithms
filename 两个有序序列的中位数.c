#include<stdlib.h>
#include<stdio.h>

/* 
两个有序序列的中位数
已知有两个等长的非降序序列S1, S2, 设计函数求S1与S2并集的中位数。有序序列A
​0
​​ ,A
​1
​​ ,⋯,A
​N−1
​​ 的中位数指A
​(N−1)/2
​​ 的值,即第⌊(N+1)/2⌋个数（A
​0
​​ 为第1个数）。
输入格式:

输入分三行。第一行给出序列的公共长度N（0<N≤100000），随后每行输入一个序列的信息，即N个非降序排列的整数。数字用空格间隔。
输出格式:

在一行中输出两个输入序列的并集序列的中位数。
输入样例1:

5
1 3 5 7 9
2 3 4 5 6
输出样例1:

4
输入样例2:

6
-100 -10 1 1 1 1
-50 0 2 3 4 5
输出样例2:

1
*/

#define max 100005  
int main(){  
    int n;  
    int a[max],b[max];  
    scanf("%d",&n);  
    int i;  
    for(i=0;i<n;i++){  
        scanf("%d",&a[i]);  
    }  
    for(i=0;i<n;i++){  
        scanf("%d",&b[i]);  
    }  
    int c[max*2];  
    i=0;  
    int j=0,count=0;  
    while(i<n&&j<n){  
        if(a[i]<b[j])  
            c[count++]=a[i++];  
        else   
            c[count++]=b[j++];  
    }  
    printf("%d",c[(2*n-1)/2]);  
    return 0;  
}   