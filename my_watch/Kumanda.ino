#include <IRremote.h>
#include "kumanda.h";
byte SEND_PIN = 13;
IRsend irsend(13);


void kumandaKelimePencereLoop(){

}//fonksiyon sonu

void kumandaPencereDokunma(int x , int y){
   if( mouseDurumu(1,21,239,217,x,y)){
    int degerY=(y-20)/76;
    int degerX=(x/80)*3;
    int anaDeger = degerY+degerX;
    Serial.println(anaDeger);
 int khz=38; //NB Change this default value as neccessary to the correct modulation frequency

irsend.sendRaw(SignalList[anaDeger], sizeof(SignalList[anaDeger])/sizeof(int), khz); //AnalysIR Batch Export - RAW
_ekGecikme = 300;
      }// if sonu

}//fonksiyon sonu

void bilgilarPencereSetup(){
  pinMode (13, OUTPUT);
  ttgo->tft->setTextColor(TFT_SKYBLUE);
  int deger =0;
  int ekleme1 =0;
  int ekleme2 =0;
  ttgo->tft->fillRect(0,20,240,220,TFT_BLACK);
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      deger = (i*3)+j;
      int ekleme1=i*80;
      int ekleme2=j*76; 
        ttgo->tft->fillRect(ekleme1+1,ekleme2+20,79,75, TFT_WHITE);
        ttgo->tft->setCursor(ekleme1+2,ekleme2+22);
        ttgo->tft->setTextSize(1.8);
        ttgo->tft->print(TusISimleri[deger]);
    }// j foru sonu
  }//i foru sonu


}//fonksiyon sonu
