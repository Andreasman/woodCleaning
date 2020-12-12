# Wood-Cleaner
Steuerung für eine Absauganlage für zwei Absaugmotoren und maximal 8 Automatik-Steckdosen. Die Blast-Gates werden per Servo angesteuert. Beim Einschalten eines Holzbearbeitungswerkzeugs wird die Stromaufnahme erfasst, die jeweilige Luftklappe aufgefahren und die Absaugung eingeschaltet. Beim Auschalten soll es eine Nachlaufzeit geben und anschließend die Klappe zu gefahren werden. Die Stromaufnahme der Servos wird überwacht und bei Überstrom eine Störung ausgelöst. Eine Handeinschaltung soll per Taster an jedem Blastgate möglich sein.


Entwickler: Andreas Staecker

## Bauteile
**Wechselstrom-Sensor ZMCT103C** für die automatik Steckdosen   
<img src="img\stromsensor-wechselstrom-zmct103c.jpg" alt="Wechselstromsensor" style="width:400px;"/>   
<a href="https://de.aliexpress.com/item/4000109096239.html?spm=a2g0o.cart.0.0.5e623c00Nbqb04&mp=1" target="_blank">Link - AliExpress</a>
<a href="sheats\ZMCT103C-ETC.pdf"    target="_blank">Datenblatt ZMCT103C</a> 

----------

**Gleichstrom-Sensor ACS712 5A** für die Servo Überwachung  
![](img\stromsensor-gleichstrom-acs712.jpg)   


  
<a href="https://de.aliexpress.com/item/1005001621770833.html?spm=a2g0o.productlist.0.0.299a7696HSPonL&algo_pvid=d9741e3f-fb27-4cfa-abb0-c8a1d19072a9&algo_expid=d9741e3f-fb27-4cfa-abb0-c8a1d19072a9-2&btsid=2100bb5116069941127795617e1153&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_" target="_blank">Link - AliExpress</a>
 
<a href="sheats\ACS712_AllegroMicroSystems.pdf"    target="_blank">Datenblatt ZMCT103C</a>  
   
----------

 **5V Relais 10A** für das Schalten der Staubsauger/Absaugmotoren  
   
<img src="img\5V-relais-10A.jpg" alt="Relais" style="max-width:10%;" /> 

<a href="sheats\KY-019_1-Relais_Modul_Datenblatt_AZ-Delivery_Vertriebs_GmbH.pdf"    target="_blank">Datenblatt Relais</a> 
  
----------

 **Servo MG996R** für das Ansteuern der Klappen  
<img src="img\servo-motor.JPG" alt="Servo" style="width:400px;" /> 



 
[Link - Amazon](https://www.amazon.de/dp/B07H88DB8R/ref=cm_sw_em_r_mt_dp_AbL0FbNSZ74ZW?_encoding=UTF8&psc=1) 

<a href="sheats\MG996R_Tower-Pro.pdf"    target="_blank">Datenblatt Servo MG996r</a>  

----------

## Fotos


Prototype Blastgate

<img src="img\blastgate-prototype.JPG" alt="Blastgate Prototype" style="width:400px;" />

Verwendete Servos

<img src="img\servo-motor.JPG" alt="Servo" style="width:400px;"/>  


Absauganlage mit 2 Motoren (2000W)   
<img src="img\cgv386-absaugung.jpg" alt="Servo" style="width:200px;"/>  
[Lieferant Absaugung CGV386](https://www.holz-metall.info/shop1/artikel6044.htm)  

[Bedienungsanleitung CGV386](https://www.holz-metall.info/documents/Record-Power/Bedienungsanleitungen/Absaugungen/Bedienungsanleitung%20CamVac%20ver3.1.pdf)


## Linksammlung
[Glätten des Stromsensors acs712 - guter Ansatz!](https://www.engineersgarage.com/arduino/acs712-current-sensor-with-arduino/)

## Variablen
*fan1* - Absaugung 1  
*fan2* - Absaugung 2  
*ledFan1* - LED für Absaugung 1  
*ledFan2* - LED für Absaugung 2   
*currentSensorFan1* - Stromsensor Absaugung 1  
*currentSensorFan2* - Stromsensor Absaugung 2  

*plug1* - Automatik Steckdose 1  
*plug2* - Automatik Steckdose 2  
...  
*plug8* - Automatik Steckdose 8  

*servoPowerOnRelay* - Spannungsversorgung Servos EIN

**[currentSensorPlug1]** - Stromsensor Automatik Steckdose 1   
*currentSensorPlug2* - Stromsensor Automatik Steckdose 2  
...  
*currentSensorPlug8* - Stromsensor Automatik Steckdose 8  

## Klassen
### BlastGate
Steuert die Luftklappen über Servos
### CurrentSensor 
Strom-Mess-Sensor

## Testaufbau
Testaufbau und Prototyping für das Programmieren der Absaugung.
<img src="img\testaufbau-stufe1.JPG" alt="Testaufbau V01" style="width:400px;"/>
