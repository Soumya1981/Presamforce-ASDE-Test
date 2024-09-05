#include <iostream>
#include <vector>
using namespace std;

bool canProceed(int index, int powerLeft, int skipsLeft, int rechargesLeft, const vector<int> &powers, int initialPower, bool skippedPrevious)
{
    if (index > 10)
        return true;

    int currentPower = powers[index];

    // Special case for adding power at indices 3 and 7
    if ((index == 3 || index == 7) && !skippedPrevious)
    {
        currentPower += powers[index - 1] / 2;
    }

    if (currentPower <= powerLeft)
    {
        // Proceed normally if you have enough power
        return canProceed(index + 1, powerLeft - currentPower, skipsLeft, rechargesLeft, powers, initialPower, false);
    }
    else
    {
        // Try skipping the current step if skips are available
        if (skipsLeft > 0)
        {
            if (canProceed(index + 1, powerLeft, skipsLeft - 1, rechargesLeft, powers, initialPower, true))
                return true;
        }
        // Try recharging if recharges are available
        if (rechargesLeft > 0 && initialPower >= currentPower)
        {
            if (canProceed(index + 1, initialPower - currentPower, skipsLeft, rechargesLeft - 1, powers, initialPower, false))
                return true;
        }

        // If neither option works, return false
        return false;
    }
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int initialPower, skips, recharges;
        cin >> initialPower >> skips >> recharges;

        vector<int> powers(11);
        for (int i = 0; i < 11; ++i)
        {
            cin >> powers[i];
        }

        bool isWin = canProceed(0, initialPower, skips, recharges, powers, initialPower, false);
        if(isWin ==0)  cout << "NO";
        else cout << "YES";
        cout << endl;
    }

    return 0;
}
