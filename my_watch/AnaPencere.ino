#include "namaz.h";

void anaPencereSetup(){
  RTC_Date tnow = ttgo->rtc->getDateTime();
   
  uint8_t d = tnow.day;
  uint8_t m = tnow.month;
  uint32_t dow = ttgo->rtc->getDayOfWeek(d,m,tnow.year);
  ttgo->tft->fillRect(0,20,240,120, TFT_DARKGREEN);
  ttgo->tft->setTextColor(TFT_SKYBLUE);
  ttgo->tft->setCursor(0,25);
  ttgo->tft->setTextSize(2);
  ttgo->tft->print(d);
  ttgo->tft->print(" ");
  ttgo->tft->print(AYLAR[m]);
  ttgo->tft->print(" ");
  ttgo->tft->print(GUNLER[dow]);

  // dizi için düşerme yapıyoruz
  d--; m--;
  ttgo->tft->print("\nIMSAK  = ");
  ttgo->tft->print(intTimeToString(IMSAK[m][d]));
  ttgo->tft->print("\nGUNES  = ");
  ttgo->tft->print(intTimeToString(GUNES[m][d]));
  ttgo->tft->print("\nOGLE   = ");
  ttgo->tft->print(intTimeToString(OGLE[m][d]));
  ttgo->tft->print("\niKiNDi = ");
  ttgo->tft->print(intTimeToString(IKINDI[m][d]));
  ttgo->tft->print("\nAKSAM  = ");
  ttgo->tft->print(intTimeToString(AKSAM[m][d]));
  ttgo->tft->print("\nYATSI  = ");
  ttgo->tft->print(intTimeToString(YATSI[m][d]));

  //alt kısım
  ttgo->tft->fillRect(0,142,240,98, TFT_BLACK);
  ttgo->tft->setTextColor(TFT_CYAN);
  ttgo->tft->setCursor(20,150);
  ttgo->tft->setTextSize(12);
  ttgo->tft->print(hh);
  ttgo->tft->print(":");
  ttgo->tft->print(mm-1);
  ttgo->tft->setCursor(30,220);
  ttgo->tft->setTextSize(3);
  ttgo->tft->setTextColor(TFT_GREENYELLOW);
  ttgo->tft->print("PROGRAMLAR");
}// fonksiyon sonu

void anaPencereLoop(){

}// fonksiyon sonu


void anaPencereDokunma(int x, int y){
 // Serial.println("ana pencere dokunma kısmına girdi");
   if( mouseDurumu(0,142,240,98,x,y)){
    calisanPencereNo = 1;
    pencerelerSetup();
 }// if sonu
}// fonksiyon sonu
