class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int suml=0;
        int sumr=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(i==j){
                    suml=suml+mat[i][j];
                }
                else if(i+j==mat.size()-1){
                    sumr+=mat[i][j];
                }
            }
        }
    return (suml+sumr);    
    }
};
