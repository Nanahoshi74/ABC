#include <bits/stdc++.h>
using namespace std;

char itoc(int x){return x + '0';}
int ctoi(char c){return c - '0';}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> grid(N, vector<int>(N, 0));

    int x = 1;
    int i = 0, j = 0;

    while (x <= N * N) {
        while (j < N && grid[i][j] == 0) {
            grid[i][j] = x;
            x++;
            j++;
        }

        j--;
        i++;

        while (i < N && grid[i][j] == 0) {
            grid[i][j] = x;
            x++;
            i++;
        }

        i--;
        j--;

        while (j >= 0 && grid[i][j] == 0) {
            grid[i][j] = x;
            x++;
            j--;
        }

        j++;
        i--;

        while (i >= 0 && grid[i][j] == 0) {
            grid[i][j] = x;
            x++;
            i--;
        }

        i++;
        j++;
    }

    // Place Takahashi at the center
    // grid[N / 2][N / 2] = 'T';

    // Output the result
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if(i == N/2 && j == N/2){
                cout << 'T' << " ";
                continue;
            }
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
