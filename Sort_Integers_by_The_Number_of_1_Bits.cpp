class Solution {
   
public:




    vector<int> sortByBits(vector<int>& arr) {


       


        auto lambda=[](int &a,int &b){
            int CA=__builtin_popcount(a);
            int CB=__builtin_popcount(b);
            if(CA==CB){
                return a<b;
            }
            else{
               return CA<CB;
            }
        };


        sort(arr.begin(),arr.end(),lambda);
        return arr;
    }
};
