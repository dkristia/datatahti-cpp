#include <bits/stdc++.h>
using namespace std;

int main () {
    string inp;
    getline(cin, inp);
    stringstream stream(inp);
    string temp;
    vector<int> date;
    while(getline(stream, temp, '.')) {
        date.insert(date.end(), stoi(temp));
    }
    int day = date[0], month = date[1], year = date[2];
    int days = day;
    int monthdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < month-1; i++) {
        days += monthdays[i];
    }
    int leapdays = year/4 - year/100 + year/400;
    if (month <= 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        leapdays--;
    }
    days += leapdays + (year-1)*365;
    string weekdays[7] = {"sunnuntai", "maanantai", "tiistai", "keskiviikko", "torstai", "perjantai", "lauantai"};
    cout << weekdays[days%7];
}