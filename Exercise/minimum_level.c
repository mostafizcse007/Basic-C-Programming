#include <stdio.h>

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--)
    {
        int n; // Number of segments in the level
        scanf("%d", &n);

        int segments[n][2]; // Array to store segment boundaries

        // Input segment boundaries
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &segments[i][0], &segments[i][1]);
        }

        // Finding minimum k
        int k = 1;
        while (1)
        {
            int max_range = segments[0][1] - segments[0][0]; // Maximum range for the first segment

            // Check intersection of ranges for each segment
            for (int i = 1; i < n; i++)
            {
                int intersection = segments[i][1] - segments[i][0];
                max_range = (max_range < intersection) ? max_range : intersection;
            }

            // If max_range is non-positive, increment k and continue
            if (max_range <= 0)
            {
                k++;
                continue;
            }
            else
            {
                printf("%d\n", k); // Output the minimum value of k
                break;
            }
        }
    }

    return 0;
}
