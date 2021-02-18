#include "FS.h"
#include "SPIFFS.h"
#include "config.h";

// Global Değişkenler
static bool _UYANIK_KAL = false;
static bool _OZEL_AYAR = false;
static uint16_t _ekGecikme = 0;
static uint16_t _loopGecikme =0;
static uint8_t ohh,hh,omm, mm, mmonth, dday; // H, M, S variables
static uint16_t yyear = 0; // Year is 16 bit 
static int DEFAULT_SCREEN_TIMEOUT =  6*1000;
static TTGOClass *ttgo;
static TFT_eSPI *tft;  
static U8G2_FOR_ADAFRUIT_GFX u8f;  
static int calisanPencereNo = 0;
static int altPencereNo = 0;
static int calisanSonPencere =0;
static int calisanSonAltPencere =0;

int sp_position=0;
int sp_index=0;

#define RXD2 16
#define TXD2 17


void setup() {
Serial.begin(115200);
//Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
setupSetting();
 saatSetup();
tftIllkAyarlar();
ilkSureleriAl();
pencereSetup();
}// setup fonksiyonu sonu

void loop() {
 loopSettings();
 ozelAyarKontrol();
 saatLoop();
 dokunmatikKontrol();
 //yazdir();
 pencereCalistir();


}// void fonksiyonu sonu

void ozelAyarKontrol(){

if(_OZEL_AYAR && calisanPencereNo == 0){
  Serial.println("özel düzeltmeye girildi");
  _UYANIK_KAL = false;
  ttgo->power->setLDO2Voltage(2700);
  _OZEL_AYAR=false;
  saatTazele();
  barKismi();
}// if sonu
  
}// fonksiyon sonu
String stifftenAl(String adres,int secilen){
      String yazi="";
      int pos=0;
setCpuFrequencyMhz(160);
  SPIFFS.begin(false);
  fs::FS fes=SPIFFS;
   File root = fes.open(adres);
  if(!root){
 //   Serial2.println("Failed to open file for reading");
    return "";
  }
  else{
    unsigned long ilk_zaman = millis();
 //   Serial.println("dosya basariyla acildi");
    int sayac=0;
   // sayac=sp_index;
   // root.seek(sp_position, SeekSet);
    while(root.available()) {
    if(secilen==sayac){
      sp_position=root.position();
      sp_index = sayac-1;
    yazi+=root.readStringUntil('\n');
    break;
     //   Serial.println("kelime ekleme basarili kelime \n");
     //   Serial.println(yazi);
      }// kontrollü if sonu
      else{
        sayac++;
        root.readStringUntil('\n');
    }// yapısal if sonu
}// while sonu
unsigned long son_zaman = millis();
//Serial2.println("tüm islemler bitti yazı son:");
//Serial2.println(yazi);

//Serial2.println("islem suresi");
//Serial2.println((son_zaman-ilk_zaman));

//Serial2.println("pozisyon");
//Serial2.println(pos);
  }// else sonu
    root.close();
    
  setCpuFrequencyMhz(80);
 // ESP.wdtFeed(); 
  return yazi;
} // fonksiyon sonu
