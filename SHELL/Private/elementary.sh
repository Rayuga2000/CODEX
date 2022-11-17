cd ~/Downloads;
sudo apt-get update;
sudo apt-get upgrade -y;

sudo apt-add-repository -y ppa:teejee2008/ppa;
sudo apt-get update;
sudo apt-get install timeshift;

sudo apt install software-properties-common;
sudo add-apt-repository ppa:philip.scott/elementary-tweaks;
sudo apt install elementary-tweaks;

wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb;
sudo apt install ./google-chrome-stable_current_amd64.deb -y;

sudo apt-get install pulseaudio pavucontrol -y;
sudo apt-get install libreoffice -y;
sudo apt-get install gimp -y;

sudo apt update;
sudo apt install snapd -y;
sudo snap install spotify;

sudo apt install -y git;
git config --global user.name "Rayuga2000";git config --global user.email "tsarkar431@gmail.com"

timedatectl set-local-rtc 1 --adjust-system-clock;
