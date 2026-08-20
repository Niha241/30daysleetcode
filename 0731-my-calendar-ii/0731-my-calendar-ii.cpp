class MyCalendarTwo {
    private:
        vector<pair<int, int>> bookings;
        vector<pair<int, int>> overlaps;

public:
    MyCalendarTwo() {}

        bool book(int startTime, int endTime) {
       
            for(const auto& interval : overlaps){
                if(max(interval.first, startTime) < min(interval.second, endTime )){
                    return false;

                }
            }

            for(const auto& interval : bookings){
                int overlapStart = max( interval.first, startTime);
                int overlapEnd = min( interval.second, endTime);
                if(overlapStart < overlapEnd){
                    overlaps.push_back({overlapStart, overlapEnd});
                }
            }

            bookings.push_back({startTime, endTime});
            return true;
        }
        
    
    
    
        
    
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */