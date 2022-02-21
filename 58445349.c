#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
    int N;
    scanf("%d\n",&N);
    int arr[N];
    
    for(int i=0;i<N;i++)
    {
    scanf("%d\n",&arr[i]);
    }
  
    int count;
    
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(arr[j]<arr[i])
            {
                count=arr[i];
                arr[i]=arr[j];
                arr[j]=count;
            }
        }
    }
    printf("%d\n",arr[0]+arr[1]);
    }
    return 0;
}
//code by bhumika nayak