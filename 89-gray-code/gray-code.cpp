class Solution {
public:
    vector<int> grayCode(int n) {
      int numElements = 1 << n; 
        vector<int> result;
        result.reserve(numElements);
        
        for (int i = 0; i < numElements; ++i) {
            result.push_back(i ^ (i >> 1));
        }
        
        return result;  
    }
};