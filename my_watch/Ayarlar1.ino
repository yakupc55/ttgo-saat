
#include "ayarlar1.h";
int ay_sayac=0;
int ay_position=0;
int ay_index=0;
void ayarlar1KelimePencereLoop(){
  
}//fonksiyon sonu

void ayarlar1PencereDokunma(int x, int y){
ay_sayac++;
ayarlar1PencereSetup();
}//fonksiyon sonu

void ayarlar1PencereSetup(){

  ttgo->tft->fillRect(0,20,240,220, TFT_WHITE);
/*
  for(int i=deger;i<sonDeger;i++){
    ttgo->tft->fillRect(0,((i-deger)*44)+21,240,42, TFT_DARKGREEN);
    ttgo->tft->setCursor(2,((i-deger)*44)+22);
    ttgo->tft->print(isimler[i]);
   }// for sonu

   //alt bar kısmı ileri geri
   ttgo->tft->setTextSize(4);
   ttgo->tft->setTextColor(TFT_SKYBLUE);
   ttgo->tft->fillRect(1,197,118,42, TFT_DARKGREEN);
   ttgo->tft->setCursor(4,200);
   ttgo->tft->print("<---");
   ttgo->tft->fillRect(120,197,118,42, TFT_DARKGREEN);
   ttgo->tft->setCursor(128,200);
   ttgo->tft->print("--->");
   */
   /*
   String test = stifftenAl("/turKelime.txt",ay_sayac);
   delay(50);
 //  Serial.println(test);
  logmemo();
  */
}//fonksiyon sonu

void logmemo(){
  Serial.printf("Total heap: %d", ESP.getHeapSize());
  Serial.printf("Free heap: %d", ESP.getFreeHeap());
  Serial.printf("Total PSRAM: %d", ESP.getPsramSize());
  Serial.printf("Free PSRAM: %d \n", ESP.getFreePsram());
}
 
