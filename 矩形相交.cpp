#include <iostream>
using namespace std;

int main() {
    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;
    cin >> ax1 >> ay1 >> ax2 >> ay2;
    cin >> bx1 >> by1 >> bx2 >> by2;

    int ax_right=max(ax1,ax2);
    int ax_left=min(ax1,ax2);
    int ay_up=max(ay1,ay2);
    int ay_down=min(ay1,ay2);

    int bx_right=max(bx1,bx2);
    int bx_left=min(bx1,bx2);
    int by_up=max(by1,by2);
    int by_down=min(by1,by2);

    // 计算相交部分在 x 轴上的宽度
    int intersect_width = max(0, min(ax_right,bx_right)-max(ax_left,bx_left));

    // 计算相交部分在 y 轴上的高度
    int intersect_height = max(0, min(ay_up,by_up) - max(ay_down,by_down));

    // 相交部分的面积
    int intersect_area = intersect_width * intersect_height;

    cout << intersect_area << endl;

    return 0;
}