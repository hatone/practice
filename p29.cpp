#include <iostream>

const int MAX_N = 10;
int n,m,k[MAX_N];
int kk[MAX_N*MAX_N];


bool binary_search(int x){
    int l=0, r=n*n;
    
    while (r-l >=1) {
        int i=(l+r)/2;
        if(kk[i]==x)return true;
        else if(kk[i] <x)l=i+1;
        else r=i;
    }
    
    return false;
}

void solve_p28(){
    
    
    for(size_t c=0; c<n; c++){
        for(size_t d=0; d<n; d++){
            kk[c*n+d]=k[c]+k[d];
        }
    }
    
    std::sort(kk, kk+n*n);
    
    bool f= false;
    for(size_t a=0; a<n; a++){
        for(size_t b=0; b<n; b++){
            if(binary_search(m-k[a]-k[b])){
                f=true;
            }
        }    
    }
    
    if(f)std::cout<<"yes"<<std::endl;
    else std::cout<<"no"<<std::endl;
    
}


int main (){
    
    //input
    std::cin>>n>>m;
    
    for (size_t i=0; i<n; i++) {
        std::cin>>k[i];
    }
    
    
    solve_p28();
    
    return 0;
}