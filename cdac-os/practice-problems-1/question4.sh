
echo -n "Enter directory name: "
read dir_name

bool=0
for folder in *
do
	if [[ "$dir_name" == "$folder" ]]
   	then
        	echo "Found directory: $folder"
        	ls -la "$folder"
		(( bool=1 ))
		exit
    	fi
done

if (( $bool==0 ))
then 
	mkdir $dir_name
	echo "Successfully created $dir_name"
fi
