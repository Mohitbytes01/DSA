// Container with most problem
#include <stdio.h>

int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int maxWater = 0;

    while (left < right) {
        int width = right - left;
        int minHeight;

        if (height[left] < height[right]) {
            minHeight = height[left];
        } else {
            minHeight = height[right];
        }

        int currentArea = minHeight * width;

        if (currentArea > maxWater) {
            maxWater = currentArea;
        }

        // Move the pointer with smaller height
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}