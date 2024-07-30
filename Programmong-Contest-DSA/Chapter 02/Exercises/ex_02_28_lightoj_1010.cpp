#include <stdio.h>
#include <algorithm>

int cal(int row, int col) {
    int col1, col2, row1, row2, ans;
    row1 = (row / 2) + (row % 2);
    row2 = (row / 2);
    col1 = (col / 2) + (col % 2);
    col2 = (col / 2);
    ans = row1 * col1 + row2 * col2;
    return ans;
}

int two(int row, int col) {
    int ans, temp;
    temp = cal(row, col);
    row = std::max(row, col);
    ans = (row / 4) * 4 + std::min(2, row % 4) * 2;
    ans = std::max(ans, temp);
    return ans;
}

int main() {
    int t, row, col;
    scanf("%d", &t);
    for (int cs = 1; cs <= t; cs++) {
        scanf("%d", &row);
        scanf("%d", &col);
        if (row == 1 || col == 1) {
            printf("Case %d: %d\n", cs, std::max(row, col));
            continue;
        }
        if (row == 2 || col == 2) {
            printf("Case %d: %d\n", cs, two(row, col));
            continue;
        }
        if (std::min(row, col) == 2 && std::max(row, col) == 3) {
            printf("Case %d: 4\n", cs);
            continue;
        }
        printf("Case %d: %d\n", cs, cal(row, col));
    }
    return 0;
}
