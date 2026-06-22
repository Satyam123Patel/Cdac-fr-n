

echo -n "Enter the string: "
read string

len=${#string}

#here length is 4 for the card 
while (( len>0 ))
do
	(( len-- ))
	echo -n "${string:len:1}"
done

echo " "
