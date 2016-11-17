#coding:utf-8

# 1からMAXまでの素数を求めるプログラム
# 古典的なアルゴリズムでコーディング

import time

# 求める素数の最大値
MAX = 1000000

# 見つかった素数の数
count = 0

# 時間計測開始
start = time.time()

# 素数を求める
for pri in range(2, MAX + 1):
    for no in range(2, pri + 1):
        if pri == no:
            print(pri)
            count += 1
        elif pri % no == 0:
            break

# 時間計測終了
end = time.time()
delta = end - start

print u'見つかった素数の数は' + str(count) + ' 個です。'
print u'かかった時間は' + str(delta) + '秒です。'
