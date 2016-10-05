#include<stdio.h>
search(int key,int a[],int low,int high)
{
    int mid;
    if(low>high)
        return -1;
    mid=(low+high)/2;
    if(key==a[mid]) return mid;
    if(key<a[mid])
        search(key,a,low,mid-1);
    else
        search(key,a,mid+1,high);
}
main()
{
    int a[10];
    int i,item,pos,n;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the item to be searched\n");
    scanf("%d",&item);
    pos=search(item,a,0,n-1);
    if(pos==-1)
        printf("Item not found\n");
    else
        printf("Item found at position %d",pos+1);

}


