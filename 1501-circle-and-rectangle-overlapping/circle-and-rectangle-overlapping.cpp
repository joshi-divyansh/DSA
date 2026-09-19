class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int xClosest = clamp(xCenter, x1, x2);
        int yClosest = clamp(yCenter, y1, y2);
        int dx = xCenter - xClosest;
        int dy = yCenter - yClosest;
        return (dx * dx + dy * dy) <= (radius * radius);
    }
};