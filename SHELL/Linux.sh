cd /Downloads;
sudo apt-get update;
sudo apt-get upgrade -y;

wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb;
sudo apt install ./google-chrome-stable_current_amd64.deb -y;

sudo apt-get install pulseaudio pavucontrol -y;
sudo apt-get install gimp -y;

sudo apt-add-repository -y ppa:teejee2008/ppa;
sudo apt update;
sudo apt-get install timeshift;

sudo apt install htop;

sudo apt update;
sudo apt install snapd -y;
sudo snap install spotify;

#sudo apt install -y git;
#git config --global user.name "Rayuga2000";git config --global user.email "tsarkar431@gmail.com"
#git-Origin https://github.com/Rayuga2000/BCA-3rd-Sem.git

#sudo deepin-editor /etc/hosts
#61.54.25.98 community-packages.deepin.com

timedatectl set-local-rtc 1 --adjust-system-clock;#adjust system time in windows as well as other os

echo "Make sure to download VS-code from web";
printf "Also check the netdata";#netdata use=> ip:19999