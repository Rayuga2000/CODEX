cd ~/Downloads;
sudo apt-get update;
sudo apt-get upgrade;

wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -;
sudo apt-get install apt-transport-https;
echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list;
sudo apt-get update && sudo apt-get install sublime-text;

sudo apt-add-repository -y ppa:teejee2008/ppa;sudo apt-get update;sudo apt-get install timeshift;

sudo apt-get install gnome-tweaks -y;
sudo apt-get install code --classic;
sudo apt-get update;

wget https://dl.google.com/linux/direct/google-chrome-stable_current_amd64.deb;
sudo apt install ./google-chrome-stable_current_amd64.deb -y;

sudo apt-get install pulseaudio pavucontrol -y;
sudo apt-get install vlc -y;

curl -sS https://download.spotify.com/debian/pubkey_0D811D58.gpg | sudo apt-key add -
echo "deb http://repository.spotify.com stable non-free" | sudo tee /etc/apt/sources.list.d/spotify.list;
sudo apt-get update && sudo apt-get install spotify-client;
