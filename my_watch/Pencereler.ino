#include "config.h";
#include <stdio.h>
#include <string.h>
/*
 * 0 : Ana pencere
 * 1 : Menuler
 * 2 : ingilizce Kelimeler
 * 3 : Ayarlar
 * 4 : kumanda
 * 5 : ayarlar1
 * 6 : Fener
 * 7 : Hesap makinesi
 * 8 : wifi ftp
 */
void pencereCalistir(){
  /*
  pencereler[calisanPencereNo]->Loop();
  */

  switch(calisanPencereNo){
  case 0: anaPencereLoop(); break;
  case 1: altPencereNo=0; menuPencereLoop(); break;
  case 2: inKelimePencereLoop(); break;
  case 3: altPencereNo=1; menuPencereLoop(); break;
  case 4: kumandaKelimePencereLoop(); break;
  case 5: ayarlar1KelimePencereLoop(); break;
  case 6: fenerPencereLoop(); break;    
  case 7: hesapMakinesiPencereLoop(); break;   
  }// switch sonu
  
}// fonksiyon sonu



void pencererlerDokunma(int x,int y){
    anaEkranaDon(x,y);
  switch(calisanPencereNo){
  case 0: anaPencereDokunma(x,y); break;
  case 1: altPencereNo=0; menuPencereDokunma(x,y); break;
  case 2: inKelimePencereDokunma(x,y); break;
  case 3: altPencereNo=1; menuPencereDokunma(x,y); break;
  case 4: kumandaPencereDokunma(x,y); break;
  case 5: ayarlar1PencereDokunma(x,y); break;
  case 6: fenerPencereDokunma(x,y); break;
  case 7: hesapMakinesiPencereDokunma(x,y); break;
  }// switch sonu
}// fonksiyon sonu

void pencerelerSetup(){
  
  switch(calisanPencereNo){
  case 0: anaPencereSetup(); break;
  case 1: altPencereNo=0; menuPencereSetup(); break;
  case 2: inKelimePencereSetup(); break;
  case 3: altPencereNo=1; menuPencereSetup(); break;
  case 4: bilgilarPencereSetup(); break;
  case 5: ayarlar1PencereSetup(); break;
  case 6: fenerPencereSetup(); break;
  case 7: hesapPencereSetup(); break;
  }// switch sonu
  
}// fonksiyon sonu

void anaEkranaDon(int x,int y){
 // Serial.println("ana ekrana dön kısmı çalışıyor");
  if( mouseDurumu(0,0,240,20,x,y)){
    calisanPencereNo = 0;
    pencerelerSetup();
  }// if sonu
}// fonksiyon sonu

void pencereSetup(){
  pencerelerSetup();
}// fonksiyon sonu


String SatirlaraBolum(String gelen){
String yeni="";
int sayac =0;
for(int i=0;i<gelen.length();i++){
  String harf =String( gelen.charAt(i));
 const char *chr = harf.c_str();
// const char *chr = &gelen.charAt(i);
  sayac += u8f.getUTF8Width(chr);
  if(sayac<170){
    yeni += chr;
  }else{
    yeni +="\n";
    yeni += chr;
    sayac=0;
  }// else sonu
}// for sonu
  return yeni;
}// fonksiyon sonu

String satirlaraBol(String gelen,int uzunluk){
String dondur = "";

  return dondur;
}// for sonu


String intTimeToString(int b){
String veri ="";
int saat = b/60;
int dakika = b-(saat*60);
veri = String(saat)+":" +String(dakika);
return veri;
}// fonksiyon sonu

void barKismi(){
  ttgo->tft->fillRect(0,0,100,18,TFT_BLACK);
  ttgo->tft->setTextColor(TFT_WHITE);
  ttgo->tft->setCursor(0,0);
  ttgo->tft->setTextSize(2);
  ttgo->tft->print("YAKUP");
}// fonksiyon sonu
