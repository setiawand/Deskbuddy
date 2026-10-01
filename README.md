# Deskbuddy
Deskbuddy is a compact ESP32-based smart desk companion built around a touchscreen display. The project combines 3D printing, simple hardware, and software to turn a raw ESP32 screen into a practical mini dashboard for your workspace. It is designed to be easy to set up and easy to personalize.

## Features
- Four touch pages: **Home**, **Weather**, **Notes** and **Status**
- Home screen with clock, date and sunrise/sunset, plus four configurable widgets (week number, focus timer, rain, outdoor temperature, KP index, UV index, wind, next sun event)
- Focus timer with six configurable presets and an optional flashing alert
- Weather from [Open-Meteo](https://open-meteo.com), sun times from [sunrise-sunset.org](https://sunrise-sunset.org) and the planetary KP index from [NOAA SWPC](https://www.swpc.noaa.gov)
- Web settings page served by the device: notes, theme and accent colours, nickname, units, date format, time zone, location, auto sleep and widget layout
- Settings are stored on the device and survive restarts

## Hardware
- An ESP32 board with a 240x320 ST7789 display and an XPT2046 resistive touch controller
- `User_Setup.h` contains the TFT_eSPI pin and driver configuration the sketch was written against

## Getting started
Follow [SETUP_GUIDE.md](SETUP_GUIDE.md). In short: install the ESP32 board package and the `TFT_eSPI`, `ArduinoJson` and `XPT2046_Touchscreen` libraries, copy `User_Setup.h` into the TFT_eSPI library, set your WiFi name and password at the top of `desk_buddy_github.cpp`, then upload the sketch.

## Security note
The settings page has no login. Anyone on the same network can open it and change the settings, so only connect Deskbuddy to a network you trust.

## License
See [LICENSE](LICENSE).
