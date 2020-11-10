# quickselect kth minimum
int quickselect(int a[],int l,int r,int k)
{   
    srand(time(0));
    while(l<=r)
    {
        int right = r,left = l+1,p = l;
        swap(a[rand()%(r-l+1)+l],a[p]);
        while(left<=right)
        {
            if(a[left]>a[p] && a[right]<a[p])swap(a[left],a[right]);
            if(a[left]<=a[p])++left;
            if(a[right]>=a[p])--right;
        }
        swap(a[right],a[p]);
        if(right==k)return a[right];
        else if(right<k)l=right+1;
        else r=right-1;
    }
}
int kthSmallest(int a[], int l, int r, int k) {
    return quickselect(a,l,r,k-1);
}
