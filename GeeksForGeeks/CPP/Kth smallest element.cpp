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
int kthSmallest(int a[], int m, int n, int k) {
    while(1)
    {
        bool quick = 0;
        int l = 0,r = n;
        while(l<=r)
        {
            if(a[k-1]<a[l])
            {
                quick = 1;
                swap(a[l],a[k-1]);
            }
            else if(a[k-1]>a[r])
            {
                quick = 1;
                swap(a[r],a[k-1]);
            }
            else if(l<k-1)++l;
            else --r;
        }
        if(!quick)break;
    }
    return a[k-1];
}
