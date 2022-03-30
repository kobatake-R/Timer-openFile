#ifndef INDEX_H
#define INDEX_H

//------------------------------------------------
//  マクロ定義(Macro definition)
//------------------------------------------------
#define FPS (1)
#define INTERVAL (1000/FPS)
#define SECOND (60) //秒用
#define MINUTES (60) //分用
#define TIME (9) //時用

//------------------------------------------------
//  型定義(Type definition)
//------------------------------------------------
typedef struct {//画面表示用構造体
    int count;
    int time[TIME]; //時用
    int minutes[MINUTES]; //分用
    int second[SECOND]; //秒用
}TIMER;

TIMER timer; //測定用
TIMER set1; //時間設定用１
TIMER set2; //時間設定用２
//------------------------------------------------
//  プロトタイプ宣言(Prototype declaration)
//------------------------------------------------
void DrawScreen();
void Reset();
void setting1();
void setting2();
void setting_interval();
//------------------------------------------------

#endif