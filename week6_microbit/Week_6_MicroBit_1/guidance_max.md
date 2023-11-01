# Setting up the environment

First, we need to download the Arduino Integrated Development Environment (IDE) and configure it so that it can communicate with our BBC micro:bit V2.

1. Download the Arduino IDE from
   `https://downloads.arduino.cc/arduino-ide/arduino-ide_2.2.1_Windows_64bit.zip`.
2. Extract the files in the archive and run `Ardunino IDE.exe`.
3. Open `File > Preferences...`.
4. Add to the field `Additional boards manager URLs:` the following URL:
   `https://sandeepmistry.github.io/arduino-nRF5/package_nRF5_boards_index.json`
5. Open `Tools > Board > Boards Manager...` and install `Nordic Semiconductor
    nRF5 Boards`. You can use the `Filter your search...` text box at the top of
    the tab.
6. Select `Tools > Board > Nordic Semiconductor nRF5 Boards > BBC micro:bit V2`.
7. Select a serial port from `Tools > Port`.

Next, we need to install some useful libraries.

1. Go to `Sketch > Include Library > Manage Libraries...`.
2. Install the Adafruit Microbit Library, (with dependencies)

# Uploading an example to the device

Now, we can test one of the examples on the device. Not all examples work for me, at present, but the `matrixdemo` at least should.

1. Head to `File > Examples > Examples from Custom Libraries > Adafruit microbit Library` and choose one of the examples.
2. Click on the `Upload` button (green circular button with a right-pointing arrow, top left corner of the window).
3. Wait for the process to finish.
4. If no errors occurred, the example is now on the device.
