#include <MIDI.h>
#include <Servo.h>
Servo myservo1; //根本旋回サーボ
Servo myservo2; //根本前後サーボ
Servo myservo3; //手首サーボ
Servo myservo4; //グリッパーサーボ

MIDI_CREATE_DEFAULT_INSTANCE(); //標準設定でインスタンス作成

void setup() {
  Serial.begin(31250); //ボーレート31250bbs
  myservo1.attach(3); 
  myservo2.attach(5); 
  myservo3.attach(6); 
  myservo4.attach(9); 
  MIDI.begin(1); //Ch1を読み取り
}

void loop() {
  int rx;
  int rx1;
  int rx2;
  int rx3;
  do {
    rx =  MIDI.read(); //MIDI読み取り
    rx1 = MIDI.getType(); //1バイト目
    rx2 = MIDI.getData1(); //2バイト目
    rx3 = MIDI.getData2(); //3バイト目
    if (rx !=0) { //デバッグ用  
      //Serial.println(rx1);
      //Serial.println(rx2);
      //Serial.println(rx3);
      
    } if (rx1 != 0 and rx1 == 144 and rx2 == 1 and rx3 !=0) { //MIDIでNoteOnの時:根本旋回サーボ
      myservo1.write(6);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 2 and rx3 !=0) {
      myservo1.write(12);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 3 and rx3 !=0) {
      myservo1.write(18);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 4 and rx3 !=0) {
      myservo1.write(24);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 5 and rx3 !=0) {
      myservo1.write(30);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 6 and rx3 !=0) {
      myservo1.write(36);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 7 and rx3 !=0) {
      myservo1.write(42);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 8 and rx3 !=0) {
      myservo1.write(48);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 9 and rx3 !=0) {
      myservo1.write(54);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 10 and rx3 !=0) {
      myservo1.write(60);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 11 and rx3 !=0) {
      myservo1.write(66);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 12 and rx3 !=0) {
      myservo1.write(72);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 13 and rx3 !=0) {
      myservo1.write(78);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 14 and rx3 !=0) {
      myservo1.write(84);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 15 and rx3 !=0) {
      myservo1.write(90);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 16 and rx3 !=0) {
      myservo1.write(96);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 17 and rx3 !=0) {
      myservo1.write(102);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 18 and rx3 !=0) {
      myservo1.write(108);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 19 and rx3 !=0) {
      myservo1.write(114);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 20 and rx3 !=0) {
      myservo1.write(120);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 21 and rx3 !=0) {
      myservo1.write(126);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 22 and rx3 !=0) {
      myservo1.write(132);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 23 and rx3 !=0) {
      myservo1.write(138);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 24 and rx3 !=0) {
      myservo1.write(144);  
    } if (rx1 != 0 and rx1 == 144 and rx2 == 25 and rx3 !=0) {
      myservo1.write(150);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 26 and rx3 !=0) {
      myservo1.write(156);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 27 and rx3 !=0) {
      myservo1.write(162);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 28 and rx3 !=0) {
      myservo1.write(168);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 29 and rx3 !=0) {
      myservo1.write(174);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 30 and rx3 !=0) {
      myservo1.write(180); 

    } if (rx1 != 0 and rx1 == 144 and rx2 == 31 and rx3 !=0) { //MIDIでNoteOnの時:根本前後サーボ
      myservo2.write(6);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 32 and rx3 !=0) {
      myservo2.write(12);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 33 and rx3 !=0) {
      myservo2.write(18);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 34 and rx3 !=0) {
      myservo2.write(24);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 35 and rx3 !=0) {
      myservo2.write(30);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 36 and rx3 !=0) {
      myservo2.write(36);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 37 and rx3 !=0) {
      myservo2.write(42);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 38 and rx3 !=0) {
      myservo2.write(48);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 39 and rx3 !=0) {
      myservo2.write(54);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 40 and rx3 !=0) {
      myservo2.write(60);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 41 and rx3 !=0) {
      myservo2.write(66);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 42 and rx3 !=0) {
      myservo2.write(72);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 43 and rx3 !=0) {
      myservo2.write(78);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 44 and rx3 !=0) {
      myservo2.write(84);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 45 and rx3 !=0) {
      myservo2.write(90);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 46 and rx3 !=0) {
      myservo2.write(96);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 47 and rx3 !=0) {
      myservo2.write(102);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 48 and rx3 !=0) {
      myservo2.write(108);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 49 and rx3 !=0) {
      myservo2.write(114);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 50 and rx3 !=0) {
      myservo2.write(120);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 51 and rx3 !=0) {
      myservo2.write(126);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 52 and rx3 !=0) {
      myservo2.write(132);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 53 and rx3 !=0) {
      myservo2.write(138);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 54 and rx3 !=0) {
      myservo2.write(144);  
    } if (rx1 != 0 and rx1 == 144 and rx2 == 55 and rx3 !=0) {
      myservo2.write(150);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 56 and rx3 !=0) {
      myservo2.write(156);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 57 and rx3 !=0) {
      myservo2.write(162);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 58 and rx3 !=0) {
      myservo2.write(168);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 59 and rx3 !=0) {
      myservo2.write(174);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 60 and rx3 !=0) {
      myservo2.write(180); 

    } if (rx1 != 0 and rx1 == 144 and rx2 == 61 and rx3 !=0) { //MIDIでNoteOnの時:手首サーボ
      myservo3.write(6);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 62 and rx3 !=0) {
      myservo3.write(12);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 63 and rx3 !=0) {
      myservo3.write(18);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 64 and rx3 !=0) {
      myservo3.write(24);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 65 and rx3 !=0) {
      myservo3.write(30);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 66 and rx3 !=0) {
      myservo3.write(36);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 67 and rx3 !=0) {
      myservo3.write(42);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 68 and rx3 !=0) {
      myservo3.write(48);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 69 and rx3 !=0) {
      myservo3.write(54);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 70 and rx3 !=0) {
      myservo3.write(60);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 71 and rx3 !=0) {
      myservo3.write(66);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 72 and rx3 !=0) {
      myservo3.write(72);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 73 and rx3 !=0) {
      myservo3.write(78);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 74 and rx3 !=0) {
      myservo3.write(84);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 75 and rx3 !=0) {
      myservo3.write(90);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 76 and rx3 !=0) {
      myservo3.write(96);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 77 and rx3 !=0) {
      myservo3.write(102);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 78 and rx3 !=0) {
      myservo3.write(108);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 79 and rx3 !=0) {
      myservo3.write(114);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 80 and rx3 !=0) {
      myservo3.write(120);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 81 and rx3 !=0) {
      myservo3.write(126);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 82 and rx3 !=0) {
      myservo3.write(132);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 83 and rx3 !=0) {
      myservo3.write(138);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 84 and rx3 !=0) {
      myservo3.write(144);  
    } if (rx1 != 0 and rx1 == 144 and rx2 == 85 and rx3 !=0) {
      myservo3.write(150);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 86 and rx3 !=0) {
      myservo3.write(156);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 87 and rx3 !=0) {
      myservo3.write(162);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 88 and rx3 !=0) {
      myservo3.write(168);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 89 and rx3 !=0) {
      myservo3.write(174);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 90 and rx3 !=0) {
      myservo3.write(180); 

    } if (rx1 != 0 and rx1 == 144 and rx2 == 91 and rx3 !=0) { //MIDIでNoteOnの時:グリッパーサーボ
      myservo4.write(6);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 92 and rx3 !=0) {
      myservo4.write(12);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 93 and rx3 !=0) {
      myservo4.write(18);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 94 and rx3 !=0) {
      myservo4.write(24);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 95 and rx3 !=0) {
      myservo4.write(30);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 96 and rx3 !=0) {
      myservo4.write(36);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 97 and rx3 !=0) {
      myservo4.write(42);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 98 and rx3 !=0) {
      myservo4.write(48);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 99 and rx3 !=0) {
      myservo4.write(54);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 100 and rx3 !=0) {
      myservo4.write(60);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 101 and rx3 !=0) {
      myservo4.write(66);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 102 and rx3 !=0) {
      myservo4.write(72);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 103 and rx3 !=0) {
      myservo4.write(78);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 104 and rx3 !=0) {
      myservo4.write(84);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 105 and rx3 !=0) {
      myservo4.write(90);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 106 and rx3 !=0) {
      myservo4.write(96);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 107 and rx3 !=0) {
      myservo4.write(102);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 108 and rx3 !=0) {
      myservo4.write(108);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 109 and rx3 !=0) {
      myservo4.write(114);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 110 and rx3 !=0) {
      myservo4.write(120);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 111 and rx3 !=0) {
      myservo4.write(126);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 112 and rx3 !=0) {
      myservo4.write(132);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 113 and rx3 !=0) {
      myservo4.write(138);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 114 and rx3 !=0) {
      myservo4.write(144);  
    } if (rx1 != 0 and rx1 == 144 and rx2 == 115 and rx3 !=0) {
      myservo4.write(150);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 116 and rx3 !=0) {
      myservo4.write(156);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 117 and rx3 !=0) {
      myservo4.write(162);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 118 and rx3 !=0) {
      myservo4.write(168);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 119 and rx3 !=0) {
      myservo4.write(174);
    } if (rx1 != 0 and rx1 == 144 and rx2 == 120 and rx3 !=0) {
      myservo4.write(180); 
    } else {
    }
  } while (rx !=0);
}
