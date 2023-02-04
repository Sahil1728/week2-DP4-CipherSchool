#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals){
    vector<vector<int>> merged;
    sort(intervals.begin(), intervals.end());
    vector<int> temp = intervals[0];

    for(auto it: intervals)
    {
        if(temp[1] >= it[0]){
            temp[1] = max(temp[1], it[1]);
        }
        else{
            merged.push_back(temp);
            temp = it;
        }
    }
    merged.push_back(temp);
    return merged;
}

int main(){
    vector<vector<int>> intervals = {{1,4},{3,7},{9,13},{15,18}};
    vector<vector<int>> mergedIntervals = mergeIntervals(intervals);
    for(auto i: mergedIntervals){
        for(auto j: i){
            cout << j << " ";
        }
        cout << "   ";
    }
    return 0;
}
