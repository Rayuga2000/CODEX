sudo pacman -Syu;

#wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb;
#sudo pacman -S ./google-chrome-stable_current_amd64.deb -y;

#sudo pacman -S pulseaudio pavucontrol -y;
sudo pacman -S gimp -y;

#sudo apt-add-repository -y ppa:teejee2008/ppa;
#sudo apt update;
#sudo pacman -S timeshift;

sudo pacman -S htop;

sudo ln -s /var/lib/snapd/snap /snap;

sudo snap install code --classic;

#git config --global user.name "Rayuga2000";git config --global user.email "tsarkar431@gmail.com"

timedatectl set-local-rtc 1 --adjust-system-clock;#adjust system time in windows as well as other os

echo "Also check the netdata";#netdata use=> ip:19999
