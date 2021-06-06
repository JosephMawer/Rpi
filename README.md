# Raspberry Pi (Getting Started)

installing vs code
- sudo apt update
- sudo apt install code

executing c++ code

1) install the c++ extension
2) linking libraries
    - you can create the default build task file via the terminal dropdown
    - in the 'args' options, you need to pass something like "-l<library_name>", "-lpigpiod_f2"
    https://gcc.gnu.org/onlinedocs/gcc/Link-Options.html

useful libraries
http://abyz.me.uk/rpi/pigpio/cif.html

how to set up visual studio for c++
https://www.youtube.com/watch?v=Ykb1h17M7rw

Debugging raspberry pi from visual studio
https://dogfeatherdesign.com/debugging-cc-code-on-a-raspberry-pi-with-visual-studio/


PI commands
- pinout	: displays the gpio pinout


# ROS2 -- https://github.com/ros2

I will be using ROS2. 

software installed on raspbery pi os (for future reference)
apt                  dconf             gold-ld                 libhardsid-builder.so.0      libpyglib-2.0-python2.7.so.0      libRTIMULib.so.7.2.1    lxinput         pkg-config.multiarch  rsyslog        tc
arandr               debug             groff                   libhardsid-builder.so.0.0.1  libpyglib-2.0-python2.7.so.0.0.0  libscsynth.so.1         man-db          pm-utils              rtkit          tcltk
arm-linux-gnueabihf  dhcpcd5           gui-pkinst              libident.so.0                libpypy-c.so                      libscsynth.so.1.0.0     menu-cache      policykit-1           ruby           thunar-archive-plugin
aspell               dpkg              gvfs                    libident.so.0.22             libqscintilla2_qt5.so.13          libsidplay2.so.1        mime            printer-driver-escpr  sasl2          tmpfiles.d
bfd-plugins          eject             ispell                  libkeybinder.so.0            libqscintilla2_qt5.so.13.1        libsidplay2.so.1.0.1    modules-load.d  pulse-12.2            scratch3       udisks2
binfmt.d             emacsen-common    jvm                     libkeybinder.so.0.1.0        libqscintilla2_qt5.so.13.1.1      libsigc-1.2.so.5        NetworkManager  pypy                  sftp-server    valgrind
blt2.5               environment.d     kernel                  libpigpiod_if2.so            libqwt-qt5.so.6                   libsigc-1.2.so.5.0.7    nodejs          python2.7             sonic-pi       vnc
bluetooth            file              klibc                   libpigpiod_if2.so.1          libqwt-qt5.so.6.1                 libsupp.a               node_modules    python3               squeak         X11
chromium-browser     gcc               libBLT.2.5.so.8.6       libpigpiod_if.so             libqwt-qt5.so.6.1.4               libwiringPiDev.so       openssh         python3.7             ssl            xorg
codeblocks           girepository-1.0  libBLTlite.2.5.so.8.6   libpigpiod_if.so.1           libreoffice                       libwiringPiDev.so.2.50  os-release      qpdfview              sudo
colord               git-core          libcodeblocks.so.0      libpigpio.so                 libresid-builder.so.0             libwiringPi.so          packagekit      raspberrypi-sys-mods  SuperCollider
compat-ld            glib-networking   libcodeblocks.so.0.0.1  libpigpio.so.1               libresid-builder.so.0.0.1         libwiringPi.so.2.50     piclone         raspi-config          systemd
cups                 gnupg             libcompface.so.1        libpigpioultrasonic.so       libRTIMULib.so                    locale                  pipanel         rc-gui                sysusers.d
dbus-1.0             gnupg2            libcompface.so.1.0.0    libpigpioultrasonic.so.2     libRTIMULib.so.7                  lp_solve                pkgconfig       rp-prefapps           tasksel
