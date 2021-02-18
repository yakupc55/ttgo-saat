// saat la ilgili eklemeler
uint32_t targetTime = 0;    

void saatSetup(){
   //Check if the RTC clock matches, if not, use compile time
    ttgo->rtc->check();

    //Synchronize time to system time
    ttgo->rtc->syncToSystem();
    saatAyarla();
}// fonskiyon sonu


void tftIllkAyarlar(){
    ttgo->tft->setTextFont(1);
    ttgo->tft->fillScreen(TFT_BLACK);
    ttgo->tft->setTextColor(TFT_YELLOW, TFT_BLACK); // Note: the new fonts do not draw the background colour
}// fonksiyon sonu
void ilkSureleriAl(){
  RTC_Date tnow = ttgo->rtc->getDateTime();
  ohh = tnow.hour;
  omm = tnow.minute;
  ttgo->power->setLDO2Voltage(2700);
}// süre
void saatAyarla(){

 // Get the current data
  RTC_Date tnow = ttgo->rtc->getDateTime();

  hh = tnow.hour;
  mm = tnow.minute;
  dday = tnow.day;
  mmonth = tnow.month;
  yyear = tnow.year;
  
   if((omm!=mm)||(ohh!=hh)){
    saatTazele();
    omm=mm;
    ohh=hh;
   }// if sonu

}// fonksiyon saat ayarla

void saatLoop(){
if (targetTime < millis()) {
        targetTime = millis() + 1000;
        saatAyarla(); // Call every second but only update time every minute
    }// if sonu
}// fonksiyon sonu


void saatTazele(){
  ttgo->tft->fillRect(100,0,100,18,TFT_BLACK);
  ttgo->tft->setTextColor(TFT_ORANGE);
  ttgo->tft->setCursor(100,0);
  ttgo->tft->setTextSize(2);
  int m = mm-1;
  int h = hh;
  
  if(m<0){
  m = 60+m;   // üste kalan kısmı 60 dan çıkarıyoruz
  if(h<0)h=23; // 0 altına inerse 23 yapıyoruz
  else h=h-1;  // değilse 1 saat indiriyoruz
  }// if sonu
  
  ttgo->tft->print(h);
  ttgo->tft->print(":");
  ttgo->tft->print(m);
  
  int level = ttgo->power->getBattPercentage();
  int yer=200;
  if(level==100)yer = 180;
  
  ttgo->tft->setTextColor(TFT_BLUE);
  ttgo->tft->fillRect(200,0,40,18,TFT_BLACK);
  ttgo->tft->setCursor(200,0);
  ttgo->tft->print("%");
  ttgo->tft->print(level);
}// fonsksiyon sonu
int voltage = 2600;
int mvoltage = 3300;

uint32_t dokunmaSuresi=0; 
uint16_t dokunmaGecikme =80;
bool dokunmaDurumu = true;
void dokunmatikKontrol(){

if (dokunmaSuresi < millis()) {
  
     // gecikme durumunu sıfırlıyoruz
     _ekGecikme = 0;
     int16_t x, y;
        
        if (ttgo->getTouch(x, y)){
               dokunmaIslemleri(x,y);
        }// if sonu

     dokunmaSuresi = millis() + dokunmaGecikme + _ekGecikme;
}// if süre hassasiyeti

}// fonksiyon sonu

void dokunmaIslemleri(int x,int y){
  pencererlerDokunma(x,y);
}// fonskiyon sonu

bool mouseDurumu(int x1,int y1,int x2,int y2,int mx,int my){
  bool deger = false;
  x2 = x1 + x2;
  y2 = y1 + y2;
  if( x1<=mx && x2>=mx && y1<=my && y2>=my){
    deger = true;
  }// if sonu

  return deger;
}// for sonu
 
