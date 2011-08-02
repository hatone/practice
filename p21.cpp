#include <iostream>

const int MAX_N = 100;


int n,a[MAX_N];

void solve_p21(){
    
    int ans =0;
    
    for(size_t i =0; i<n; i++){
        for(size_t j =i+1; j<n; j++){
            for(size_t k =j+1; k<n; k++){
                
                int len = a[i]+a[j]+a[k]; //周長さ
                int ma =std::max(a[i],std::max(a[j],a[k]));
                int rest = len-ma;
                
                if(ma <rest){
                    ans = std::max(ans,len);
                }
            }       
        }    
    }
    
        std::cout<<ans<<std::endl;
        
}


int main (){

    //input
    std::cin>>n;
    
    for (size_t i=0; i<n; i++) {
        std::cin>>a[i];
    }
    

    solve_p21();

    return 0;
}