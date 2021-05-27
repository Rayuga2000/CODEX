printf "Enter the Language you want to use: ";
read lang;

case "$lang" in
"c")
        cd /home/rayuga/Documents/BCA-3rd-Sem/C;
        ls -a;
        printf "Enter the Project Folder Name(insert path to make a sub folder): "
        read proj
        mkdir $proj
        cd $proj
        code main.c;;
    
"java")
        cd /home/rayuga/Documents/BCA-3rd-Sem/JAVA;
        ls -a;
        printf "Enter the Project Folder Name(insert path to make a sub folder): "
        read proj
        mkdir $proj
        cd $proj
        printf "Enter the Project Name: "
        read projName
        code $projName.java;;

"shell")
        cd /home/rayuga/Documents/BCA-3rd-Sem/SHELL;
        ls -a;
        printf "Enter the Project Folder Name(insert path to make a sub folder): "
        read proj
        mkdir $proj
        cd $proj
        printf "Enter the Project Name: "
        read projName
        code $projName.sh;;
"c++")
        cd /home/rayuga/Documents/BCA-3rd-Sem/C++;
        ls -a;
        printf "Enter the Project Folder Name(insert path to make a sub folder): "
        read proj
        mkdir $proj
        cd $proj
        code main.cpp;;
esac

echo "...Project created..."
