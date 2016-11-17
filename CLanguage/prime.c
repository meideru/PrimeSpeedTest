
// 1からMAXまでの素数を求めるプログラム
// 古典的なアルゴリズムでコーディング

#include <stdio.h>
#include <time.h>

// 求める素数の最大値
#define MAX 1000000

int main(void)
{
  long pri;       // 素数の候補
  long no;        // 割る数
  long count = 0; // 見つかった素数の数
  clock_t start, end, delta;

  // 時間計測開始
  start = clock();

  // 素数を求める
  for (pri = 2; pri <= MAX; pri++) {
    for (no = 2; no <= pri; no++) {
      if (pri == no){
        printf("%ld\n", pri);
        count++;
      }
      else if (pri % no == 0){
        break;
      }
    }
  }

  // 時間計測終了
  end = clock();
  // かかった時間を求める
  delta = end - start;

  // 結果を表示
  printf("見つかった素数の数は%ld個です。\n", count);
  printf("かかった時間は%lf秒です。\n", (double)(delta) / CLOCKS_PER_SEC);

  return 0;
}
