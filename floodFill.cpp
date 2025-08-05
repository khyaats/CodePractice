#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        if (image[sr][sc] == color)
            return image;
        dfs(image, sr, sc, oldColor, color);
        return image;
    }

    void dfs(std::vector<std::vector<int>>& image, int sr, int sc, int oldColor, int color)
    {
        int rows = image.size();
        int cols = image[0].size();
        if (sr < 0 || sr >= rows || sc < 0 || sc >= cols) return;

        if (image[sr][sc] != oldColor)
            return;

        image[sr][sc] = color;
        dfs(image, sr + 1, sc, oldColor, color);
        dfs(image, sr, sc + 1, oldColor, color);
        dfs(image, sr - 1, sc, oldColor, color);
        dfs(image, sr, sc - 1, oldColor, color);

    }
};