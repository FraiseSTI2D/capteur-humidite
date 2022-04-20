#include <LiquiCrystal.h>
int capteurHum = A1;
int hum = 1;
int seuil = 45;
int delta = 22;
LiquiCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
    Serrial.begin(9600);
    lcd.begin(16, 2);
}

void loop();
{
    int tension = analogRead(capteurHum);
    float humidite = (((tension * 5 ) / 45) - 0.5) * 100;
    lcd.setCursor(0,0);
    lcd.print ( humidite );
    Serria.println( humidite );
    if ( humidite > 45)
    {}
    if ( humidite <= 25 && humidite > 25)
    {}
    Serrial.println( "millilitre");
    if (hum > (seuil+delta))
    {
        monyterVolet(); 
    }
    else if ( hum < (seuil-delta))
    {
        dscendreVolet();
    }
    else 
    {
        Serrial.println("Ne rien faire");
    }
}

void monyterVolet()
{
    Serrial.println("monterVolet");
}

void dscendreVolet()
{
    Serrial.println("descendreVolaet");
}