    int solve(int start, int end) {
        if(end==start)return 0;
        return end/2<start?end-start:1+solve(start,(end&1?end-1:end/2));
    }
