#include "iostream"
using namespace std;

int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        
        long long int max =0;
        int index =0;
        for(int i =0;i<divisors.size() ;i++){
            
            long long int cnt =0;
            for(int j =0;j < nums.size(); j++){
                
                if(nums[j] % divisors[i]==0)
                    cnt++;
            }
            if(cnt >= max){
                max = cnt;
                if(divisors[index] < divisors[i])
                    index =i;
            }
        }
        return divisors[index];
    }

int main(){
    vector<int> nums ={4,7,9,3,9};
    vector<int> divisors ={5,2,3};
    int ans = maxDivScore(nums , divisors);
    cout << ans ;
}
