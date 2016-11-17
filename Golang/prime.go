
// 1からMAXまでの素数を求めるプログラム
// 古典的なアルゴリズムでコーディング

package main

import (
  "fmt"
  "time"
  "strconv"
)

// 求める素数の最大値
const MAX = 1000000

func main() {
  // 見つかった素数の数
  count := 0

  // 時間計測開始
  start := time.Now()

  // 素数を求める
  for pri := 2; pri <= MAX; pri++ {
    for no := 2; no <= pri; no++ {
      if (pri == no) {
        fmt.Println(pri)
        count++
      } else if (pri % no == 0) {
        break;
      }
    }
  }

  // 時間計測終了
  end := time.Now()
  delta := (end.Sub(start)).Seconds()

  // 結果を表示
  fmt.Println("見つかった素数の数は" + strconv.Itoa(count) + "個です。")
  fmt.Println("かかった時間は" + strconv.FormatFloat(delta, 'f', 8, 64) + "秒です。")
}
