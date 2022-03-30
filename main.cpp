#include <iostream>
#include <time.h>
#include <conio.h>
#include "index.h"
//#include "Timer.cpp"
using namespace std;

int main() {
    bool choise = true;
    clock_t lastClock = clock();
    int cut = 1;//カウント用変数
    Reset();
    while (1) {
        if (choise) {
            cut = 1;
            setting_interval();
            setting1();
            setting2();
            choise = false;
        }
        Reset();
        while (1) {
            clock_t nowClock = clock();
            if (nowClock >= lastClock + INTERVAL) {
                timer.second[SECOND]++;
                DrawScreen();
                lastClock = nowClock;
            }

            if (timer.second[SECOND] == 59) {
                timer.minutes[MINUTES]++;
                timer.second[SECOND] = -1;
            }

            if (timer.minutes[MINUTES] == 59) {
                timer.time[TIME]++;
                timer.minutes[MINUTES] = -1;
            }
            if (timer.second[SECOND] == set1.second[SECOND] && timer.minutes[MINUTES] == set1.minutes[MINUTES] && timer.time[TIME] == set1.time[TIME]) {
                cout << "\a\a\a";
                break;
            }
        }
        Reset();
        while (1) {
            clock_t nowClock = clock();
            if (nowClock >= lastClock + INTERVAL) {
                timer.second[SECOND]++;
                DrawScreen();
                lastClock = nowClock;
            }

            if (timer.second[SECOND] == 59) {
                timer.minutes[MINUTES]++;
                timer.second[SECOND] = -1;
            }

            if (timer.minutes[MINUTES] == 59) {
                timer.time[TIME]++;
                timer.minutes[MINUTES] = -1;
            }
            if (timer.second[SECOND] == set2.second[SECOND] && timer.minutes[MINUTES] == set2.minutes[MINUTES] && timer.time[TIME] == set2.time[TIME]) {
                cout << "\a";
                break;
            }
        }
        DrawScreen();
        if (cut < timer.count) {
            cut++;
            choise = false;
        }
        else {
            cout << "終わり：a" << endl << "時間を変更して続ける：ｄ" << endl << "時間を変更せず続ける：ｓ";
            switch (_getch()) {
            case 'a'://終了
                return 0;
            case 'd'://時間を変更して続ける
                choise = true;
                break;
            case 's'://時間を変更せず続ける
                choise = false;
                break;
            }
        }
        system("cls");
    }
}
