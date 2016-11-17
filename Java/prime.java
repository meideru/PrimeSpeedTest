
// 1からMAXまでの素数を求めるプログラム
// 古典的なアルゴリズムでコーディング

import java.util.Scanner;
//import System.

class prime
{
  // 求める素数の最大値
  static final long MAX = 1000000;

  public static void main(String[] args)
  {
    long count = 0; // 見つかった素数の数
    long start, end, delta;

    // 時間計測開始
    start = System.currentTimeMillis();

    // 素数を求める
    for (long pri = 2; pri <= MAX; pri++) {
      for (long no = 2; no <= pri; no++) {
        if(pri == no) {
          System.out.println(pri);
          count++;
        }
        else if (pri % no == 0) {
          break;
        }
      }
    }

    // 時間計測終了
    end = System.currentTimeMillis();
    delta = end - start;

    // 結果を表示
    System.out.println("見つかった素数の数は" + count + "個です。");
    System.out.println("かかった時間は" + (double)delta / 1000 + "秒です。");
  }
}
