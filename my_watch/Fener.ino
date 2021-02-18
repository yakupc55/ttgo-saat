void fenerPencereLoop(){

  
}//fonksiyon sonu

void fenerPencereDokunma(int x,int y){
  
}//fonksiyon sonu

void fenerPencereSetup(){
   ttgo->tft->fillRect(0,0,240,240, TFT_WHITE);
   _UYANIK_KAL = true;
   ttgo->power->setLDO2Voltage(3300);
   _OZEL_AYAR=true;
}//fonksiyon sonu
