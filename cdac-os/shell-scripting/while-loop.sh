


echo -n "Enter the number to loop: "
read number
count=0
while (( count<number ))
do echo "count = $count" 
	(( count++ ))
done
