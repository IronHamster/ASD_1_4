#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> X(n, std::vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            std::cin >> X[i][j];
        }
    }

    std::vector<std::vector<int>> XtX(m, std::vector<int>(m, 0));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = 0; k < n; k++) {
                XtX[i][j] += X[k][i] * X[k][j];
            }
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            std::cout << XtX[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
