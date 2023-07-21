#include <stdio.h>
#include <math.h>

double calculateDistance(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    double distance = sqrt(dx * dx + dy * dy);
    return distance;
}

int main() {
    int x1, y1, x2, y2;
    printf("Введіть координати початку вектора (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Введіть координати кінця вектора (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    double result = calculateDistance(x1, y1, x2, y2);
    printf("Довжина вектора: %.6f\n", result);

    return 0;
}
