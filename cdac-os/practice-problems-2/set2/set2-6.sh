
echo "Enter the Directoy you want to back up"
echo -n "in this format /home/<usename>/Desktop/: "

read location

loccheck="/home/"
len=${#loccheck}
for (( i=0;i<$len;i++ ))
do
        if [[ ${location:i:1} != ${loccheck:i:1} ]]
        then
                echo "Input location properly"
                exit
        fi
done

date=$(date +%Y-%m-%d_%H-%M-%S)
backup="backup_${date}"

cp -r "$location" "$backup"

#Added -r flag to cp for recursive directory copying

