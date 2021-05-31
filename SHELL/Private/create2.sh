printf "Enter the name of file: ";
read file;

tmp=${file#*.};

case "$tmp" in
"c")
        cd /home/rayuga/Documents/BCA-3rd-Sem/C;
        ls -a;
        printf "Enter the Project Folder Name(insert path to make a sub folder): "
        read proj
        mkdir $proj
        cd $proj
        code $file;;
    
"java")
        cd /home/rayuga/Documents/BCA-3rd-Sem/JAVA;
        ls -a;
        printf "Enter the Project Folder Name(insert path to make a sub folder): "
        read proj
        mkdir $proj
        cd $proj
        code $file;;

"sh")
        cd /home/rayuga/Documents/BCA-3rd-Sem/SHELL;
        ls -a;
        printf "Enter the Project Folder Name(insert path to make a sub folder): "
        read proj
        mkdir $proj
        cd $proj
        code $file;;
"cpp")
        dir=/home/rayuga/Documents/BCA-3rd-Sem/C++
        cd $dir
        ls -a
        printf "Enter the Project Folder Name(insert path to make a sub folder): "
        read proj

        if [[ -d $dir/$proj ]];then
          echo "Folder with same name already exists..."
          printf "Do you want to create a new folder?(y/n): "
          read ch

          if [[ $ch='y' ]]; then
            printf "Enter new folder name(you may insert path): "
            read folder
            mkdir $folder
            cd $folder
          else
            echo "Using pre-existing folder..."
            mkdir -p $proj
            cd $proj
          fi
        else
          mkdir -p $proj
          cd $proj
        fi
        touch $file;;
esac

echo "...Project created..."
