#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long len = s.length();
    if (len == 1 && s[0] == 'a') {
        return n;
    }
    if (n < len) {
        long t = 0;
        for (long i = 0; i < n; i++) {
            if (s[i] == 'a') {
                t++;
            }
        }
        return t;
    }

    long per = 0;
    for (long i = 0; i < len; i++) {
        if (s[i] == 'a') {
            per++;
        }
    }
    long tot = 0;
    long q = (n / len);
    long used = q * len;
    tot += (q * per);
    for (long i = used; i < n; i++) {
        if (s[i%len] == 'a') {
            tot++;
        }
    }
    return tot;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
