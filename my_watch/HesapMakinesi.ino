String anlik="";
String islemsel="";
double eskiSayi=0.0;
double islemSonucu = 0.0;
int eskiIslem=0;
bool eskiIslemDurumu = false;
bool noktaDurumu = true;
int maxUzunluk = 12;
String list[16]={"1","2","3","+",
                 "4","5","6","-",
                 "7","8","9","/",
                 ".","0","C","x"};

void hesapMakinesiPencereLoop(){

}//fonksiyon sonu

void hesapMakinesiPencereDokunma(int x,int y){
if( mouseDurumu(0,20,240,43,x,y)){
hm_sil(); // tek karekter siliniyor
}// if sonu
  
if( mouseDurumu(1,64,239,175,x,y)){
int j= ((y-64)/44)*4;
int deger = (x/60)+j;

switch(deger){
case 0: hm_sayiYazdir("1"); break;
case 1: hm_sayiYazdir("2"); break;
case 2: hm_sayiYazdir("3"); break;
case 3: hm_topla(); break;
case 4: hm_sayiYazdir("4"); break;
case 5: hm_sayiYazdir("5"); break;
case 6: hm_sayiYazdir("6"); break;
case 7: hm_cikar(); break;
case 8: hm_sayiYazdir("7"); break;
case 9: hm_sayiYazdir("8"); break;
case 10: hm_sayiYazdir("9"); break;
case 11: hm_bol(); break;
case 12: hm_nokta(); break;
case 13: hm_sayiYazdir("0"); break;
case 14: hm_sifirla(); break;
case 15: hm_carp(); break;  
}// switch sonu
//Serial.print("gelen deger : ");
//Serial.println(deger);
}// if sonu

_ekGecikme = 200;
}//fonksiyon sonu


void islemKontrol(){
//  if()
 eskiSayi = anlik.toDouble();
// Serial.println(String(eskiSayi,12));
 //strToFloat();
// eskiSayi = anlik.toFloat();
  if(eskiIslemDurumu){
    switch(eskiIslem){
      case 0: islemSonucu = islemSonucu + eskiSayi;  break; // toplama işlemi
      case 1: islemSonucu = islemSonucu - eskiSayi;  break; // çıkarma işlemi
      case 2: islemSonucu = islemSonucu / eskiSayi;  break; // bölme işlemi
      case 3: islemSonucu = islemSonucu * eskiSayi;  break; // çarpma işlemi
    }// switch sonu
  }// if sonu
  else{
    eskiIslemDurumu=true;
    islemSonucu=eskiSayi;
  }// else sonu
    islemsel = sondaki0larSil(String(islemSonucu,6));
    islemsel =  sondakiNoktayiSil(islemsel);
  //  Serial.println(islemSonucu);
    noktaDurumu = true;
    anlik="";
}// fonksiyon sonu

void strToFloat(){
  double sayi=0.0;
  int deger2= atoi("5");
//  Serial.println(deger2);
}

String sondaki0larSil(String veri){
uint8_t an_sayac=0;

// hepsi virgüllü yapıya döndürüldüğü için şimdilik if kontrolü es geçildi
//if(anlik.length()>2){ // örn : "2." burda en az 2 karekter var. bunun altı için geçerli değil bu yüzden if ile kontrol ediyoz 
for(int i=(veri.length()-1);i>=0;i--){
//  Serial.print("i: ");
//  Serial.println(i);
//  Serial.print("veri: ");
//  Serial.println(veri[i]);
  if(veri[i]=='0') an_sayac++; else break;
}// for döngüsü sonu
//}  // ana if sonu  
veri = veri.substring(0,veri.length()-an_sayac);
return veri; 
}// fonksiyon sonu

String sondakiNoktayiSil(String gelen){
  if(gelen[gelen.length()-1]=='.' && gelen.length()>1) return gelen.substring(0,gelen.length()-1);
  else return gelen;
}
void islemUygula(int no,String ekleme){

if(anlik.length()>0){ // her hangi bir sayı vurulmamışsa her hangi bir işleme gerek duyulmadığından if kontrolü uygulandı.
islemKontrol();
eskiIslem = no;
islemsel+=ekleme;
ustAlanYenile();
}// if sonu

}// fonksiyon sonu

void hm_topla(){
 islemUygula(0,"+");
}//fonksiyon sonu

void hm_cikar(){
 islemUygula(1,"-");
}//fonksiyon sonu

void hm_bol(){
islemUygula(2,"/");  
}//fonksiyon sonu

void hm_carp(){
islemUygula(3,"*");  
}//fonksiyon sonu

void hm_sil(){
   String z=String(anlik[anlik.length() - 1]);
  if(anlik.length()>0)
  if(z.equals(".")) noktaDurumu = true;
  anlik = anlik.substring(0, anlik.length() - 1);
  ustAlanYenile();
}//fonksiyon sonu

void hm_nokta(){
  if(noktaDurumu && anlik.length()>0){
    hm_sayiYazdir(".");
    noktaDurumu=false;
  }// if sonu
}//fonksiyon sonu


void hm_sifirla(){
  anlik="";
  eskiIslem=0;
  islemsel="";
  eskiIslemDurumu=false;
  islemSonucu = 0.0;
  ttgo->tft->fillRect(0,21,240,42,TFT_WHITE);
}//fonksiyon sonu

void hm_sayiYazdir(String gelen){
  if(anlik.length()<15){
      anlik += gelen;
ustAlanYenile();
  }
}// fonksiyon sonu

void ustAlanYenile(){
    ttgo->tft->fillRect(0,21,240,42,TFT_WHITE);
    ttgo->tft->setTextSize(2);
    ttgo->tft->setTextColor(TFT_BLACK);
    ttgo->tft->setCursor(0,21);
    ttgo->tft->print(islemsel);
    ttgo->tft->setTextSize(2);
    ttgo->tft->setTextColor(TFT_BLUE);
    ttgo->tft->setCursor(0,42);
    ttgo->tft->print(anlik);
}// fonksiyon sonu

void hesapPencereSetup(){
    ttgo->tft->fillRect(0,20,240,220,TFT_BLACK);

    // ust alan
    ustAlanYenile();

    // alt alan
    ttgo->tft->setTextSize(4);
    ttgo->tft->setTextColor(TFT_BLUE);
    
    for(int i=0;i<4;i++){

      for(int j=0;j<4;j++){
        ttgo->tft->fillRect((i*60)+1,(j*44)+65,58,42,TFT_WHITE);
        ttgo->tft->setCursor((i*60)+21,(j*44)+72);
        ttgo->tft->print(list[(j*4)+i]);
      }// for sonu
    }// for sonu
}//fonksiyon sonu
