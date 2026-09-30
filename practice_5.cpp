#include <iostream>
using namespace std;

int main()
{
    // number 1
    const int SIZE = 12;
    int arr[SIZE];
    int total = 0;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter profit for month " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < SIZE; i++) {
        total += arr[i];
    }
    int maxProfit = arr[0];
    int minProfit = arr[0];
    int maxMonth = 0;
    int minMonth = 0;
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > maxProfit) {
            maxProfit = arr[i];
            maxMonth = i;
        }
        if (arr[i] < minProfit) {
            minProfit = arr[i];
            minMonth = i;
        }
    }
    double average = (double)total / SIZE;
    cout << "\nTotal profit: " << total << endl;
    cout << "Maximum profit: " << maxProfit
        << " (month " << maxMonth + 1 << ")" << endl;
    cout << "Minimum profit: " << minProfit
        << " (month " << minMonth + 1 << ")" << endl;
    cout << "Average profit: " << average << endl;
    cout << '\n';

    //number 2
    const int SIZEE = 10;
    int array[SIZEE] = { 0,1,2,3,4,5,6,7,8,9 };
    for (int i = SIZEE - 1;i >= 0;i--) {
        cout << array[i] << " ";
    }

    //number 3
    const int SIZEEE = 5;
    int arrr[SIZEEE];
    int totale = 0;
    for (int i = 0; i < SIZEEE; ++i) {
        cout << "Enter size of side " << i + 1 << ": ";
        cin >> arrr[i];
    }
    for (int i = 0; i < SIZEEE; i++) {
        totale += arrr[i];
    }
    cout << "The perimeter of pentagon is " << totale;


    //number 4

}
    