#include "kelimeler.h";
int ik_sayac=240;
int kelimeSayisi=646;
uint32_t startIndexE=2883;
uint32_t endIndex=0;
uint32_t startIndexT=7032;
String ik_yazi="";
void inKelimePencereLoop(){
  
}//fonksiyon sonu


void inKelimePencereDokunma(int x,int y){
    inKelimePencereSetup();
   _ekGecikme = 300;
  //  logmemo();
}// fonksiyon sonu

void veriOku(const char * deger,uint32_t start){
ik_yazi="";
bool dongu=true;
String gecici = "";
uint32_t an_sayac=start;

while(dongu){
  if(deger[an_sayac]==';'){
    dongu=false;
  }
  else{
    gecici+=deger[an_sayac];
  }
  an_sayac++;
}// döngü sonu
ik_yazi= gecici;
endIndex=an_sayac;
}// fonksiyon sonu


void inKelimePencereSetup(){
  /*
  ttgo->tft->fillRect(0,20,240,220, TFT_BLACK); 
  veriOku(engKelime,startIndexE);
  Serial.println(ik_yazi);
  Serial.println(startIndexE);
  Serial.println(endIndex);
  startIndexE = endIndex;
*/
 // uint32_t endIndex

 

 
  u8f.setFontDirection(0);            // left to right (this is default)
  u8f.setFont(u8g2_font_6x12_te);     // extended font
  u8f.setFontMode(1);     

  ttgo->tft->fillRect(0,20,240,110, TFT_BLACK);  
  u8f.setCursor(1,32);
  u8f.setForegroundColor(TFT_WHITE); 
 // int sayi=random(352);
  veriOku(engKelime,startIndexE);
  startIndexE = endIndex;
  const char *chr = ik_yazi.c_str();
  u8f.print(SatirlaraBolum(chr));
  
  ttgo->tft->fillRect(0,130,240,110, TFT_WHITE);
  u8f.setForegroundColor(TFT_BLACK);
  u8f.setCursor(1,142);
 // Serial.println(ik_yazi);
  veriOku(turKelime,startIndexT);
 // Serial.println(ik_yazi);
//  Serial.println(startIndexT);
//  Serial.println(startIndexE);
//  Serial.println(ik_sayac);
//  Serial.println(endIndex);
  startIndexT = endIndex;
  chr = ik_yazi.c_str();
  u8f.print(SatirlaraBolum(chr));
//  u8f.print("buda testin devamıdır bunda da tüm harfler test edilmiştir. \n çşğıöüÇŞİĞÖÜ ");

  u8f.setCursor(1,220);
  u8f.print(ik_sayac+1);
  u8f.print("/");
  u8f.print(kelimeSayisi);

  ik_sayac++;
  if(ik_sayac==kelimeSayisi) {
    ik_sayac=0; startIndexT = 0; startIndexE = 0;
  }// if sonu
}// fonksiyon sonu
