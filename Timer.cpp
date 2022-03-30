#include <iostream>
#include <time.h>
#include <conio.h>
#include "index.h"
using namespace std;

void DrawScreen() { //画面描写
    system("cls");
    cout << set1.time[TIME] << " : " << set1.minutes[MINUTES] << " : " << set1.second[SECOND] << endl;
    cout << set2.time[TIME] << " : " << set2.minutes[MINUTES] << " : " << set2.second[SECOND] << endl;
    cout << timer.time[TIME] << " : " << timer.minutes[MINUTES] << " : " << timer.second[SECOND];
    cout << endl << endl;
}

void Reset() { //リセット用
    timer.second[SECOND] = 0;
    timer.minutes[MINUTES] = 0;
    timer.time[TIME] = 0;
}

void setting1() {//時間１の設定
    DrawScreen();
    cout << "時間１の時間" << endl;
    while (1) {//9時間以上の時間を入力できないようにする
        cin >> set1.time[TIME];
        if (set1.time[TIME] < 9) {
            break;
        }
    }
    DrawScreen();
    cout << "時間１の分" << endl;
    while (1) {// 59分以上の時間を入力できないようにする
        cin >> set1.minutes[MINUTES];
        if (set1.minutes[MINUTES] < 60) {
            break;
        }
    }
    DrawScreen();
    cout << "時間１の秒" << endl;
    while (1) {//59秒以上の時間を入力できないようにする
        cin >> set1.second[SECOND];
        if (set1.second[SECOND] < 60) {
            break;
        }
    }
}

void setting2() {//時間２の設定
    DrawScreen();
    cout << "時間２の時間" << endl;
    while (1) {//9時間以上の時間を入力できないようにする
        cin >> set2.time[TIME];
        if (set2.time[TIME] < 9) {
            break;
        }
    }
    DrawScreen();
    cout << "時間２の分" << endl;
    while (1) {//59分以上の時間を入力できないようにする
        cin >> set2.minutes[MINUTES];
        if (set2.minutes[MINUTES] < 60) {
            break;
        }
    }
    DrawScreen();
    cout << "時間２の秒" << endl;
    while (1) {//59秒以上の時間を入力できないようにする
        cin >> set2.second[SECOND];
        if (set2.second[SECOND] < 60) {
            break;
        }
    }
}

void setting_interval() { //インターバル回数指定
    cout << "何回繰り返す？" << endl;
    while (1) {
        cin >> timer.count;
        if (timer.count) {//０と入力された場合ループ
            return;
        }
    }
}