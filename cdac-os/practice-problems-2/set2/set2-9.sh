echo -n "Enter the Email Address: "
read email
len=${#email}

for (( i=0;i<$len;i++ ))
do
        if [[ ${email:i:1} == '@' ]]
        then 
		echo " "
		exit
		#Remember here exit is exiting from the script not the for loop
		#you can use break instead
        fi
        echo -n "${email:i:1}"
done

