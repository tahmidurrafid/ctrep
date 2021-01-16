#include<stdio.h>

int visited[500][500];

char mat[500][500];
int row, col;



void dfs(int i, int j){
    int x, y, p, q;
    visited[i][j] = 1;

    for(x = -1; x <= 1; x++){
        for(y = -1; y <= 1; y++){
            if(x == y) continue;
            p = i + x;
            q = j + y;
            if(i + x < 0 || i + x >= row || j + y < 0 || j + y >= col )
                continue;
            if(visited[i+x][j+y] || mat[i+x][j+y] == '-' || mat[i+x][j+y] == 'X' ){
                continue;
            }
            dfs(p, q);
        }
    }
}

int main(){
    int i, j, k;
    scanf("%d%d", &row, &col);
    for(i = 0; i < row; i++){
        scanf("%s", mat[i]);
    }
    printf("%d%d", row, col);

}