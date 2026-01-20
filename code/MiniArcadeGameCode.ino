// define pins
#define BTN_LEFT   0   
#define BTN_RIGHT  2   
#define BTN_START  5   
#define BUZZER     1   

#define OLED_SDA   3   
#define OLED_SCL   4 

enum GameState {
  MENU,
  PLAYING,
  GAME_OVER
};

GameState gameState = MENU;

// Object pixel
const uint8_t catSprite[] PROGMEM = {
  0b00111100,
  0b01111110,
  0b11011011,
  0b11111111,
  0b10111101,
  0b00100100,
  0b01000010,
  0b10000001
};
const uint8_t fishSprite[] PROGMEM = {
  0b011100,
  0b111110,
  0b011100,
  0b001000
};
const uint8_t chocoSprite[] PROGMEM = {
  0b1111,
  0b1001,
  0b1001,
  0b1111
};



// Variables
int catX = 60;
const int catY = 56;

int objX = 0;
int objY = 0;
bool isFood = true;

int score = 0;

unsigned long lastFall = 0;
const unsigned long fallInterval = 60;

// Buzzer
void beep(int freq, int dur) {
  tone(BUZZER, freq, dur);
} 

// Moving the cat
void readInput() {
  if (digitalRead(BTN_LEFT) == LOW && catX > 0)
    catX -= 2;

  if (digitalRead(BTN_RIGHT) == LOW && catX < 120)
    catX += 2;
}


void resetObject() {
  objX = random(0, 124);
  objY = 0;
  isFood = random(0, 2);
}

// Reset Game after losing
void resetGame() {
  score = 0;
  catX = 60;
  resetObject(); 
  gameState = PLAYING;
}


// Draw Game
void drawGame() {
  oled.clear();

  oled.drawBitmap(catX, catY, catSprite, 8, 8);

  if (isFood) {
    oled.drawBitmap(objX, objY, fishSprite, 6, 4);
  } else {
    oled.drawBitmap(objX, objY, chocoSprite, 4, 4);
  }


  oled.setCursor(0, 0);
  oled.print(score);

  oled.update();
}
// Detecting collision -cat eating
bool collision() {
  int objWidth = isFood ? 6 : 4;

  return (objY >= catY &&
          objX + objWidth >= catX &&
          objX <= catX + 8);
}




void setup() {
  // put your setup code here, to run once:
  pinMode(BTN_LEFT, INPUT_PULLUP);
  pinMode(BTN_RIGHT, INPUT_PULLUP);
  pinMode(BTN_START, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);

  randomSeed(micros());

  oled.begin();
  oled.clear();
  oled.on();

}

void drawGameOver() {
  oled.clear();

  oled.setTextSize(1);
  oled.setTextColor(1);

  // Top line
  oled.setCursor(10, 16);
  oled.print("==========");

  // GAME OVER text
  oled.setCursor(22, 28);
  oled.print("GAME OVER");

  // Bottom line
  oled.setCursor(10, 40);
  oled.print("==========");

  oled.display();
}



void loop() {
  // put your main code here, to run repeatedly:
  unsigned long now = millis();

  switch (gameState) {

    case MENU:
      oled.clear();
      oled.setCursor(24, 2);
      oled.print("CAT CATCH");
      oled.setCursor(10, 4);
      oled.print("PRESS START");
      oled.update();

      if (digitalRead(BTN_START) == LOW) {
        beep(1500, 120);
        resetGame();
      }
      break;

    case PLAYING:
      readInput();

      if (now - lastFall > fallInterval) {
        lastFall = now;
        objY += 2;

        if (objY > 64)
          resetObject();
      }

      if (collision()) {
        if (isFood) {
          score++;
          beep(2400, 60);
          resetObject();
        } else {
          beep(300, 500);
          gameState = GAME_OVER;
          drawGameOver();
        }
      }

      drawGame();
      break;

    case GAME_OVER:
      oled.clear();
      oled.setCursor(26, 2);
      oled.print("GAME OVER");
      oled.setCursor(20, 4);
      oled.print("SCORE:");
      oled.print(score);
      oled.setCursor(8, 6);
      oled.print("PRESS START");
      oled.update();

      if (digitalRead(BTN_START) == LOW) {
        resetGame();
      }
      break;
  }

}
