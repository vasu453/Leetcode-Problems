class RecentCounter {
public:
        vector<int> requests;
        int oldest = 0;
    RecentCounter() {

    }
    
    int ping(int t) {
        requests.push_back(t);
        int low = t - 3000;
        while(requests[oldest] < low)
        {
            oldest++;
        }
        return requests.size()-oldest;
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */