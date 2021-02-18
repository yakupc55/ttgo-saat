#include "menuler.h";

void menuPencereDokunma(int x, int y){
//  Serial.println("menuler pencere dokunmaya girildi");
  int *kodlar;
  if(altPencereNo == 0) kodlar = menuKodlari;  else  kodlar = ayarKodlari;
if( mouseDurumu(0,20,240,175,x,y)){
    int yerelDeger = (y-20)/44;
    yerelDeger += deger;
    if(yerelDeger<=*sayilar-1){
      Serial.println(yerelDeger);
    calisanPencereNo = kodlar[yerelDeger];  // ingilizce kelime kartları
    pencerelerSetup();
    }
    
      }// if sonu
 if( mouseDurumu(0,196,240,44,x,y)){
  
    if(x<120){
  //    Serial.println("geri butona tıklandı");
     if(*kategori==0) *kategori = maxKategori; else *kategori = *kategori-1;
    }// if sonu
    else {
       if(*kategori==maxKategori) *kategori = 0; else *kategori = *kategori+1;
    }
 //    Serial.println("ileri butona tıklandı");
      
    }// else sonu
    pencerelerSetup();
    _ekGecikme= 300;
}// fonksiyon sonu

void menuPencereLoop(){

}// fonksiyon sonu


void menuPencereSetup(){
  String *isimler;
  if(altPencereNo == 0) isimler = menuIsimleri;  else  isimler = ayarIsimleri;

  sayilar = (altPencereNo == 0)? &menuSayisi: &ayarSayisi;
  kategori = (altPencereNo == 0)? &menuKategori: &ayarKategori;
  maxKategori = (*sayilar-1) / 4;
 //   Serial.print(" sayilar : ");
//   Serial.print(*sayilar);
 //  Serial.print("max kategori : ");
//   Serial.print(maxKategori);
   ttgo->tft->fillRect(0,20,240,220, TFT_GREEN);
   int xEk=0;
   ttgo->tft->setTextColor(TFT_SKYBLUE);
   ttgo->tft->setTextSize(2);

   deger = *kategori * 4;
//   Serial.print(" deger : ");
//   Serial.print(deger);

//    Serial.print(" sayilar : ");
//   Serial.print(*sayilar);
   if((deger+4)>= *sayilar) sonDeger = *sayilar ; else sonDeger= (deger+4);
 //  sonDeger = ()? (deger+3): &sayilar;
//Serial.print(" son deger : ");
//Serial.print(sonDeger);
//  Serial.println("");
   for(int i=deger;i<sonDeger;i++){
    ttgo->tft->fillRect(0,((i-deger)*44)+21,240,42, TFT_DARKGREEN);
    ttgo->tft->setCursor(2,((i-deger)*44)+25);
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
   
}// fonksiyon sonu
