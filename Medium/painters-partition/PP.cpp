#include <iostream>
#include <vector>
using namespace std;

bool isValidAllocation(vector<int>& boardLengths, int totalBoards, int totalPainters, int maxAllowedWorkload) {
    int painterCount = 1;          // Number of painters assigned
    int currentWorkload = 0;       // Workload for the current painter

    for (int i = 0; i < totalBoards; i++) {
        if (boardLengths[i] > maxAllowedWorkload) return false;

        if (currentWorkload + boardLengths[i] <= maxAllowedWorkload) {
            // Assign current board to the same painter
            currentWorkload += boardLengths[i];
        } else {
            // Assign board to the next painter
            painterCount++;
            currentWorkload = boardLengths[i];
            if (painterCount > totalPainters) return false;
        }
    }
    return true;
}

int findMinimumTime(vector<int>& boardLengths, int totalBoards, int totalPainters) {
    if (totalBoards == 0 || totalPainters == 0 || totalBoards < totalPainters) return -1;

    int bestWorkload = -1;

    // Search space boundaries
    int minPossibleWorkload = 0, maxPossibleWorkload = 0;
    for (int i = 0; i < totalBoards; i++) {
        minPossibleWorkload = max(minPossibleWorkload, boardLengths[i]); // biggest single board
        maxPossibleWorkload += boardLengths[i];                          // total length of all boards
    }

    // Binary Search
    while (minPossibleWorkload <= maxPossibleWorkload) {
        int candidateWorkload = minPossibleWorkload + (maxPossibleWorkload - minPossibleWorkload) / 2;

        if (isValidAllocation(boardLengths, totalBoards, totalPainters, candidateWorkload)) {
            bestWorkload = candidateWorkload;
            maxPossibleWorkload = candidateWorkload - 1;
        } else {
            minPossibleWorkload = candidateWorkload + 1;
        }
    }
    return bestWorkload;
}

int main() {
    vector<int> boardLengths = {40, 30, 10, 20};
    int totalBoards = boardLengths.size();
    int totalPainters = 2;

    cout << findMinimumTime(boardLengths, totalBoards, totalPainters) << endl;
    return 0;
}
