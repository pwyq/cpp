#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    // count the # of times he crosses the sea level
    int alt = 0;
    int lo = 0;

    for (int i = 0; i < n; i++) {
        // cout << "curr char = " << s[i] << endl;
        if (s[i] == 'U') {
            alt++;
        }
        else if (s[i] == 'D') {
            if (alt == 0) {
                lo++;
            }
            alt--;
        }
    }
    return lo;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
