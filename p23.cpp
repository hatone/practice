#include <iostream>

const int MAX_N = 1000000;
int l,n,x[MAX_N];



void solve_p23(){

//最短時間
    int minT =0;
    for(size_t i=0; i<n; i++){
        minT= std::max(minT,std::min(x[i],l-x[i]));
    }
    
//最長時間
    int maxT =0;
    for(size_t i=0; i<n; i++){
        maxT= std::max(maxT,std::max(x[i],l-x[i]));
        }
        
        std::cout<<minT<<" "<<maxT<<std::endl;
        
}


int main (){

    //input
    std::cin>>l>>n;
    
    for (size_t i=0; i<n; i++) {
        std::cin>>x[i];
    }
    

    solve_p23();

    return 0;
}