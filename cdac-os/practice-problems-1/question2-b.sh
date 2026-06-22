
echo -n "Enter the number: "
read num

for (( i=1;i<=$num;i++ ))
do
	for (( j=1;j<=i;j++ ))
	do
		echo -n $j
	done

	if (( i!=$num ))
	then echo -n " "
	fi


	(( j-- ))
	while (( j>=1 ))
	do
		echo -n "$j"
		(( j-- ))
	done


	echo ""
done

