//#define ILI9341_DRIVER
#define ST7789_DRIVER
#define TFT_WIDTH 240
#define TFT_HEIGHT 320


// This panel needs BGR colour order
#define TFT_RGB_ORDER TFT_BGR

//

#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST  -1

#define TFT_BL   21
#define TFT_BACKLIGHT_ON HIGH

// ---- Font loading ----
#define LOAD_GLCD   // Font 1, the most important one
#define LOAD_FONT2  // Small digits/text
#define LOAD_FONT4  // Medium
#define LOAD_FONT6  // Large
#define LOAD_FONT7  // 7-segment
#define LOAD_FONT8  // Extra large
#define LOAD_GFXFF  // FreeFonts

#define SPI_FREQUENCY  40000000
// SPI clock frequency for touch controller
#define SPI_TOUCH_FREQUENCY  2500000