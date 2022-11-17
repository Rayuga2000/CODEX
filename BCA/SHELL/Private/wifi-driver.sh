#Script to install Realtek wifi-driver for linux

sudo apt-get install mokutil && mokutil --sb-state;#if showed secure-boot enabled please disable secure-boot in bios
sudo apt-get install git build-essential linux-headers-$(uname -r);
git clone https://github.com/lwfinger/rtw88.git;
cd rtw88;
make;sudo make install;
rm -v -R --interactive=never ~/rtw88;

reboot;