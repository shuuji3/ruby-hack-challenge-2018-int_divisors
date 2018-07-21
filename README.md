# ruby-hack-challenge-2018-int_divisors
[RubyHackChallenge](https://github.com/ko1/rubyhackchallenge)の課題1で実装したRubyの拡張ライブラリ。

## ライブラリの機能
Integer型に以下のメソッドを追加する。

| メソッド名 | 機能 |
| --- | --- |
| `Integer#divisors` | 数の公倍数を求め、Arrayとして返す。 |
| `Integer#is_prime?` | 数が素数であるかどうかを返す述語 |
| `Integer#is_perfect?` | 数が完全数であるかどうかを返す述語 |

- 注意: 計算量は考えていないので大きな数だとすごく時間がかかる。

## ライセンス
- [GNU General Public License v3.0](LICENSE)
