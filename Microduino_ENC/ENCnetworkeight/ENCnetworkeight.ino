#include <EtherCard.h>


#define LED1PIN 2
#define LED2PIN 3

PROGMEM prog_char led_off[]= {
  0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0E,
  0x00, 0x00, 0x00, 0x0E, 0x08, 0x04, 0x00, 0x00, 0x00, 0xB5, 0x41, 0xE5, 0x5A, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47,
  0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x02, 0x62, 0x4B, 0x47, 0x44, 0x00, 0xFF, 0x87, 0x8F, 0xCC, 0xBF,
  0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0B, 0x12, 0x00, 0x00, 0x0B, 0x12, 0x01, 0xD2, 0xDD, 0x7E,
  0xFC, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4D, 0x45, 0x07, 0xDC, 0x01, 0x1D, 0x14, 0x21, 0x10, 0xBC, 0x3C, 0xDE, 0x2D,
  0x00, 0x00, 0x00, 0xD2, 0x49, 0x44, 0x41, 0x54, 0x18, 0xD3, 0x75, 0xD0, 0xB1, 0x4A, 0x03, 0x51, 0x10, 0x05, 0xD0, 0xB3,
  0x21, 0x1F, 0x10, 0x04, 0x3B, 0x53, 0x89, 0x5A, 0x09, 0x9B, 0x58, 0xD9, 0x25, 0x5F, 0x60, 0x63, 0x9F, 0x87, 0x5F, 0xE0,
  0x27, 0x6D, 0x7A, 0x5B, 0xC1, 0x6E, 0xF3, 0x01, 0x92, 0x2C, 0x36, 0x56, 0x62, 0x61, 0x23, 0xA4, 0xB1, 0x12, 0xF2, 0x64,
  0xDF, 0x5A, 0xBC, 0x20, 0x5B, 0x98, 0x3B, 0xC5, 0xC0, 0xBD, 0x73, 0xEF, 0x30, 0x53, 0x74, 0x0E, 0x63, 0x48, 0x01, 0xC2,
  0xBD, 0x1B, 0x33, 0xAC, 0x2C, 0xAB, 0x0A, 0x3A, 0x45, 0xA7, 0x10, 0x46, 0xEA, 0x69, 0x39, 0x71, 0x21, 0xD9, 0x78, 0xF5,
  0xD2, 0x98, 0x57, 0x5F, 0x9D, 0x21, 0xA8, 0xEF, 0xCA, 0x53, 0xDF, 0xB6, 0xA2, 0x23, 0xD7, 0xC6, 0xE5, 0x63, 0x6D, 0xC2,
  0x80, 0x10, 0xA6, 0xE5, 0xB9, 0x9D, 0xA4, 0xD5, 0x4A, 0xA2, 0x91, 0xB3, 0x32, 0x04, 0x06, 0x58, 0x5C, 0x89, 0x92, 0x56,
  0xFA, 0xAB, 0x63, 0x16, 0x59, 0x9C, 0x5D, 0xF6, 0xA4, 0xDC, 0x4F, 0x98, 0xC9, 0x3B, 0x33, 0xD5, 0x77, 0x46, 0x64, 0xE7,
  0xAA, 0xE9, 0xD1, 0x79, 0x68, 0xCB, 0x2A, 0x8B, 0xCB, 0x0D, 0xBD, 0xC8, 0x24, 0xF9, 0x60, 0x69, 0x7F, 0xE7, 0xE6, 0xB6,
  0x1C, 0x8B, 0xA2, 0x1F, 0xD1, 0xCE, 0xBB, 0x75, 0x53, 0x4D, 0x3A, 0x03, 0x30, 0x7F, 0x68, 0x9E, 0xBC, 0x29, 0xB4, 0x3E,
  0x3D, 0x5B, 0x37, 0xE6, 0xEC, 0x9D, 0x10, 0x82, 0xC5, 0x3F, 0xEF, 0x3B, 0x8C, 0x5F, 0xC2, 0x84, 0x6A, 0x7B, 0xFB, 0x42,
  0x44, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82
};

