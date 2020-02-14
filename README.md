# MIDI_Servo_Control
 Arduino用 MIDIでサーボモーターを制御するプログラム。ノートNo.1~120まで、ノートONのみ対応

 ## 概要
このプログラムは、MIDIでサーボモーター4つを制御します。

![Picture](https://github.com/YoutechA320U/MIDI_Servo_Control/blob/master/SS/picture1.jpg "3軸ロボットアーム") 
## 開発環境
    Arduino UNO

## インストールが必要なライブラリ
    Arduino：MIDI

## 必要な部品
|部品名|型番など|数量|
|:---|:--:|---:|
|Arduino|[Arduino Uno Rev3](http://akizukidenshi.com/catalog/g/gM-07385/) |1|
|DIN-5ソケット(メス)|[KDJ103-5](http://akizukidenshi.com/catalog/g/gC-09565/)など|1|
|1/4Wカーボン抵抗|220Ω|1|
||270Ω|1|
|スイッチングダイオード|[1N1418](http://akizukidenshi.com/catalog/g/gI-00941/)など|1|
|フォトカプラ|[TLP785](http://akizukidenshi.com/catalog/g/gI-07554/)|1|
|サーボモーター|[SG-90](http://akizukidenshi.com/catalog/g/gM-08761/)など|4|

## 回路図
回路図さくせいちゅう！

## 使い方
コメントさくせいちゅう！

## 備考
電源の出力が足りないと複数のサーボモーターを動かせない事ががあります。その場合サーボモーターのみArduino以外から給電してください。

## 履歴
    [2020/02/14] - 初回リリース
