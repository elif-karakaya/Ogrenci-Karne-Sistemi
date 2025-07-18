#include <stdio.h>

struct ogrenciBilgileri
{
float vizeNotu;
float finalNotu;
float odevNotu;
char isimSoyisim[50];
};
  
int main(){

int ogrenciSayisi,devamsizlik,devamsizlikSayisi;
struct ogrenciBilgileri o1;
FILE *not=fopen("not.txt","w");

if (not==NULL)
{
    printf("dosya acilamadi.");
    return 1;
}

printf("kac tane ogrencinin notunu hesaplamak istiyorsunuz? =");
scanf("%d",&ogrenciSayisi);
getchar();

printf("\ndersin devamsizlik hakki nedir?");
scanf("%d",&devamsizlik);
getchar();
 
float toplam = 0.0;

fprintf(not,"\t\t\t\t\t\t\t**************OGRENCÝ NOT SÝSTEMÝ***************\n");

for(int i=0;i<ogrenciSayisi;i++){
printf("\n%d.ogrencinin isim ve soyismini giriniz:",i+1);
fgets(o1.isimSoyisim,sizeof(o1.isimSoyisim),stdin);

printf("\nlutfen ogrencinin devamsizlik sayisini giriniz.\n");
scanf("%d",&devamsizlikSayisi);
getchar();

  if(devamsizlikSayisi>devamsizlik){

    fprintf(not,"%d. ogrenci\n",i+1);
    fprintf(not,"isim soyisim:%s",o1.isimSoyisim);
    fprintf(not,"ogrenci dersten devamsizliktan dolayi kaldi.\n\n");
    continue;
}

printf("\nlutfen ogrencinin vize notunu giriniz.\n");
scanf("%f",&o1.vizeNotu);
printf("\nlutfen ogrencinin final notunu giriniz.\n");
scanf("%f",&o1.finalNotu);
printf("\nlutfen ogrencinin odev notunu giriniz.\n");
scanf("%f",&o1.odevNotu);


getchar();
 float ortalama =(o1.vizeNotu*0.4)+(o1.finalNotu*0.4)+(o1.odevNotu*0.2);

 toplam = toplam + ortalama;
    fprintf(not,"%d. ogrenci\n",i+1);
    fprintf(not,"isim soyisim:%s",o1.isimSoyisim);
    fprintf(not,"vize:%.3f\n",o1.vizeNotu);
    
    fprintf(not,"final:%.3f\n",o1.finalNotu);
    
    fprintf(not,"odevNotu:%.3f\n",o1.odevNotu);
    
    fprintf(not,"devamsizlik sayisi:%d\n",devamsizlikSayisi);
    fprintf(not,"ortalama:%.3f\n",ortalama);

    
      if (ortalama>=90 && ortalama<=100)
{
    fprintf(not,"ogrencinin harf notu AA,ortalamasi:%.3f dir\n",ortalama);
 
}
else if(ortalama>=85 && ortalama<90){
    fprintf(not,"ogrencinin harf notu BA,ortalamasi:%.3f dir\n",ortalama);
    
}
else if (ortalama>=80 && ortalama<85)
{
    fprintf(not,"ogrencinin harf notu BB,ortalamasi:%.3f dir\n",ortalama);
   
}
else if (ortalama>=75 && ortalama<80)
{
    fprintf(not,"ogrencinin harf notu CB,ortalamasi:%.3f dir\n",ortalama);
   
}
else if (ortalama>=65 && ortalama<75)
{
    fprintf(not,"ogrencinin harf notu CC,ortalamasi:%.3f dir\n",ortalama);
    
}
else if (ortalama>=60 && ortalama<65)
{
    fprintf(not,"ogrencinin harf notu DC,ortalamasi:%.3f dir\n",ortalama);
    
}
else if (ortalama>=55 && ortalama<60)
{
    fprintf(not,"ogrencinin harf notu DD,ortalamasi:%.3f dir\n",ortalama);
    
}
else if (ortalama>=50 && ortalama<55)
{
    fprintf(not,"ogrencinin harf notu FD,ortalamasi:%.3f dir\n",ortalama);
    
}
else  
{
    fprintf(not,"ogrencinin harf notu FF,ortalamasi:%.3f dir\n",ortalama);
    
}
 
 fprintf(not,"\n\n");
}   
float sinifOrtalamasi = (float)(toplam / ogrenciSayisi);
fprintf(not,"Sinif ortalamasi: %.3f",sinifOrtalamasi);
fclose(not);
printf("\nVeriler dosyaya yazildi.");

}