PROGMEM prog_char led_on[]= {
  0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x0E,
  0x00, 0x00, 0x00, 0x0E, 0x04, 0x03, 0x00, 0x00, 0x00, 0xED, 0x66, 0x30, 0xE2, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47,
  0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x27, 0x50, 0x4C, 0x54, 0x45, 0x00, 0x00, 0x00, 0xFF, 0xCC, 0x00,
  0xCC, 0x66, 0x00, 0xFF, 0xFF, 0x33, 0xFF, 0x99, 0x00, 0xFF, 0xCC, 0x33, 0xCC, 0x99, 0x66, 0xFF, 0xFF, 0x99, 0xCC, 0x99,
  0x33, 0xCC, 0x99, 0x00, 0xFF, 0xCC, 0x66, 0x99, 0x66, 0x00, 0xFF, 0xCC, 0x99, 0x4A, 0x4E, 0xC9, 0x79, 0x00, 0x00, 0x00,
  0x01, 0x74, 0x52, 0x4E, 0x53, 0x00, 0x40, 0xE6, 0xD8, 0x66, 0x00, 0x00, 0x00, 0x01, 0x62, 0x4B, 0x47, 0x44, 0x00, 0x88,
  0x05, 0x1D, 0x48, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0B, 0x12, 0x00, 0x00, 0x0B, 0x12, 0x01,
  0xD2, 0xDD, 0x7E, 0xFC, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4D, 0x45, 0x07, 0xDC, 0x01, 0x1D, 0x14, 0x23, 0x1C, 0x87,
  0xBC, 0xF0, 0x84, 0x00, 0x00, 0x00, 0x48, 0x49, 0x44, 0x41, 0x54, 0x08, 0xD7, 0x63, 0x60, 0x80, 0x03, 0x26, 0x25, 0x05,
  0x30, 0x95, 0x55, 0x3E, 0x0D, 0xC4, 0xD0, 0x31, 0x16, 0x14, 0x6C, 0x02, 0xD2, 0xC9, 0x86, 0x82, 0x82, 0xD2, 0x40, 0xE1,
  0xC5, 0x40, 0x3A, 0x44, 0x81, 0x81, 0xA9, 0x18, 0x46, 0x0B, 0x0A, 0x8A, 0xBA, 0x00, 0xE9, 0x60, 0x08, 0xCD, 0x90, 0x0C,
  0xA4, 0x9D, 0x80, 0xEA, 0x35, 0x80, 0xD2, 0x20, 0x9A, 0xA9, 0x53, 0xD0, 0x49, 0x01, 0xC9, 0x5C, 0x08, 0x00, 0x00, 0x9A,
  0x56, 0x0B, 0x58, 0x9D, 0x6A, 0x76, 0x99, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82
};

// ethernet interface mac address, must be unique on the LAN
static byte mymac[] = { 
  0x74,0x69,0x69,0x2D,0x30,0x31 };
static byte myip[] = { 
  192,168,1,203 };

byte Ethernet::buffer[700];
BufferFiller bfill;

boolean led1Status;
boolean led2Status;

void setup () {

  Serial.begin(9600);
  Serial.println("WebLeds Demo");

  if (ether.begin(sizeof Ethernet::buffer, mymac) == 0)
    Serial.println( "Failed to access Ethernet controller");

  if (!ether.staticSetup(myip))
    Serial.println("Failed to set IP address");

  pinMode(LED1PIN, OUTPUT);
  pinMode(LED2PIN, OUTPUT);

  digitalWrite(LED1PIN, LOW);
  digitalWrite(LED2PIN, LOW);

  led1Status = false;
  led2Status = false; 

}


void loop () {

  word len = ether.packetReceive();
  word pos = ether.packetLoop(len);

  if(pos) {

    if(strstr((char *)Ethernet::buffer + pos, "GET /led_off.png") != 0)
      send_png_image(led_off, sizeof(led_off));
    else if(strstr((char *)Ethernet::buffer + pos, "GET /led_on.png") != 0)
      send_png_image(led_on, sizeof(led_on));

    else {

      if(strstr((char *)Ethernet::buffer + pos, "GET /?LED1") != 0) {
        led1Status = !led1Status;
        digitalWrite(LED1PIN, led1Status);
      }

      if(strstr((char *)Ethernet::buffer + pos, "GET /?LED2") != 0) {
        led2Status = !led2Status;
        digitalWrite(LED2PIN, led2Status);
      }

      BufferFiller bfill = ether.tcpOffset();
      bfill.emit_p(PSTR("HTTP/1.0 200 OK\r\n"
        "Content-Type: text/html\r\nPragma: no-cache\r\n\r\n"
        "<html><head><title>WebLeds</title></head><body>"
        "Toggle leds: "));

      if(led1Status) bfill.emit_p(PSTR("<a href=\"/?LED1\"><img src=\"led_on.png\"></a>"));
      else bfill.emit_p(PSTR("<a href=\"/?LED1\"><img src=\"led_off.png\"></a>"));

      if(led2Status) bfill.emit_p(PSTR("<a href=\"/?LED2\"><img src=\"led_on.png\"></a>"));
      else bfill.emit_p(PSTR("<a href=\"/?LED2\"><img src=\"led_off.png\"></a>"));

      bfill.emit_p(PSTR("</body></html>"));
      ether.httpServerReply(bfill.position());
    }
  }
}


void send_png_image(PGM_P png_image, unsigned int image_size) {

  BufferFiller bfill = ether.tcpOffset();
  bfill.emit_p(PSTR("HTTP/1.0 200 OK\r\n"
    "Content-Type: image/png\r\n\r\n"));
  bfill.emit_raw_p(png_image, image_size);
  ether.httpServerReply(bfill.position());
}

