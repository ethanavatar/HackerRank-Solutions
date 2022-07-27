#include <stdio.h> // printf

int solve(int grade) {
    int nextMultiple = grade + (5 - grade % 5);
    if (grade >= 38 && (nextMultiple - grade) < 3) {
        return nextMultiple;
    }
    return grade;
}

int main() {
    int n;
    scanf("%d", &n);

    int grades[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    for (int i = 0; i < n; i++) {
        int roundedGrade = solve(grades[i]);
        printf("%d\n", roundedGrade);
    }

    return 0;
}