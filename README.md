# puyo

学部 1 年の時に作ったぷよぷよ（もどき）

## ルール

パズルは、高さ H マス、横 5 マスのセルから成り立っています。各セルには 1 から 9 までの数字が書かれている石が配置されています。3 つ以上横方向にならんでいる石は取り除くことが出来ます。すべての石を取り除いた後、取り除いた石の上に石がある場合は下に落ちてきて空いたマスを埋めます。これを反復的に行い、石がもう取れなくなる状態まで行います。取り除いた石に書かれている数字の合計が点数となります。

- 入力：
  セルの高さ・各行の石の並び
- 出力：
  最終状態・点数

## 実行

`gcc -o puyo puyo.c`
`./puyo`
