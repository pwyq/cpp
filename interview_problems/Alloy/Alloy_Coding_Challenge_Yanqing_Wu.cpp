#include <iostream>
#include <string>
#include <vector>
#include <map>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::cin;
using std::map;

vector<string> split(const string &txt, char ch) {
    vector<string> res;
    int pos = txt.find( ch );
    int initialPos = 0;

    int t = 0;   // only split twice
    while( pos != string::npos && t++ < 2) {
        res.push_back( txt.substr(initialPos, pos - initialPos));
        initialPos = pos + 1;
        pos = txt.find(ch, initialPos);
    }
    res.push_back(txt.substr(initialPos, std::min(pos, txt.size()) - initialPos + 1));
    return res;
}

int main() {
    int n;
    cin >> n;               // This leaves \n at the end
    cin.ignore(1,'\n');

    string line;
    map<char, string> m;
    vector <string> output;
    while (getline(cin, line) && n-- > 0) {
        vector<string> l = split(line, ':');
        string id   = l[0];
        char type   = l[1][0];
        string desc = l[2];

        string res = "";
        if (type == 'T' || type == 'A') {
            m.clear();      // reset map
            m[type] = id;
            res += "0:" + id + ":" + string(1, type) + ":" + desc;
        }
        else {
            if (m.count('T') > 0) {
                m[type] = id;
                switch (type) {
                    case 'O':
                        res += m['T'] + ":" + id + ":" + string(1, type) + ":" + desc;
                        break;
                    case 'P':
                        // If P appears before O, should we use T's id instead of O's id?
                        res += m['O'] + ":" + id + ":" + string(1, type) + ":" + desc;
                        break;
                    default:
                        // cout << "edge case\n";
                }
            }
            else if (m.count('A') > 0) {
                m[type] = id;
                switch (type) {
                    case 'O':
                        res += m['A'] + ":" + id + ":" + string(1, type) + ":" + desc;
                        break;
                    case 'I':
                        res += m['O'] + ":" + id + ":" + string(1, type) + ":" + desc;
                        break;
                    case 'P':
                        res += m['I'] + ":" + id + ":" + string(1, type) + ":" + desc;
                        break;
                    default:
                        // cout << "edge case\n";
                }
            }
        }
        output.push_back(res);
    }

    for (auto s : output)
        cout << s << endl;
    return 0;
}