printf "Enter the Language you want to use: ";
read lang;
printf "Enter the Project Name: ";
read proj;

case "$lang" in
"c")
        mkdir /home/rayuga/Documents/C/$proj
        cd /home/rayuga/Documents/C/$proj
        code main.c;;
    
"java")
        mkdir /home/rayuga/Documents/JAVA/$proj
        cd /home/rayuga/Documents/JAVA/$proj
        code main.java;;

"shell")
        mkdir /home/rayuga/Documents/SHELL/$proj
        cd /home/rayuga/Documents/SHELL/$proj
        code main.sh;;
esac

echo "...Project created..."
google-chrome;
