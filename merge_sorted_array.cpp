//C++ Program 
//Merge Sorted array
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair <int, pair<int,int>>node;
vector<int>mergeSortedArray(vector<vector<int> >arr)
    vector<int> result;
    priority_queue<node, vector<node>, greater<node> >pq;
    
    //insert the 0thelement of every array in the pq;
    for(int i=0; i<arr.size();i++){
        pq.push({arr[i][0], {i,0}});
        
        //remove the elements one by one from the min heap and add to result vector
        while(!pq.empty()){
            node current = pq.top();
            pq.top();
            int element = current.first;
            int x = current.second.first;
            int y = current.second.second;

            result.push_back(element);
            if(y+1 < arr[x].size()){
                pq.push({arr[x][y+1], {x, y+1 }});
            }
    }
    return result;
    }
int main() {
    vector<vector<int>> arr{{3,4},
      {1,3,5,7,2,4,6,8,0,9,10,11}};

      vector<int> output = mergeSortedArray(arr);
      for(auto x:output){
          cout<< x <<" ";
      }

    return 0;
}
