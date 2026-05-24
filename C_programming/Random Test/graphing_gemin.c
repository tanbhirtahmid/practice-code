#include <stdio.h>
#include <math.h>

#define WIDTH 50  // How many characters wide the graph is

int main() {
    double a = 1.0;
    double start_x = 0.0;
    double end_x = 5.0;
    double step = 0.25; // Larger step so it fits on one screen

    printf("X-Axis (Vertical) | Y-Axis (Horizontal) ->\n");
    printf("------------------------------------------------------------\n");

    for (double x = start_x; x <= end_x; x += step) {
        // Calculate actual values
        double y1 = exp(-a * x);
        double y2 = 0.5 * exp(-a * x * x / 2.0);

        // Convert values (0.0 to 1.0) to column positions (0 to WIDTH)
        int pos1 = (int)(y1 * WIDTH);
        int pos2 = (int)(y2 * WIDTH);

        printf("%4.2f | ", x);

        // Print the row
        for (int col = 0; col <= WIDTH; col++) {
            if (col == pos1 && col == pos2) {
                printf("#"); // Both functions overlap
            } else if (col == pos1) {
                printf("*"); // Function 1
            } else if (col == pos2) {
                printf("0"); // Function 2
            } else if ((col > pos1 && col < pos2) || (col > pos2 && col < pos1)) {
                printf("-"); // Connect them with dashes like your image
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}