#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int main()
{
    long long a;
    long double total_length = 0;
    srand(time(0));
    cout << "How many samples should be taken?" << endl;
    cin >> a;
    float x1;
    float y1;
    float x2;
    float y2;
    float distance;

    for (long long i = 1; i <= a; i++)
    {
        x1 = rand() / 32767.0;
        y1 = rand() / 32767.0;
        x2 = rand() / 32767.0;
        y2 = rand() / 32767.0;

        distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

        total_length = total_length + distance;
    }

    cout << "Average: " << total_length / a;
}
