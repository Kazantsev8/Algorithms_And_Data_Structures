#include <iostream>

using namespace std;

//Домашнее задание 4 урок. Казанцев Иван.
//задание 2
int main() {
    int n, current1, maxF = 0, currentCount = 0, maxCount = 1, prev;
    cout << "How many elements your array will have?: ";
    cin >> n;
    cout << "Enter " << n << " numbers: " << endl;
    cin >> maxF;
    prev = maxF;
    for (int current, i = 1; i < n; i++) {
        cin >> current;
        if (current - prev == 1) {
            if (!currentCount)
                current1 = prev, currentCount = 1;
            currentCount++;
            if (currentCount > maxCount)
                maxF = current1, maxCount = currentCount;
        }
        else {
            current1 = 0;
            currentCount = 0;
        }
        prev = current;
    }
    cout << "Max count of increasing sequence is " << maxCount << endl;
    cout << "Thats sequence is: ";
    for (int i = maxF; i < maxF + maxCount; i++)
        cout << i << " ";

    return 0;


}