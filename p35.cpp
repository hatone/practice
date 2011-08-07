#include <iostream>

const int MAX_N=100;
int N,M;
char field[MAX_N][MAX_N+1];


void dfs(int x,int y){
    field[x][y]='.';
    
    //型を明示的に宣言してないとココは駄目。
    for(int dx = -1; dx <= 1; dx++){
        for(int dy =-1; dy <= 1; dy++){
            int nx=x+dx;
            int ny=y+dy;
            
            if(0<=nx && nx<N && 0 <= ny && ny< M && field[nx][ny]=='W')dfs(nx,ny);
        }
    }
}

void solve(){
    int res=0;
    for(size_t i=0; i<N; i++){
        for(size_t j=0; j<M; j++){
            if(field[i][j]=='W'){
                dfs(i,j);
                
                res++;
            }
        }
    }
    std::cout<<res<<std::endl;
}

int main(){
    
    std::cin>>N>>M;
    
    for(size_t i=0; i<N; i++){
        for(size_t j=0; j<M; j++){
            std::cin>>field[i][j];
        }
    }
    
    solve();
    
    return 0;
}