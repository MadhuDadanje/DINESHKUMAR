/*
1.read n1 and n2 
2.check given range 
3.check whether digit contain 3 or nor if exist print that no...
4.other wise increment value
*/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
1.read n1 and n2 
2.check given range 
3.check whether digit contain 3 or nor if exist print that no...
4.other wise increment value
*/
#include <stdio.h>
int main()
{
int n1,n2,r=0,k=0,s,t=0,cnt=0;
scanf("%d",&n1);
l:
if(n1>0)
{;
scanf("%d",&k);
s=k;
n1--;
whl:
if(s!=0)
{
    r=s%10;
    if(r==3){cnt++;
    // printf(" lucky no =%d\n ",k);  
        goto out;
    }s/=10; 
    goto whl;
}
out:
goto l;
 
}
printf(" lucky count  =%d\n ",cnt);  
}







