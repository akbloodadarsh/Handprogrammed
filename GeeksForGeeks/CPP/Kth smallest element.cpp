#using maxheap
int kthSmallest(int arr[], int l, int r, int k) {
    vector<int>a;
    make_heap(a.begin(),a.end());
    for(int i=0;i<=r;++i)
    {
        if(a.size()==k)
        {
            if(a.front()>arr[i])
            {
                pop_heap(a.begin(),a.end());
                a[a.size()-1] = arr[i];
                push_heap(a.begin(),a.end());
            }
        }
        else
        {
            a.push_back(arr[i]);
            push_heap(a.begin(),a.end());
        }
    }
    return a.front();
}

int kthSmallest(int arr[], int l, int r, int k) {
    priority_queue<int>q;
    for(int i=0;i<k;++i)q.push(arr[i]);
    for(int i=k;i<=r;++i)
    {
        if(q.top()>arr[i])
        {
            q.pop();
            q.push(arr[i]);
        }
    }
    return q.top();
}


#using minheap
int kthSmallest(int arr[], int l, int n, int k) {
    vector<int>a;
    ++n;
    make_heap(a.begin(),a.end(),greater<int>{});
    for(int i=0;i<n;++i)
    {
        if(a.size()==n-k+1)
        {
            if(a.front()<arr[i])
            {
                pop_heap(a.begin(),a.end(),greater<int>{});
                a[a.size()-1] = arr[i];
                push_heap(a.begin(),a.end(),greater<int>{});
            }
        }
        else
        {
            a.push_back(arr[i]);
            push_heap(a.begin(),a.end(),greater<int>{});
        }
    }
    return a.front();
}

#quick select
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
