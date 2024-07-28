String Mymessage;  //Initialized variable to store recieved data

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
  Serial2.begin(9600);
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(43, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(50, OUTPUT);
}

void loop() {
  if (Serial2.available()) {
    Mymessage = Serial2.readStringUntil(char(13));  // Mymessage=Mymessage.substring(0,2);
    Serial.println(Mymessage);
    if (Mymessage == "a1") {  //Read the serial data and store in var
      digitalWrite(20, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "a0") {  //Read the serial data and store in var
      digitalWrite(20, LOW);
      Mymessage = "";
    }
    if (Mymessage == "b1") {  //Read the serial data and store in var
      digitalWrite(21, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "b0") {  //Read the serial data and store in var
      digitalWrite(21, LOW);
      Mymessage = "";
    }
    if (Mymessage == "c1") {  //Read the serial data and store in var
      digitalWrite(22, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "c0") {  //Read the serial data and store in var
      digitalWrite(22, LOW);
      Mymessage = "";
    }
    if (Mymessage == "d1") {  //Read the serial data and store in var
      digitalWrite(23, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "d0") {  //Read the serial data and store in var
      digitalWrite(23, LOW);
      Mymessage = "";
    }
    if (Mymessage == "e1") {  //Read the serial data and store in var
      digitalWrite(24, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "e0") {  //Read the serial data and store in var
      digitalWrite(24, LOW);
      Mymessage = "";
    }
    if (Mymessage == "f1") {  //Read the serial data and store in var
      digitalWrite(25, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "f0") {  //Read the serial data and store in var
      digitalWrite(25, LOW);
      Mymessage = "";
    }
    if (Mymessage == "g1") {  //Read the serial data and store in var
      digitalWrite(26, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "g0") {  //Read the serial data and store in var
      digitalWrite(26, LOW);
      Mymessage = "";
    }
    if (Mymessage == "h1") {  //Read the serial data and store in var
      digitalWrite(27, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "h0") {  //Read the serial data and store in var
      digitalWrite(27, LOW);
      Mymessage = "";
    }
    if (Mymessage == "i1") {  //Read the serial data and store in var
      digitalWrite(28, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "i0") {  //Read the serial data and store in var
      digitalWrite(28, LOW);
      Mymessage = "";
    }
    if (Mymessage == "j1") {  //Read the serial data and store in var
      digitalWrite(29, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "j0") {  //Read the serial data and store in var
      digitalWrite(29, LOW);
      Mymessage = "";
    }
    if (Mymessage == "k1") {  //Read the serial data and store in var
      digitalWrite(30, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "k0") {  //Read the serial data and store in var
      digitalWrite(30, LOW);
      Mymessage = "";
    }
    if (Mymessage == "l1") {  //Read the serial data and store in var
      digitalWrite(31, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "l0") {  //Read the serial data and store in var
      digitalWrite(31, LOW);
      Mymessage = "";
    }
    if (Mymessage == "m1") {  //Read the serial data and store in var
      digitalWrite(32, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "m0") {  //Read the serial data and store in var
      digitalWrite(32, LOW);
      Mymessage = "";
    }
    if (Mymessage == "n1") {  //Read the serial data and store in var
      digitalWrite(33, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "n0") {  //Read the serial data and store in var
      digitalWrite(33, LOW);
      Mymessage = "";
    }
    if (Mymessage == "o1") {  //Read the serial data and store in var
      digitalWrite(34, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "o0") {  //Read the serial data and store in var
      digitalWrite(34, LOW);
      Mymessage = "";
    }
    if (Mymessage == "p1") {  //Read the serial data and store in var
      digitalWrite(35, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "p0") {  //Read the serial data and store in var
      digitalWrite(35, LOW);
      Mymessage = "";
    }
    if (Mymessage == "q1") {  //Read the serial data and store in var
      digitalWrite(36, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "q0") {  //Read the serial data and store in var
      digitalWrite(36, LOW);
      Mymessage = "";
    }
    if (Mymessage == "r1") {  //Read the serial data and store in var
      digitalWrite(37, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "r0") {  //Read the serial data and store in var
      digitalWrite(37, LOW);
      Mymessage = "";
    }
    if (Mymessage == "s1") {  //Read the serial data and store in var
      digitalWrite(38, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "s0") {  //Read the serial data and store in var
      digitalWrite(38, LOW);
      Mymessage = "";
    }
    if (Mymessage == "t1") {  //Read the serial data and store in var
      digitalWrite(39, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "t0") {  //Read the serial data and store in var
      digitalWrite(39, LOW);
      Mymessage = "";
    }
    if (Mymessage == "u1") {  //Read the serial data and store in var
      digitalWrite(40, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "u0") {  //Read the serial data and store in var
      digitalWrite(40, LOW);
      Mymessage = "";
    }
    if (Mymessage == "v1") {  //Read the serial data and store in var
      digitalWrite(41, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "v0") {  //Read the serial data and store in var
      digitalWrite(41, LOW);
      Mymessage = "";
    }
    if (Mymessage == "w1") {  //Read the serial data and store in var
      digitalWrite(42, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "w0") {  //Read the serial data and store in var
      digitalWrite(42, LOW);
      Mymessage = "";
    }
    if (Mymessage == "x1") {  //Read the serial data and store in var
      digitalWrite(43, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "x0") {  //Read the serial data and store in var
      digitalWrite(43, LOW);
      Mymessage = "";
    }
    if (Mymessage == "y1") {  //Read the serial data and store in var
      digitalWrite(44, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "y0") {  //Read the serial data and store in var
      digitalWrite(44, LOW);
      Mymessage = "";
    }
    if (Mymessage == "z1") {  //Read the serial data and store in var
      digitalWrite(45, HIGH);
      Mymessage = "";
    }
    if (Mymessage == "z0") {  //Read the serial data and store in var
      digitalWrite(45, LOW);
      Mymessage = "";
    }
  }
}