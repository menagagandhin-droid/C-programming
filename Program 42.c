#include <stdio.h>

int main() {
    float totalScore, overs, runRate, percentage;

    printf("Enter total score: ");
    scanf("%f", &totalScore);

    printf("Enter total overs played: ");
    scanf("%f", &overs);

    runRate = totalScore / overs;

    // Convert run rate to percentage (assuming 10 runs per over is 100%)
    percentage = (runRate / 10) * 100;

    printf("Run Rate: %.2f\n", runRate);
    printf("Performance Percentage: %.2f%%\n", percentage);

    if (percentage < 50) {
        printf("Prediction: Opponent team is likely to win.\n");
    } else if (percentage < 75) {
        printf("Prediction: Match is competitive.\n");
    } else {
        printf("Prediction: Batting team is likely to win.\n");
    }

    return 0;
}
